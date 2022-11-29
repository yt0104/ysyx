module sw(
  input clk,
  input rst,
  input a,
  input b,
  output reg f
);

always@(posedge clk )
if(rst) f <= 0;
else f <= a^b;

	

endmodule

