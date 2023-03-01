module AXI_arbiter_SRAM #
	(
		parameter integer ADDR_WIDTH	= 64,
		parameter integer DATA_WIDTH	= 64
	)
	(
		input 	in_channel,
		//全局变量
		input   CLK,
		input   RESETN,

        //------master1 ifetch
		// 写地址 
		input   	[ADDR_WIDTH-1 : 0] axi1_AW_ADDR,
		input   	axi1_AW_VALID, 
		output  reg axi1_AW_READY, 
		// 写数据 
		input   	[DATA_WIDTH-1 : 0] axi1_W_DATA,    
		input   	[(DATA_WIDTH/8)-1 : 0] axi1_W_STRB,
		input   	axi1_W_VALID,
		output  reg axi1_W_READY,
		// 写响应.
		output  reg axi1_B_VALID,
		input   	axi1_B_READY,
		// read地址 
		input   	[ADDR_WIDTH-1 : 0] axi1_AR_ADDR,
		input   	axi1_AR_VALID,
		output  reg axi1_AR_READY,
		// read数据 
		output  reg [DATA_WIDTH-1 : 0] axi1_R_DATA,
		output  reg axi1_R_VALID,
		input   	axi1_R_READY,

        //------master2 sram
		// 写地址 
		input   	[ADDR_WIDTH-1 : 0] axi2_AW_ADDR,
		input   	axi2_AW_VALID, 
		output  reg axi2_AW_READY, 
		// 写数据 
		input   	[DATA_WIDTH-1 : 0] axi2_W_DATA,    
		input   	[(DATA_WIDTH/8)-1 : 0] axi2_W_STRB,
		input   	axi2_W_VALID,
		output  reg axi2_W_READY,
		// 写响应.
		output  reg axi2_B_VALID,
		input   	axi2_B_READY,
		// read地址 
		input   	[ADDR_WIDTH-1 : 0] axi2_AR_ADDR,
		input   	axi2_AR_VALID,
		output  reg axi2_AR_READY,
		// read数据 
		output  reg [DATA_WIDTH-1 : 0] axi2_R_DATA,
		output  reg axi2_R_VALID,
		input   	axi2_R_READY

	);

	wire channel = in_channel;


	reg AW_VALID, W_VALID, B_READY;
	reg AR_VALID, R_READY, B_VALID;
	reg [ADDR_WIDTH-1 : 0] AW_ADDR, AR_ADDR;
	reg [ADDR_WIDTH-1 : 0] W_DATA;
	reg [(DATA_WIDTH/8)-1 : 0] W_STRB;

	wire AR_READY, R_VALID;
	wire AW_READY, W_READY, B_VALID;
	wire [ADDR_WIDTH-1 : 0] R_DATA;


	always @(*) 
		case(channel)
		1'b0: begin
			/*input*/
			{AW_VALID, W_VALID, B_READY} = {axi1_AW_VALID, axi1_W_VALID, axi1_B_READY};
			{AR_VALID, R_READY} = {axi1_AR_VALID, axi1_R_READY};
			{AW_ADDR, AR_ADDR} = {axi1_AW_ADDR, axi1_AR_ADDR};
			{W_DATA, W_STRB} = {axi1_W_DATA, axi1_W_STRB};
			/*output1*/
			{axi1_AR_READY, axi1_R_VALID} = {AR_READY, R_VALID};
			{axi1_AW_READY, axi1_W_READY, axi1_B_VALID} = {AW_READY, W_READY, B_VALID};
			axi1_R_DATA = R_DATA;
			/*output2*/
			{axi2_AR_READY, axi2_R_VALID} = 0;
			{axi2_AW_READY, axi2_W_READY, axi2_B_VALID} = 0;
			axi2_R_DATA = 0;
			end
		1'b1: begin
			/*input*/
			{AW_VALID, W_VALID, B_READY} = {axi2_AW_VALID, axi2_W_VALID, axi2_B_READY};
			{AR_VALID, R_READY} = {axi2_AR_VALID, axi2_R_READY};
			{AW_ADDR, AR_ADDR} = {axi2_AW_ADDR, axi2_AR_ADDR};
			{W_DATA, W_STRB} = {axi2_W_DATA, axi2_W_STRB};
			/*output1*/
			{axi1_AR_READY, axi1_R_VALID} = 0;
			{axi1_AW_READY, axi1_W_READY, axi1_B_VALID} = 0;
			axi1_R_DATA = 0;
			/*output2*/
			{axi2_AR_READY, axi2_R_VALID} = {AR_READY, R_VALID};
			{axi2_AW_READY, axi2_W_READY, axi2_B_VALID} = {AW_READY, W_READY, B_VALID};
			axi2_R_DATA = R_DATA;
			end
		default: begin
			/*input*/
			{AW_VALID, W_VALID, B_READY} = 0;
			{AR_VALID, R_READY} = 0;
			{AW_ADDR, AR_ADDR} = 0;
			{W_DATA, W_STRB} = 0;
			/*output1*/
			{axi1_AR_READY, axi1_R_VALID} = 0;
			{axi1_AW_READY, axi1_W_READY, axi1_B_VALID} = 0;
			axi1_R_DATA = 0;
			/*output2*/
			{axi2_AR_READY, axi2_R_VALID} = 0;
			{axi2_AW_READY, axi2_W_READY, axi2_B_VALID} = 0;
			axi2_R_DATA = 0;
			end
		endcase


	AXI_slave_SRAM #(
	.ADDR_WIDTH(ADDR_WIDTH),
	.DATA_WIDTH(DATA_WIDTH)
	)u_AXI_slave_SRAM
	(
	.CLK(CLK), .RESETN(RESETN),
	.AW_ADDR(AW_ADDR), .AW_VALID(AW_VALID), .AW_READY(AW_READY),
	.W_DATA(W_DATA), .W_STRB(W_STRB), .W_VALID(W_VALID), .W_READY(W_READY),
	.B_VALID(B_VALID), .B_READY(B_READY),
	.AR_ADDR(AR_ADDR), .AR_VALID(AR_VALID), .AR_READY(AR_READY),
	.R_DATA(R_DATA), .R_VALID(R_VALID), .R_READY(R_READY)
	);
	
endmodule

