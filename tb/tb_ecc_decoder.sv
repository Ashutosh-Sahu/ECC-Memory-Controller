module tb_ecc_decoder;
  logic [31:0] data;
  logic [38:0] codeword, rx;
  logic [31:0] corrected_data;
  logic        single_error, double_error, uncorrectable;
  int errors, n_none, n_single, n_double, n_uncorr;

  ecc_encoder enc (.data(data), .codeword(codeword));
  ecc_decoder dec (.rx(rx), .corrected_data(corrected_data),
                   .single_error(single_error), .double_error(double_error),
                   .uncorrectable(uncorrectable));

  // Apply a fault mask to the stored codeword and wait for outputs
  task automatic apply(input logic [31:0] d, input logic [38:0] mask);
    data = d;
    #1;
    rx = codeword ^ mask;
    #1;
  endtask

  task automatic test_data(input logic [31:0] d);
    // No error
    apply(d, '0);
    n_none++;
    if (corrected_data !== d || single_error || double_error || uncorrectable) begin
      $display("FAIL none   data=%h", d); errors++;
    end

    // Single flip at every position 0..38
    for (int p = 0; p < 39; p++) begin
      apply(d, 39'd1 << p);
      n_single++;
      if (corrected_data !== d || !single_error || double_error || uncorrectable) begin
        $display("FAIL single data=%h pos=%0d", d, p); errors++;
      end
    end

    // Double flips: all pairs 0..38 (741 pairs)
    for (int p = 0; p < 39; p++)
      for (int q = p + 1; q < 39; q++) begin
        apply(d, (39'd1 << p) | (39'd1 << q));
        n_double++;
        if (!double_error || single_error || uncorrectable) begin
          $display("FAIL double data=%h pos=%0d,%0d", d, p, q); errors++;
        end
      end
  endtask

  initial begin
    errors = 0; n_none = 0; n_single = 0; n_double = 0; n_uncorr = 0;

    // Directed data values
    test_data(32'h0000_0000);
    test_data(32'hFFFF_FFFF);
    test_data(32'hA5A5_A5A5);
    test_data(32'h5A5A_5A5A);
    test_data(32'h0000_0001);
    test_data(32'h8000_0000);

    // Random data values
    for (int i = 0; i < 200; i++) test_data($urandom);

    // Directed uncorrectable case: flip positions 32, 16, 1
    // syndrome = 100000 ^ 010000 ^ 000001 = 110001 = 49 (> 38), overall parity odd
    apply(32'hDEAD_BEEF, (39'd1 << 32) | (39'd1 << 16) | (39'd1 << 1));
    n_uncorr++;
    if (!uncorrectable || single_error || double_error) begin
      $display("FAIL uncorrectable case"); errors++;
    end

    $display("cases: none=%0d single=%0d double=%0d uncorr=%0d",
             n_none, n_single, n_double, n_uncorr);
    if (errors == 0) $display("ALL DECODER TESTS PASSED");
    else             $display("DECODER TESTS FAILED: %0d", errors);
    $finish;
  end
endmodule
