module mul(
    input clk,
    input rst_n,

    input mul_valid,
    input [63:0] multiplicand,
    input [63:0] multiplier,

    output reg out_valid,
    output [63:0] result_h,
    output [63:0] result_l

);


reg [6:0] cnt;
always @(posedge clk)
    if(!rst_n) cnt <= 7'd0;
    else if(mul_valid && cnt == 0) cnt <= cnt + 1;
    else if(cnt == 7'd64) cnt <= 0;
    else if(cnt != 0) cnt <= cnt + 1;


reg [63:0] multiplicand_r;
reg [63:0] multiplier_r;

always @(posedge clk)
    if(~rst_n) {multiplicand_r, multiplier_r} <= 0;
    else if(mul_valid && cnt == 0) {multiplicand_r, multiplier_r} <= {multiplicand, multiplier};


always @(posedge clk)
    if(!rst_n) out_valid <= 1'b0;
    else if(cnt == 7'd64) out_valid <= 1'b1;
    else out_valid <= 1'b0;


reg [127:0] result_reg;
always @(posedge clk)
    if(~rst_n) result_reg <= 0;
    else if(cnt > 7'd0 && cnt <= 7'd64) begin
        if(multiplicand_r[cnt-1]) result_reg <= result_reg + ({64'b0, multiplier_r} << (cnt-1));
    end
    else result_reg <= 0;

assign result_h = result_reg[127:64];
assign result_l = result_reg[63:0];


endmodule

