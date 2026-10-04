module ecc_encoder (
  input  logic [31:0] data,
  output logic [38:0] codeword   // [i] = position i, [0] = P_all
);
  always_comb begin
    logic [38:0] cw;   // local working copy
    logic        par;
    int          k;

    cw = '0;
    k  = 0;

    // Step 1: place data bits in every non-power-of-two position 1..38
    for (int p = 1; p <= 38; p++) begin
      if ((p & (p - 1)) != 0) begin
        cw[p] = data[k];
        k++;
      end
    end

    // Step 2: Hamming parity bit b sits at position 2^b and
    // covers every data position whose address has bit b set
    for (int b = 0; b < 6; b++) begin
      par = 1'b0;
      for (int p = 1; p <= 38; p++) begin
        if (((p >> b) & 1) != 0 && ((p & (p - 1)) != 0))
          par ^= cw[p];
      end
      cw[1 << b] = par;
    end

    // Step 3: overall parity over positions 1..38
    cw[0] = ^cw[38:1];

    codeword = cw;
  end
endmodule

