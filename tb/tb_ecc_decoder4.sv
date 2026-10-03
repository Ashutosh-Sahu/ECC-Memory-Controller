module tb_ecc_decoder4;
logic [3:0] data;
logic [7:0] codeword;
logic [7:0] rx;
logic [3:0] corrected_data;
logic       single_error;
logic       double_error;

ecc_encoder4 encoder (
  .data(data),
  .codeword(codeword)
);
ecc_decoder4 decoder (
  .rx(rx),
  .corrected_data(corrected_data),
  .single_error(single_error),
  .double_error(double_error)
);

int error;
initial begin
  error=0;
  // case 1, jb sb sahi h, no errors
  for ( int i=0; i<16; i++) begin
    data = i[3:0];
    #1;
    rx= codeword;
    #1;
    if ( corrected_data !== data || single_error == 1'b1 || double_error ==1'b1) begin
      $display("test failed for data %0d, codeword %b, rx %b, corrected_data %b, single_error %b, double_error %b", data, codeword, rx, corrected_data, single_error, double_error);
      error++;
    end
  end

  // case 2, when single bit error occurs
  for (int i=0;i<16;i++) begin
    for (int j=0; j<8; j++) begin
      data = i[3:0];
      #1;
      rx= codeword;
      rx[j] = ~rx[j];
      #1;
      if (corrected_data!== data || single_error ==1'b0 || double_error==1'b1) begin
        $display("test failed for data %0d, codeword %b, rx %b, corrected_data %b, single_error %b, double_error %b", data, codeword, rx, corrected_data, single_error, double_error);
        error++;
      end
    end
  end

  // case 3, when double bit error occurs
  for (int i=0; i<16; i++) begin
    for (int j=0; j<8; j++) begin
      for (int k=j+1; k<8; k++) begin
        data=i[3:0];
        #1;
        rx= codeword;
        rx[j] = ~rx[j];
        rx[k] = ~rx[k];
        #1;
        if (single_error ==1'b1 || double_error == 1'b0) begin
          $display("test failed for data %0d, codeword %b, rx %b, corrected_data %b, single_error %b, double_error %b", data, codeword, rx, corrected_data, single_error, double_error);
          error++;
        end
      end
    end
  end

  if (error==0) begin
    $display("ALL TEST CASES PASSED!");
  end 
  else begin
    $display("total %0d test cases failed", error);
  end
  $finish;

end
endmodule
