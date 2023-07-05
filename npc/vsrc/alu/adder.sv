module adder #(parameter WIDTH = 64)(
		input  logic [WIDTH-1:0] adder_src1    ,
		input  logic [WIDTH-1:0] adder_src0    ,
    input  logic             adder_src1_vld,
    input  logic             adder_src0_vld,
    input  logic             sign           ,
    input  logic             w_inst         ,
		input  logic             adder_AorS    ,
    input  logic             add_req        ,
		output logic [WIDTH-1:0] adder_sum     ,
		output logic             adder_co      ,
		output logic             adder_sign    
    );
	
    parameter H_WIDTH = WIDTH/2;

	typedef struct packed{
		logic ci;
		logic [WIDTH-1:0] addend0;
		logic [WIDTH-1:0] addend1;
		} addend_t;

	addend_t addend;

	logic s0;
    logic [WIDTH-1:0] adder_sum_temp;

	assign addend.ci = adder_AorS;
	assign addend.addend1 = {{H_WIDTH{!w_inst}},{H_WIDTH{1'b1}}} & {WIDTH{adder_src1_vld}} & (adder_AorS ? ~adder_src1 : adder_src1);
	assign addend.addend0 = {{H_WIDTH{!w_inst}},{H_WIDTH{1'b1}}} & {WIDTH{adder_src0_vld}} & adder_src0;
 

	assign {adder_co, adder_sign, adder_sum_temp, s0} = add_req ? ({1'b0, addend.addend0[WIDTH-1], addend.addend0,addend.ci} + {1'b0, addend.addend1[WIDTH-1], addend.addend1, addend.ci}) : 'b0;
  assign adder_sum = w_inst ? {{32{adder_sum_temp[31]}},adder_sum_temp[31:0]} : adder_sum_temp;

endmodule


