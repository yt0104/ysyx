module mult_wallace #( WIDTH = 64) (
	input  logic               clk,
	input  logic 							 mult_req,
	input  logic [WIDTH-1:0]   mult_src0,
	input  logic [WIDTH-1:0]   mult_src1,
	input  logic               mult_sign,
	output logic [2*WIDTH-1:0] mult_data_out,
	output logic 							 mult_data_vld
	);

	parameter EXTWIDTH = WIDTH + 2;
	parameter HALFEXTWIDTH = EXTWIDTH/2;

	logic [2*EXTWIDTH : 0] mult_data_out_ext;
	
	typedef struct packed {
		logic minus;
		logic plus;
		logic minus_times;
		logic plus_times;
		} x_sel_flg_t;

	typedef struct packed {
		logic [1:0] x_in;
		x_sel_flg_t x_sel_flg;
		} one_group_one_bit_input_strt_t;

	function automatic logic one_group_one_bit_f(one_group_one_bit_input_strt_t f_input);
		logic f_output;
		f_output = ~((~(f_input.x_sel_flg.minus & (~f_input.x_in[1])))&(~(f_input.x_sel_flg.plus & f_input.x_in[1]))&(~(f_input.x_sel_flg.minus_times & ~(f_input.x_in[0])))&(~(f_input.x_sel_flg.plus_times & f_input.x_in[0])));
		return f_output;
	endfunction

	typedef struct packed {
		logic [2:0] y_in;
		logic [EXTWIDTH-1:0] x_in;
		} one_group_all_bit_input_strt_t;

	typedef struct packed {
		logic sign;
		logic [EXTWIDTH-1:0] part_prod;
		logic  c_0;
		} one_group_all_bit_output_strt_t;

	function automatic one_group_all_bit_output_strt_t one_group_all_bit_f(one_group_all_bit_input_strt_t f_input);
		x_sel_flg_t x_sel_flg;
		one_group_one_bit_input_strt_t one_group_one_bit_inputs[EXTWIDTH-1:0];
		logic [EXTWIDTH-1:0] x_l_sft_1_bit;
		one_group_all_bit_output_strt_t f_output;
	
		x_sel_flg.minus = ~((~((f_input.y_in[2])&(~f_input.y_in[1])&(f_input.y_in[0])))&(~((f_input.y_in[2])&(f_input.y_in[1])&(~f_input.y_in[0]))));
		x_sel_flg.plus = ~((~((~f_input.y_in[2])&(~f_input.y_in[1])&(f_input.y_in[0])))&(~((~f_input.y_in[2])&(f_input.y_in[1])&(~f_input.y_in[0]))));  
		x_sel_flg.minus_times = (f_input.y_in[2])&(~f_input.y_in[1])&(~f_input.y_in[0]);
		
		x_sel_flg.plus_times = (~f_input.y_in[2])&(f_input.y_in[1])&(f_input.y_in[0]);
		

		x_l_sft_1_bit = f_input.x_in << 1; 
		for (int i = 0; i <= EXTWIDTH-1; i=i+1)
		begin
			one_group_one_bit_inputs[i].x_in[0] = x_l_sft_1_bit[i];
			one_group_one_bit_inputs[i].x_in[1] = f_input.x_in[i];
			one_group_one_bit_inputs[i].x_sel_flg = x_sel_flg;
		end

		f_output.sign = (~f_input.y_in[2]&f_input.y_in[0]&f_input.x_in[EXTWIDTH-1]) | (~f_input.y_in[2]&f_input.y_in[1]&f_input.x_in[EXTWIDTH-1]) | (f_input.y_in[2]&~f_input.y_in[1]&~f_input.x_in[EXTWIDTH-1]) | (f_input.y_in[2]&~f_input.y_in[0]&~f_input.x_in[EXTWIDTH-1]);

		for (int i = 0; i <= EXTWIDTH-1; i=i+1)
		begin
			f_output.part_prod[i] = one_group_one_bit_f(one_group_one_bit_inputs[i]);
		end
		f_output.c_0 = x_sel_flg.minus_times | x_sel_flg.minus;
		return f_output;
	endfunction

	typedef struct packed {
		logic [EXTWIDTH-1:0] mult_src0;
		logic [EXTWIDTH-1:0] mult_src1;
		} all_group_all_bit_input_strt_t;

	typedef struct  {
		one_group_all_bit_output_strt_t  one_group_all_bit_outputs [HALFEXTWIDTH-1:0];
		} all_group_all_bit_output_strt_t;

	function automatic all_group_all_bit_output_strt_t all_group_all_bit_f(all_group_all_bit_input_strt_t f_input); 
		one_group_all_bit_input_strt_t one_group_all_bit_inputs[HALFEXTWIDTH-1:0];
		all_group_all_bit_output_strt_t f_output;

		logic [EXTWIDTH:0] y_in;
		y_in = {f_input.mult_src1, 1'b0};

		for (int i = 0; i <= HALFEXTWIDTH-1; i=i+1)
		begin
			one_group_all_bit_inputs[i].y_in = y_in[2*i +: 3];
			one_group_all_bit_inputs[i].x_in = f_input.mult_src0;
		end

		for (int i = 0; i <= HALFEXTWIDTH-1; i=i+1)
		begin
			f_output.one_group_all_bit_outputs[i] = one_group_all_bit_f(one_group_all_bit_inputs[i]);
		end
	
		return f_output;	
	endfunction

	typedef struct  {
		logic [2*EXTWIDTH-1:0] sfted_part_prods [HALFEXTWIDTH:0];
		} part_prod_array_strt_t;

	function automatic part_prod_array_strt_t part_prod_array_f (all_group_all_bit_output_strt_t f_input);
		part_prod_array_strt_t f_output;
		
		for (int i = 0; i <= HALFEXTWIDTH; i=i+1)
		begin
			if(i==0) begin
				f_output.sfted_part_prods[i] = {{(EXTWIDTH){f_input.one_group_all_bit_outputs[i].sign}},f_input.one_group_all_bit_outputs[i].part_prod};
			end
			else if(i== HALFEXTWIDTH) begin
				f_output.sfted_part_prods[i] = {{EXTWIDTH{1'b0}}, 1'b0, f_input.one_group_all_bit_outputs[i-1].c_0,{(EXTWIDTH-2){1'b0}}};
			end
			else begin
				f_output.sfted_part_prods[i] = { {(EXTWIDTH-2){f_input.one_group_all_bit_outputs[i].sign}}, f_input.one_group_all_bit_outputs[i].part_prod,1'b0,f_input.one_group_all_bit_outputs[i-1].c_0} << 2*(i-1);
			end
		end
		return f_output;
	endfunction

	typedef struct packed{
		logic s;
		logic c;
		} full_adder_output_strt_t;

	function automatic full_adder_output_strt_t full_adder(logic [2:0] add_src);		
		full_adder_output_strt_t res;
		res.c = (add_src[0]&add_src[1]) | (add_src[0]&add_src[2]) | (add_src[1]&add_src[2]);
		res.s = (((~add_src[0])&(~add_src[1])&add_src[2]) | ((~add_src[0])&add_src[1]&(~add_src[2])) | (add_src[0]&(~add_src[1])&(~add_src[2])) | (add_src[0]&add_src[1]&add_src[2]));
	return res;
	endfunction

	typedef struct packed{
		logic [HALFEXTWIDTH:0] src_in;
		logic [30:0] c_in;
		} wallace_tree_34b_to_2b_1_bit_input_strt_t;

	typedef struct packed{
		logic c;
		logic s;
		logic [30:0] c_out;
		} wallace_tree_34b_to_2b_1_bit_output_strt_t;

	function automatic wallace_tree_34b_to_2b_1_bit_output_strt_t wallace_tree_34b_to_2b_1_bit_f(wallace_tree_34b_to_2b_1_bit_input_strt_t f_input);
		wallace_tree_34b_to_2b_1_bit_output_strt_t f_output;
		full_adder_output_strt_t s_c_out_0_lev [10:0];
		full_adder_output_strt_t s_c_out_1_lev [6:0] ;
		full_adder_output_strt_t s_c_out_2_lev [4:0] ;
		full_adder_output_strt_t s_c_out_3_lev [2:0] ;
		full_adder_output_strt_t s_c_out_4_lev [1:0] ;
		full_adder_output_strt_t s_c_out_5_lev [1:0] ;
		full_adder_output_strt_t s_c_out_6_lev    ;
		full_adder_output_strt_t s_c_out_7_lev    ;

		logic [10:0] c_out_0_lev;
                logic [6:0]  c_out_1_lev;
                logic [4:0]  c_out_2_lev;
                logic [2:0]  c_out_3_lev;
                logic [1:0]  c_out_4_lev;
                logic [1:0]  c_out_5_lev;
                logic     c_out_6_lev;
                logic     c_out_7_lev;

		logic [10:0] s_out_0_lev;
                logic [6:0]  s_out_1_lev;
                logic [4:0]  s_out_2_lev;
                logic [2:0]  s_out_3_lev;
                logic [1:0]  s_out_4_lev;
                logic [1:0]  s_out_5_lev;
                logic     s_out_6_lev;
                logic     s_out_7_lev;

		logic [10:0] c_in_0_lev;
		logic [6:0] c_in_1_lev;
		logic [4:0] c_in_2_lev;
		logic [2:0] c_in_3_lev;
		logic [1:0] c_in_4_lev;
		logic [1:0] c_in_5_lev;
		logic  c_in_6_lev;

		logic [33:0] src_in_0_lev;
		logic [22:0] src_in_1_lev;
		logic [15:0] src_in_2_lev;
		logic [10:0] src_in_3_lev;
		logic [7:0] src_in_4_lev;
		logic [5:0] src_in_5_lev;
		logic [3:0] src_in_6_lev;
		logic [2:0] src_in_7_lev;

		//c in c out
		{c_in_6_lev,c_in_5_lev,c_in_4_lev,c_in_3_lev,c_in_2_lev,c_in_1_lev,c_in_0_lev} = f_input.c_in;

		src_in_0_lev = f_input.src_in;
		for(int i=0; i<= 10; i=i+1)	begin
			s_c_out_0_lev[i] = full_adder(src_in_0_lev[3*i+:3]);
		end
		for(int i=0; i<= 10; i=i+1)	begin
			c_out_0_lev[i] = s_c_out_0_lev[i].c;
			s_out_0_lev[i] = s_c_out_0_lev[i].s;
		end

		src_in_1_lev = {c_in_0_lev, s_out_0_lev, src_in_0_lev[33]};
		for(int i=0; i<= 6; i=i+1)	begin
			s_c_out_1_lev[i] = full_adder(src_in_1_lev[3*i+:3]);
		end
		for(int i=0; i<= 6; i=i+1)	begin
			c_out_1_lev[i] = s_c_out_1_lev[i].c;
			s_out_1_lev[i] = s_c_out_1_lev[i].s;
		end

		src_in_2_lev = {c_in_1_lev, s_out_1_lev, src_in_1_lev[22:21]};
		for(int i=0; i<= 4; i=i+1)	begin
			s_c_out_2_lev[i] = full_adder(src_in_2_lev[3*i+:3]);
		end
		for(int i=0; i<= 4; i=i+1)	begin
			c_out_2_lev[i] = s_c_out_2_lev[i].c;
			s_out_2_lev[i] = s_c_out_2_lev[i].s;
		end

		src_in_3_lev = {c_in_2_lev, s_out_2_lev, src_in_2_lev[15]};
		for(int i=0; i<= 2; i=i+1)	begin
			s_c_out_3_lev[i] = full_adder(src_in_3_lev[3*i+:3]);
		end
		for(int i=0; i<= 2; i=i+1)	begin
			c_out_3_lev[i] = s_c_out_3_lev[i].c;
			s_out_3_lev[i] = s_c_out_3_lev[i].s;
		end
	
		src_in_4_lev = {c_in_3_lev, s_out_3_lev, src_in_3_lev[10:9]};
		for(int i=0; i<= 1; i=i+1)	begin
			s_c_out_4_lev[i] = full_adder(src_in_4_lev[3*i+:3]);
		end
		for(int i=0; i<= 1; i=i+1) 	begin
			c_out_4_lev[i] = s_c_out_4_lev[i].c;
			s_out_4_lev[i] = s_c_out_4_lev[i].s;
		end

		src_in_5_lev = {c_in_4_lev, s_out_4_lev, src_in_4_lev[7:6]};
		for(int i=0; i<= 1; i=i+1) 	begin
			s_c_out_5_lev[i] = full_adder(src_in_5_lev[3*i+:3]);
		end
		for(int i=0; i<= 1; i=i+1)	begin
			c_out_5_lev[i] = s_c_out_5_lev[i].c;
			s_out_5_lev[i] = s_c_out_5_lev[i].s;
		end

		src_in_6_lev = {c_in_5_lev, s_out_5_lev};
			s_c_out_6_lev = full_adder(src_in_6_lev[0+:3]);
			c_out_6_lev = s_c_out_6_lev.c;
			s_out_6_lev = s_c_out_6_lev.s;

		src_in_7_lev = {c_in_6_lev, s_out_6_lev, src_in_6_lev[3]};
			s_c_out_7_lev = full_adder(src_in_7_lev[0+:3]);
			c_out_7_lev = s_c_out_7_lev.c;
			s_out_7_lev = s_c_out_7_lev.s;

		f_output.s = s_out_7_lev;
		f_output.c = c_out_7_lev;
		f_output.c_out = {c_out_6_lev,c_out_5_lev,c_out_4_lev,c_out_3_lev,c_out_2_lev,c_out_1_lev,c_out_0_lev};
		return f_output;
	endfunction


	typedef struct {
		logic [HALFEXTWIDTH:0]  wallace_tree_34b_to_2b_1_bit_src_ins[2*EXTWIDTH-1:0];
		} wallace_tree_34b_to_2b_132_bit_intput_strt_t;

	typedef struct packed{
		logic [2*EXTWIDTH-1:0] s;
		logic [2*EXTWIDTH-1:0] c;
		} wallace_tree_34b_to_2b_132_bit_output_strt_t;

	function automatic wallace_tree_34b_to_2b_132_bit_intput_strt_t part_prod_array_reorder_f(part_prod_array_strt_t f_input);
		wallace_tree_34b_to_2b_132_bit_intput_strt_t f_output;
		for(int i=0; i<= 2*EXTWIDTH-1; i=i+1)
		begin
			for(int j = 0; j <= HALFEXTWIDTH; j=j+1)
			begin
				f_output.wallace_tree_34b_to_2b_1_bit_src_ins[i][j] = f_input.sfted_part_prods[j][i];
			end
		end
		return f_output;
	endfunction
		
	function automatic wallace_tree_34b_to_2b_132_bit_output_strt_t wallace_tree_34b_to_2b_132_bit_f(wallace_tree_34b_to_2b_132_bit_intput_strt_t f_input);
		wallace_tree_34b_to_2b_132_bit_output_strt_t f_output;

		wallace_tree_34b_to_2b_1_bit_input_strt_t wallace_tree_34b_to_2b_1_bit_inputs[2*EXTWIDTH-1:0];
		wallace_tree_34b_to_2b_1_bit_output_strt_t wallace_tree_34b_to_2b_1_bit_outputs[2*EXTWIDTH-1:0];

		for (int i=0; i<= 2*EXTWIDTH-1; i=i+1)
		begin
			if(i==0) begin
				wallace_tree_34b_to_2b_1_bit_inputs[i].c_in = 31'b0;
				wallace_tree_34b_to_2b_1_bit_inputs[i].src_in = f_input.wallace_tree_34b_to_2b_1_bit_src_ins[i];
				wallace_tree_34b_to_2b_1_bit_outputs[i] = wallace_tree_34b_to_2b_1_bit_f(wallace_tree_34b_to_2b_1_bit_inputs[i]);
			end
			else begin
				wallace_tree_34b_to_2b_1_bit_inputs[i].c_in = wallace_tree_34b_to_2b_1_bit_outputs[i-1].c_out; 
				wallace_tree_34b_to_2b_1_bit_inputs[i].src_in = f_input.wallace_tree_34b_to_2b_1_bit_src_ins[i];
				wallace_tree_34b_to_2b_1_bit_outputs[i] = wallace_tree_34b_to_2b_1_bit_f(wallace_tree_34b_to_2b_1_bit_inputs[i]);
			end
		end

	//output	
		for (int i=0; i<= 2*EXTWIDTH-1; i=i+1)
		begin
			f_output.s[i] = wallace_tree_34b_to_2b_1_bit_outputs[i].s;
		end
		for (int i=0; i<= 2*EXTWIDTH-1; i=i+1)
		begin
			if(i==0) begin
				f_output.c[i] = 1'b0;
			end
			else begin
				f_output.c[i] = wallace_tree_34b_to_2b_1_bit_outputs[i-1].c;
			end
		end
		return f_output;
	endfunction

	//input data
	all_group_all_bit_input_strt_t all_group_all_bit_input;

	assign all_group_all_bit_input = {{{2{mult_sign & mult_src0[WIDTH-1]}},mult_src0}, {{2{mult_sign & mult_src1[WIDTH-1]}},mult_src1}};
	
	wallace_tree_34b_to_2b_132_bit_output_strt_t mult_stage1_res;
	
	//stage1
	always_ff @(posedge clk )
	begin
		mult_stage1_res <= wallace_tree_34b_to_2b_132_bit_f(part_prod_array_reorder_f(part_prod_array_f(all_group_all_bit_f(all_group_all_bit_input))));
	end

	assign mult_data_out_ext = {1'b0,mult_stage1_res.s} + {1'b0,mult_stage1_res.c};
	assign mult_data_out = mult_data_out_ext[2*WIDTH-1:0];
	
	always_ff @( posedge clk ) begin
		mult_data_vld <= mult_req;
	end

	endmodule



