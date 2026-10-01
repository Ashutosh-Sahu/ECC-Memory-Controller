module hello;
	logic [3:0] a;
	initial begin
		a=4'b1011;
		$display("parity of %b = %b", a, ^a);
		$finish;
	end
endmodule
