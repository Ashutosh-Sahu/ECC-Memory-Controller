module tb_ecc_top;
  localparam int AW = 4;

  logic          clk;
  logic          write_en, read_en;
  logic [AW-1:0] addr;
  logic [31:0]   write_data, read_data;
  logic          single_error, double_error, uncorrectable, error_corrected;

  logic [31:0] model [0:(1<<AW)-1];   // simple reference: what we expect to read
  int errors;

  ecc_top #(.ADDR_WIDTH(AW)) dut (.*);

  initial clk = 0;
  always #5 clk <= ~clk;

  task automatic do_write(input logic [AW-1:0] a, input logic [31:0] d);
    @(negedge clk);
    write_en = 1; read_en = 0; addr = a; write_data = d;
    @(negedge clk);
    write_en = 0;
    model[a] = d;
  endtask

  task automatic do_read(input logic [AW-1:0] a);
    read_en = 1; write_en = 0; addr = a;
    #1;
    if (read_data !== model[a] || single_error !== 1'b0 ||
        double_error !== 1'b0 || uncorrectable !== 1'b0 ||
        error_corrected !== 1'b0) begin
      $display("FAIL read addr=%0d got=%h exp=%h flags=%b%b%b%b",
               a, read_data, model[a],
               single_error, double_error, uncorrectable, error_corrected);
      errors++;
    end
    read_en = 0;
  endtask

  initial begin
    errors = 0;
    write_en = 0; read_en = 0; addr = '0; write_data = '0;

    // Test 2/3: simple write then read
    do_write(4'd3, 32'hDEAD_BEEF);
    do_read(4'd3);

    // Test 4: all addresses, directed data
    for (int a = 0; a < (1<<AW); a++) do_write(a[AW-1:0], 32'h1000_0000 + a);
    for (int a = 0; a < (1<<AW); a++) do_read(a[AW-1:0]);

    // Test 11/12: random addresses and data, repeated writes
    for (int i = 0; i < 500; i++) begin
      logic [AW-1:0] a;
      a = AW'($urandom);
      do_write(a, $urandom);
      do_read(a);
    end

    // Re-read everything after the random phase
    for (int a = 0; a < (1<<AW); a++) do_read(a[AW-1:0]);

    if (errors == 0) $display("ALL TOP TESTS PASSED");
    else             $display("TOP TESTS FAILED: %0d", errors);
    $finish;
  end
endmodule
