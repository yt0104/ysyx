module div 
(
    input clk,
    input rst_n, 
    input div_valid,
    input [63:0] dividend, 
    input [63:0] divisor, 
    output reg [63:0] yshang,
    output reg [63:0] yyushu, 
    output reg out_valid
);


reg[63:0] tempa;
reg[63:0] tempb;

reg[127:0] temp_a;
reg[127:0] temp_b; 

reg [5:0] status;
parameter s_idle = 6'b000000;
parameter s_init = 6'b000001;
parameter s_calc = 6'b000010;
parameter s_done = 6'b000100;


wire [127:0] temp_a_shift = {temp_a[126:0],1'b0};

reg [63:0] i;
 
always @(posedge clk)
begin
    if(~rst_n)
        begin
            i      <= 'h0;
            tempa  <= 'h1;
            tempb  <= 'h1;
            yshang <= 'h1;
            yyushu <= 'h1;
            out_valid <= 1'b0;
            status <= s_idle;
        end
    else
        begin
            case (status)
            s_idle:
                if(div_valid) begin
                    tempa <= dividend;
                    tempb <= divisor;
                    status <= s_init;
                end
                else begin
                    i     <=  'h0;
                    tempa <=  'h1;
                    tempb <=  'h1;
                    yshang <= 'h1;
                    yyushu <= 'h1;
                    out_valid <= 1'b0;
                    status <= s_idle;
                end

                
            s_init: begin
                    temp_a <= {64'h0,tempa};
                    temp_b <= {tempb,64'h0};
                    status <= s_calc;
                end

            s_calc: begin
                if(i < 64) begin
                    if(temp_a_shift[127:64] >= tempb) begin
                        temp_a <= temp_a_shift - temp_b + 1'b1;
                        end
                    else begin
                        temp_a <= temp_a_shift;
                        end
                    i <= i + 1'b1;    
                    status <= s_calc;
                end
                else status <= s_done;
                end

            s_done: begin
                yshang <= temp_a[63:0];
                yyushu <= temp_a[127:64];
                out_valid <= 1'b1;
                
                status <= s_idle;
                end
            
            default:
                status <= s_idle;
            endcase
        end
   
end
 
 
endmodule


