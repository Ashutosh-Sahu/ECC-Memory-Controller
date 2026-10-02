module tb_ecc_encoder4;
  logic [3:0] data;
  logic [7:0] codeword;

  ecc_encoder4 dut1 (.data(data), .codeword(codeword));

  initial begin
    for (int i = 0; i < 16; i++) begin
      data = i[3:0];
      #1;
      $display("data=%b codeword=%b total_parity=%b", data, codeword, ^codeword);
    end
    $finish;
  end
endmodule
