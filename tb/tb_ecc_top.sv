module tb_ecc_top;
  localparam int AW     = 4;
  localparam int DEPTH  = 1 << AW;
  localparam int N_RAND = 500;

  logic          clk;
  logic          write_en, read_en;
  logic [AW-1:0] addr;
  logic [31:0]   write_data, read_data;
  logic          single_error, double_error, uncorrectable, error_corrected;
  logic [31:0]   expected_data;   // what read_data should be (used by assertion A3)

  int total_tests, n_clean, n_corrected, n_detected, mismatches, assert_fails;

  ecc_top #(.ADDR_WIDTH(AW)) dut (.*);

  initial clk = 0;
  always #5 clk <= ~clk;

  // ------------------------------------------------------------------
  // SVA assertions (sampled on the rising clock edge)
  // ------------------------------------------------------------------
  // A1: at most one status flag is high at any time
  a_flags_exclusive: assert property (@(posedge clk)
      $onehot0({single_error, double_error, uncorrectable}))
    else begin $error("A1: status flags not mutually exclusive"); assert_fails++; end

  // A2: single-port memory, so read and write must never be requested together
  a_no_rw_contention: assert property (@(posedge clk)
      !(write_en && read_en))
    else begin $error("A2: simultaneous read and write"); assert_fails++; end

  // A3: whenever a single error is reported during a read, the data must be corrected
  a_correction_integrity: assert property (@(posedge clk)
      (read_en && single_error) |-> (read_data == expected_data))
    else begin $error("A3: single_error but read_data != expected_data"); assert_fails++; end

  // A4: no error flags when not reading
  a_no_flags_when_idle: assert property (@(posedge clk)
      !read_en |-> !(single_error || double_error || uncorrectable || error_corrected))
    else begin $error("A4: error flag raised while idle"); assert_fails++; end

  // ------------------------------------------------------------------
  // Helpers
  // ------------------------------------------------------------------
  function automatic logic [38:0] bm(input int p);   // one-hot bit mask
    return 39'd1 << p;
  endfunction

  task automatic do_write(input logic [AW-1:0] a, input logic [31:0] d);
    @(negedge clk);
    write_en = 1; read_en = 0; addr = a; write_data = d;
    @(negedge clk);
    write_en = 0;
  endtask

  // Flip stored bits (testbench-only hierarchical access, not in the RTL)
  task automatic inject(input logic [AW-1:0] a, input logic [38:0] mask);
    dut.u_mem.mem[a] = dut.u_mem.mem[a] ^ mask;
  endtask

  // Called at a negedge; read_en stays high through the next posedge
  // so the assertions sample a real read.
  task automatic do_read(input logic [AW-1:0] a, input logic [31:0] exp);
    write_en = 0; read_en = 1; addr = a; expected_data = exp;
    #1;
  endtask

  // One complete test: write, inject, read, self-check.
  // Expected result comes from the number of flipped bits.
  task automatic run_case(input string name, input logic [AW-1:0] a,
                          input logic [31:0] d, input logic [38:0] mask,
                          input bit verbose);
    int nflips;
    bit exp_single, exp_double, bad;

    nflips     = $countones(mask);
    exp_single = (nflips == 1);
    exp_double = (nflips == 2);

    do_write(a, d);
    if (mask != '0) inject(a, mask);
    do_read(a, d);
    total_tests++;

    bad = 1'b0;
    if (single_error    !== exp_single) bad = 1'b1;
    if (error_corrected !== exp_single) bad = 1'b1;
    if (double_error    !== exp_double) bad = 1'b1;
    if (uncorrectable   !== 1'b0)       bad = 1'b1;
    if (!exp_double && read_data !== d) bad = 1'b1;  // data guaranteed only for 0/1 flips

    if (bad) begin
      mismatches++;
      $display("[FAIL] %s a=%0d data=%h mask=%h | got d=%h s=%b d=%b u=%b",
               name, a, d, mask, read_data, single_error, double_error, uncorrectable);
    end else begin
      if (nflips == 0)      n_clean++;
      else if (exp_single)  n_corrected++;
      else                  n_detected++;
      if (verbose) $display("[PASS] %s (a=%0d, flips=%0d)", name, a, nflips);
    end
  endtask

  // ------------------------------------------------------------------
  // Test sequence
  // ------------------------------------------------------------------
  initial begin
    total_tests = 0; n_clean = 0; n_corrected = 0; n_detected = 0;
    mismatches = 0; assert_fails = 0;
    write_en = 0; read_en = 0; addr = '0; write_data = '0; expected_data = '0;

    $display("---- Directed tests ----");

    // 1. Clean write/read at every address (also uses DEPTH)
    for (int a = 0; a < DEPTH; a++)
      run_case("clean write/read", a[AW-1:0], 32'h1000_0000 + a, '0, 1'b0);
    run_case("clean write/read", 4'd3, 32'hDEAD_BEEF, '0, 1'b1);

    // 2. 1-bit DATA flip (positions 3, 20, 38 are all data positions)
    run_case("1-bit data flip pos3",  4'd5, 32'hA5A5_A5A5, bm(3),  1'b1);
    run_case("1-bit data flip pos20", 4'd5, 32'hA5A5_A5A5, bm(20), 1'b1);
    run_case("1-bit data flip pos38", 4'd5, 32'hA5A5_A5A5, bm(38), 1'b1);

    // 3. 1-bit PARITY flip (Hamming bits at 8, 32; overall parity at 0)
    run_case("1-bit parity flip P8",    4'd7, 32'h5A5A_5A5A, bm(8),  1'b1);
    run_case("1-bit parity flip P32",   4'd7, 32'h5A5A_5A5A, bm(32), 1'b1);
    run_case("1-bit parity flip P_all", 4'd7, 32'h5A5A_5A5A, bm(0),  1'b1);

    // 4. 2-bit DATA flip (detected, not corrected)
    run_case("2-bit data flip 3,38", 4'd9, 32'hCAFE_F00D, bm(3) | bm(38), 1'b1);
    run_case("2-bit data flip 5,6",  4'd9, 32'hCAFE_F00D, bm(5) | bm(6),  1'b1);

    $display("---- Randomized tests (%0d iterations) ----", N_RAND);
    for (int i = 0; i < N_RAND; i++) begin
      logic [AW-1:0] a;
      logic [31:0]   d;
      logic [38:0]   m;
      int            kind, p, q;
      a    = AW'($urandom);
      d    = $urandom;
      kind = $urandom_range(0, 2);          // 0 none, 1 single, 2 double
      p    = $urandom_range(0, 38);
      q    = $urandom_range(0, 38);
      while (q == p) q = $urandom_range(0, 38);
      m = '0;
      if (kind >= 1) m |= bm(p);
      if (kind == 2) m |= bm(q);
      run_case("random", a, d, m, 1'b0);
    end

    repeat (2) @(negedge clk);   // let the last read reach a clock edge for the assertions

    $display("==========================================");
    $display(" ECC TESTBENCH SUMMARY");
    $display("==========================================");
    $display(" Total tests          : %0d", total_tests);
    $display(" Clean (no error)     : %0d", n_clean);
    $display(" Corrected (1-bit)    : %0d", n_corrected);
    $display(" Detected (2-bit)     : %0d", n_detected);
    $display(" Mismatches           : %0d", mismatches);
    $display(" Assertion failures   : %0d", assert_fails);
    if (mismatches == 0 && assert_fails == 0) $display(" RESULT: PASS");
    else                                      $display(" RESULT: FAIL");
    $display("==========================================");
    $finish;
  end
endmodule
