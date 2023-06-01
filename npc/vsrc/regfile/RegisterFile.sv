//`include "vsrc/para.sv"

//32 register
module RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 64) (
  input clk,

  output [DATA_WIDTH-1:0] rdata1,
  input  [ADDR_WIDTH-1:0] raddr1,

  output [DATA_WIDTH-1:0] rdata2,
  input  [ADDR_WIDTH-1:0] raddr2,

  input  [DATA_WIDTH-1:0] wdata,
  input  [ADDR_WIDTH-1:0] waddr,
  input wen
);

reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];


import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
initial set_gpr_ptr(rf);  // rf为通用寄存器的二维数组变量


  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end

assign rdata1 = rf[raddr1];
assign rdata2 = rf[raddr2];


endmodule






