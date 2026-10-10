module tb_ecc_faults;
  localparam int AW = 4;

  logic          clk;
  logic          write_en, read_en;
  logic [AW-1:0] addr;
  logic [31:0]   write_data, read_data;
  logic          single_error, double_error, uncorrectable, error_corrected;
  int errors, n_single, n_double;

  ecc_top #(.ADDR_WIDTH(AW)) dut (.*);

  initial clk = 0;
  always #5 clk <= ~clk;

  task automatic do_write(input logic [AW-1:0] a, input logic [31:0] d);
    @(negedge clk);
    write_en = 1; read_en = 0; addr = a; write_data = d;
    @(negedge clk);
    write_en = 0;
  endtask

  task automatic inject(input logic [AW-1:0] a, input logic [38:0] mask);
    dut.u_mem.mem[a] = dut.u_mem.mem[a] ^ mask;
  endtask

  task automatic do_read(input logic [AW-1:0] a);
    read_en = 1; write_en = 0; addr = a;
    #1;
  endtask

  task automatic run_single(input logic [AW-1:0] a, input logic [31:0] d);
    for (int p = 0; p < 39; p++) begin
      do_write(a, d);
      inject(a, 39'd1 << p);
      do_read(a);
      n_single++;
      if (read_data !== d || !single_error || double_error ||
          uncorrectable || !error_corrected) begin
        $display("FAIL single a=%0d d=%h pos=%0d", a, d, p);
        errors++;
      end
      // persistence: the stored word is still corrupted, a second read agrees
      #1;
      if (read_data !== d || !single_error) begin
        $display("FAIL persistence a=%0d pos=%0d", a, p);
        errors++;
      end
      read_en = 0;
    end
  endtask

  task automatic run_double(input logic [AW-1:0] a, input logic [31:0] d);
    for (int p = 0; p < 39; p++)
      for (int q = p + 1; q < 39; q++) begin
        do_write(a, d);
        inject(a, (39'd1 << p) | (39'd1 << q));
        do_read(a);
        n_double++;
        if (!double_error || single_error || uncorrectable || error_corrected) begin
          $display("FAIL double a=%0d d=%h pos=%0d,%0d", a, d, p, q);
          errors++;
        end
        read_en = 0;
      end
  endtask

  initial begin
    errors = 0; n_single = 0; n_double = 0;
    write_en = 0; read_en = 0; addr = '0; write_data = '0;

    run_single(4'd2, 32'hDEAD_BEEF);
    run_single(4'd9, 32'h0000_0000);
    run_double(4'd5, 32'hCAFE_F00D);
    run_double(4'd12, 32'hFFFF_FFFF);

    $display("cases: single=%0d double=%0d", n_single, n_double);
    if (errors == 0) $display("ALL FAULT TESTS PASSED");
    else             $display("FAULT TESTS FAILED: %0d", errors);
    $finish;
  end
endmodule


