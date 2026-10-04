/* verilator lint_off UNUSEDSIGNAL */
module ecc_decoder (
  input  logic [38:0] rx,              // rx[i] = position i, rx[0] = P_all
  output logic [31:0] corrected_data,
  output logic        single_error,    // odd flips, corrected (or P_all flipped)
  output logic        double_error,    // detected, NOT corrected
  output logic        uncorrectable    // odd flips, syndrome points outside 1..38
);
  always_comb begin
    logic [38:0] fixed;
    logic [5:0]  syn;
    logic        ovr;
    int          k;

    // Syndrome: bit b = XOR of every position (parity bits included)
    // whose address has bit b set
    syn = '0;
    for (int b = 0; b < 6; b++)
      for (int p = 1; p <= 38; p++)
        if (((p >> b) & 1) != 0)
          syn[b] ^= rx[p];

    // Overall parity over all 39 bits
    ovr = ^rx;

    // Defaults: no latches
    fixed         = rx;
    single_error  = 1'b0;
    double_error  = 1'b0;
    uncorrectable = 1'b0;

    if (ovr) begin
      if (syn == 6'd0) begin
        single_error = 1'b1;               // P_all itself flipped
      end else if (syn <= 6'd38) begin
        single_error = 1'b1;
        fixed[syn]   = ~rx[syn];           // correct the flipped bit
      end else begin
        uncorrectable = 1'b1;              // syndrome 39..63: no such position
      end
    end else if (syn != 6'd0) begin
      double_error = 1'b1;                 // even flips, checks fail: do not correct
    end

    // Extract data from non-power-of-two positions 1..38
    k = 0;
    corrected_data = '0;
    for (int p = 1; p <= 38; p++) begin
      if ((p & (p - 1)) != 0) begin
        corrected_data[k] = fixed[p];
        k++;
      end
    end
  end
endmodule
/* verilator lint_on UNUSEDSIGNAL */

