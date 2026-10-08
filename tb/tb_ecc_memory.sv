module tb_ecc_memory;
  logic        clk;
  logic        we;
  logic [3:0]  addr;
  logic [38:0] wdata, rdata;
  int errors;

  ecc_memory #(.WIDTH(39), .ADDR_WIDTH(4)) dut (
    .clk(clk), .we(we), .addr(addr), .wdata(wdata), .rdata(rdata));

  initial clk = 0;
  always #5 clk <= ~clk;

  task automatic write(input logic [3:0] a, input logic [38:0] d);
    @(negedge clk);
    we = 1; addr = a; wdata = d;
    @(negedge clk);
    we = 0;
  endtask

  task automatic read_check(input logic [3:0] a, input logic [38:0] expected);
    addr = a;
    #1;
    if (rdata !== expected) begin
      $display("FAIL addr=%0d got=%h expected=%h", a, rdata, expected);
      errors++;
    end
  endtask

  initial begin
    errors = 0;
    we = 0; addr = '0; wdata = '0;

    // Write distinct patterns to every address
    for (int i = 0; i < 16; i++)
      write(i[3:0], {7'd0, 32'hA000_0000} + 39'(i) * 39'h0123_4567);

    // Read all back
    for (int i = 0; i < 16; i++)
      read_check(i[3:0], {7'd0, 32'hA000_0000} + 39'(i) * 39'h0123_4567);

    // Overwrite one address, confirm neighbours unchanged
    write(4'd5, 39'h7F_FFFF_FFFF);
    read_check(4'd5, 39'h7F_FFFF_FFFF);
    read_check(4'd4, {7'd0, 32'hA000_0000} + 39'd4 * 39'h0123_4567);
    read_check(4'd6, {7'd0, 32'hA000_0000} + 39'd6 * 39'h0123_4567);

    if (errors == 0) $display("ALL MEMORY TESTS PASSED");
    else             $display("MEMORY TESTS FAILED: %0d", errors);
    $finish;
  end
endmodule
