module div(
    input [31:0] dividend,
    input [31:0] divisor,
    input div_valid,
    input clk,
    input rst_n,
    output [31:0] q,
    output [31:0] r,
    output reg out_valid
    );

    reg busy;
    reg [5:0] count;
    reg [31:0] reg_q;
    reg [31:0] reg_r;
    reg [31:0] reg_b;
    reg r_sign;
    wire [32:0] sub_add=r_sign?({reg_r,q[31]}+{1'b0,reg_b}):
                                ({reg_r,q[31]}-{1'b0,reg_b});
    assign r=r_sign?reg_r+reg_b:reg_r;
    assign q=reg_q;
    
    always @(posedge clk)
    if(~rst_n)begin
        count<=0;
        busy<=0;
    end
    else begin
        if(div_valid) begin

            reg_r<=32'b0;
            r_sign<=0;
            reg_q<=dividend;
            reg_b<=divisor;

            count<=0;
            busy<=1;
        end
        else if(busy) begin

            reg_r<=sub_add[31:0];
            r_sign<=sub_add[32];
            reg_q<={reg_q[30:0],~sub_add[32]};

            count<=count+1;
            if(count==31) begin 
                busy <= 0;
                out_valid <= 1;
            end
        end
        else out_valid <= 0;
    end 



endmodule

