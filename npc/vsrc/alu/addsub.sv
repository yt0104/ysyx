module addsub #(parameter WIDTH = 64)(
		input  logic [WIDTH-1:0] addsub_src1    ,
		input  logic [WIDTH-1:0] addsub_src0    ,
    input  logic             addsub_src1_vld,
    input  logic             addsub_src0_vld,
    input  logic             sign           ,
    input  logic             w_inst         ,
		input  logic             addsub_AorS    ,
    input  logic             exe_add        ,
		output logic [WIDTH-1:0] addsub_sum     ,
		output logic             addsub_co      ,
		output logic             addsub_sign    
    );
	
    parameter H_WIDTH = WIDTH/2;

	typedef struct {
		logic ci;
		logic [WIDTH-1:0] addend0;
		logic [WIDTH-1:0] addend1;
		} addend_t;

	addend_t addend;

	logic s0;
    logic [WIDTH-1:0] addsub_sum_temp;

	assign addend.ci = addsub_AorS;
	assign addend.addend1 = {{H_WIDTH{!w_inst}},{H_WIDTH{1'b1}}} & {WIDTH{addsub_src1_vld}} & (addsub_AorS ? ~addsub_src1 : addsub_src1);
	assign addend.addend0 = {{H_WIDTH{!w_inst}},{H_WIDTH{1'b1}}} & {WIDTH{addsub_src0_vld}} & addsub_src0;
 

	assign {addsub_co, addsub_sign, addsub_sum_temp, s0} = exe_add ? ({1'b0, addend.addend0[WIDTH-1], addend.addend0,addend.ci} + {1'b0, addend.addend1[WIDTH-1], addend.addend1, addend.ci}) : 'b0;
  assign addsub_sum = w_inst ? {{32{addsub_sum_temp[31]}},addsub_sum_temp[31:0]} : addsub_sum_temp;

endmodule


