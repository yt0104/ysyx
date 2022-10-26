//`include "para.sv"

//负责根据当前PC从存储器中取出一条指令
module IFU();

input clk;
input rst_n;
input [`ISA_WIDTH-1:0 ] pc;
output [`INST_WIDTH-1:0 ] inst;





endmodule