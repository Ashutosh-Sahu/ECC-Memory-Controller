module tb_ecc_encoder;
  logic [31:0] data;
  logic [38:0] codeword;
  int errors;
  int covers [6];

  ecc_encoder dut (.data(data), .codeword(codeword));

  function automatic bit is_pow2(input int p);
    return (p & (p - 1)) == 0;
  endfunction

  // Checks properties every valid codeword must have
  task automatic check(input logic [31:0] d);
    logic [31:0] got;
    logic        chk;
    int          k;
    bit          bad;
    data = d;
    #1;
    bad = 0;

    // 1. total parity even
    if ((^codeword) !== 1'b0) bad = 1;

    // 2. every Hamming check passes (syndrome = 000000)
    for (int b = 0; b < 6; b++) begin
      chk = 1'b0;
      for (int p = 1; p <= 38; p++)
        if (((p >> b) & 1) != 0) chk ^= codeword[p];
      if (chk !== 1'b0) bad = 1;
    end

    // 3. data read back from non-parity positions equals input
    k = 0;
    got = '0;
    for (int p = 1; p <= 38; p++)
      if (!is_pow2(p)) begin
        got[k] = codeword[p];
        k++;
      end
    if (got !== d) bad = 1;

    if (bad) begin
      $display("FAIL data=%h codeword=%h", d, codeword);
      errors++;
    end
  endtask

  initial begin
    errors = 0;

    // Coverage counts: should match your Task 1 lists (18/18/18/15/15/6)
    for (int b = 0; b < 6; b++) begin
      covers[b] = 0;
      for (int p = 1; p <= 38; p++)
        if (((p >> b) & 1) != 0 && !is_pow2(p)) covers[b]++;
    end
    $display("coverage counts P1..P32: %0d %0d %0d %0d %0d %0d",
             covers[0], covers[1], covers[2], covers[3], covers[4], covers[5]);

    // Hand-computed directed cases
    data = 32'h0000_0000; #1;
    if (codeword !== 39'h00_0000_0000) begin $display("FAIL zero"); errors++; end

    data = 32'h0000_0001; #1;   // d0 -> pos 3 -> P1,P2,P_all
    if (codeword !== 39'h00_0000_000F) begin $display("FAIL d0 got %h", codeword); errors++; end

    data = 32'h8000_0000; #1;   // d31 -> pos 38 -> P2,P4,P32
    if (codeword !== 39'h41_0000_0014) begin $display("FAIL d31 got %h", codeword); errors++; end

    // Property checks
    check(32'hFFFF_FFFF);
    for (int i = 0; i < 32; i++) check(32'd1 << i);       // each data bit alone
    for (int i = 0; i < 10000; i++) check($urandom);       // random data

    if (errors == 0) $display("ALL ENCODER TESTS PASSED");
    else             $display("ENCODER TESTS FAILED: %0d", errors);
    $finish;
  end
endmodule

