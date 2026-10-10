module ecc_top #(
  parameter int ADDR_WIDTH = 8
)(
  input  logic                  clk,
  input  logic                  write_en,
  input  logic                  read_en,
  input  logic [ADDR_WIDTH-1:0] addr,
  input  logic [31:0]           write_data,
  output logic [31:0]           read_data,
  output logic                  single_error,
  output logic                  double_error,
  output logic                  uncorrectable,
  output logic                  error_corrected
);
  logic [38:0] enc_cw, stored_cw;
  logic        dec_single, dec_double, dec_uncorr;
  logic        read_valid;

  // Write path: data -> encoder -> memory
  ecc_encoder u_enc (
    .data     (write_data),
    .codeword (enc_cw)
  );

  ecc_memory #(.WIDTH(39), .ADDR_WIDTH(ADDR_WIDTH)) u_mem (
    .clk   (clk),
    .we    (write_en),
    .addr  (addr),
    .wdata (enc_cw),
    .rdata (stored_cw)
  );

  // Read path: memory -> decoder -> output
  ecc_decoder u_dec (
    .rx             (stored_cw),
    .corrected_data (read_data),
    .single_error   (dec_single),
    .double_error   (dec_double),
    .uncorrectable  (dec_uncorr)
  );

  // Status flags are only meaningful during a legal read
  assign read_valid      = read_en & ~write_en;
  assign single_error    = read_valid & dec_single;
  assign double_error    = read_valid & dec_double;
  assign uncorrectable   = read_valid & dec_uncorr;
  assign error_corrected = single_error;
endmodule
