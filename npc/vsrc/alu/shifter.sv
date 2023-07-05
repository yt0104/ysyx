module shifter(
	input  logic 				shift_req,
	input  logic [63:0] shift_data_in,
	input  logic        shift_data_tc, //sign unsign
	input  logic [ 5:0] shift_sh,
	input  logic        shift_sh_mode,
	input  logic        shift_dir,
	input  logic        w_inst,
	output logic [63:0] shift_data_out);


	logic [63:0] shift_res;
    logic [31:0] w_inst_shift_res;


	always_comb begin
	    if(!w_inst) begin
	        w_inst_shift_res = 32'd0;
	    	if(shift_sh_mode)  //arithmetic shift
	    	begin
	    		if(shift_dir)
	    			shift_res = $signed(shift_data_in) >>> shift_sh;
	    		else
	    			shift_res = $signed(shift_data_in) <<< shift_sh;
	    	end
	    	else  //logic shift
	    	begin
	    		if(shift_dir)
	    			shift_res = shift_data_in >> shift_sh;
	    		else
	    			shift_res = shift_data_in << shift_sh;
	    	end
	    end else begin
	        shift_res = 64'd0;
	    	if(shift_sh_mode)  //arithmetic shift
	    	begin
	    		if(shift_dir)
				w_inst_shift_res = $signed(shift_data_in[31:0]) >>> shift_sh;
	    		else
				w_inst_shift_res = $signed(shift_data_in[31:0]) <<< shift_sh;
	    	end
	    	else  //logic shift
	    	begin
	    		if(shift_dir)
				w_inst_shift_res = shift_data_in[31:0] >> shift_sh;
	    		else
				w_inst_shift_res = shift_data_in[31:0] << shift_sh;
	    	end		


		end
	end
	
	assign shift_data_out = shift_req? w_inst? ({{32{w_inst_shift_res[31]}},w_inst_shift_res}) : shift_res : 64'b0;

	endmodule