module div(
    input clk,
    input rst_n,

    input sign_div,
    input divw,

    input [63:0] dividend,
    input [63:0] divisor,
    input div_valid,

    output [63:0] quotient,
    output [63:0] remainder,
    output out_valid
    );

    
    reg [5:0] count;
    reg [63:0] reg_q;
    reg [63:0] reg_r;
    reg [63:0] reg_b;
    reg r_sign;
    reg dividend_sign, divisor_sign;
    
    wire [63:0] op_dividend = divw? sign_div? { {32{dividend[31]}}, dividend[31:0] } : { 32'b0, dividend[31:0] } : dividend;
    wire [63:0] op_divisor  = divw? sign_div? { {32{divisor [31]}}, divisor [31:0] } : { 32'b0, divisor [31:0] } : divisor ;

    wire [64:0] sub_add = r_sign?({reg_r,reg_q[63]}+{1'b0,reg_b}):
                                ({reg_r,reg_q[63]}-{1'b0,reg_b});

    wire [63:0] reg_r2 = r_sign? reg_r + reg_b: reg_r;

    assign remainder= dividend_sign? (~reg_r2 + 1): reg_r2;
    assign quotient = (divisor_sign ^ dividend_sign)? (~reg_q + 1): reg_q;


    reg busy;
    reg busy_r;
    always @(posedge clk)
        if(~rst_n) busy_r <= busy;
        else busy_r <= busy;

    assign out_valid = ~busy & busy_r;

    always @(posedge clk)
    if(~rst_n)begin
        count<=0;
        busy<=0;
        r_sign<=0;
        {dividend_sign, divisor_sign} <= 2'b00;
        {reg_r, reg_q, reg_b} <= 0;
    end
    else begin
        if(div_valid) begin

            if(sign_div) begin
                //signed
                {dividend_sign, divisor_sign} <= {op_dividend[63], op_divisor[63]};
                reg_q <= op_dividend[63]? ~op_dividend + 1: op_dividend;
                reg_b <= op_divisor[63]? ~op_divisor + 1: op_divisor;
                end
            else begin
                //unsigned
                {dividend_sign, divisor_sign} <= 2'b00;
                reg_q<= op_dividend;
                reg_b<= op_divisor;
            end

            reg_r<=64'b0;
            r_sign<=0;
            count<=0;
            busy<=1;
            
        end
        else if(busy) begin

            reg_r<=sub_add[63:0];
            r_sign<=sub_add[64];
            reg_q<={reg_q[62:0],~sub_add[64]};

            count<=count+1;
            if(count==63) begin 
                busy <= 0;
            end
        end
    end 



endmodule

