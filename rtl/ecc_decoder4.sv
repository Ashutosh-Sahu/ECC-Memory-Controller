module ecc_decoder4 (
  input  logic [7:0] rx,
  output logic [3:0] corrected_data,
  output logic       single_error,
  output logic       double_error
);
  logic [2:0] syndrome;
  logic       overall_parity;
  logic [7:0] fixed;    

  assign syndrome[0] = rx[1] ^ rx[3] ^ rx[5] ^ rx[7];
  assign syndrome[1] = rx[2] ^ rx[3] ^ rx[6] ^ rx[7];
  assign syndrome[2] = rx[4] ^ rx[5] ^ rx[6] ^ rx[7];
  assign overall_parity = ^rx;

  always_comb begin
    // defaults
    fixed        = rx;
    single_error = 1'b0;
    double_error = 1'b0;

    if (overall_parity) begin
      // odd number of flips: treat as single error
      single_error = 1'b1;
      if (syndrome != 3'b000)
        fixed[syndrome] = ~rx[syndrome];   // else: P_all itself flipped
    end else if (syndrome != 3'b000) begin
      // even flips, but checks fail: double error
      double_error = 1'b1;                 // do NOT correct
    end
  end

  assign corrected_data = {fixed[7], fixed[6], fixed[5], fixed[3]};

endmodule

