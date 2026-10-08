module ecc_memory #(
  parameter int WIDTH      = 39,
  parameter int ADDR_WIDTH = 8
)(
  input  logic                  clk,
  input  logic                  we,
  input  logic [ADDR_WIDTH-1:0] addr,
  input  logic [WIDTH-1:0]      wdata,
  output logic [WIDTH-1:0]      rdata
);
  localparam int DEPTH = 1 << ADDR_WIDTH;

  logic [WIDTH-1:0] mem [0:DEPTH-1];

  // Synchronous write
  always_ff @(posedge clk) begin
    if (we)
      mem[addr] <= wdata;
  end

  // Combinational read 
  assign rdata = mem[addr];
endmodule
