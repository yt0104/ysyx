
//4 register
module CSRegisterFile #(ADDR_WIDTH = 2, DATA_WIDTH = 64) (
  input clk,

  output [DATA_WIDTH-1:0] rdata,
  input  [ADDR_WIDTH-1:0] raddr,

  input  [DATA_WIDTH-1:0] wdata,
  input  [ADDR_WIDTH-1:0] waddr,
  input  wen
);

reg [DATA_WIDTH-1:0] csrf [2**ADDR_WIDTH-1:0];



always_ff @(posedge clk) begin
  if (wen) csrf[waddr] <= wdata;
end

assign rdata = csrf[raddr];


endmodule






