module ecc_encoder4 (
  input  logic [3:0] data,
  output logic [7:0] codeword
);
  logic p1, p2, p4, p_all;

  assign p1 = data[0] ^ data[1] ^ data[3];
  assign p2 = data[0] ^ data[2] ^ data[3];
  assign p4 = data[1] ^ data[2] ^ data[3];

  // positions 7..1
  logic [7:1] hamming_word;
  assign hamming_word = {data[3], data[2], data[1], p4, data[0], p2, p1};

  assign p_all    = ^hamming_word;
  assign codeword = {hamming_word, p_all};
endmodule
