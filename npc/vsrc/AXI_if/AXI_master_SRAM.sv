module AXI_master_SRAM #
	(
		parameter integer ADDR_WIDTH	= 64,
		parameter integer DATA_WIDTH	= 64
	)
	(
    input   WREQ,
    input   [ADDR_WIDTH-1:0] IN_WADDR,
    input   [DATA_WIDTH-1:0] IN_WDATA,
    input   [(DATA_WIDTH/8)-1 : 0] IN_WMASK,
    
    input   RREQ,
    input   [ADDR_WIDTH-1:0] IN_RADDR,
    output  [DATA_WIDTH-1:0] DATA_OUT,
    //output  DATA_OUT_VALID,
    //output [1:0] ERROR,

    /*globel single*/
		input   CLK,
		input   RESETN,
    /*写地址通道*/
		output  [ADDR_WIDTH-1 : 0] AW_ADDR,
		output  AW_VALID,
		input   AW_READY,
    /*写数据通道*/  
		output  [DATA_WIDTH-1 : 0] W_DATA,
		output  [DATA_WIDTH/8-1 : 0] W_STRB,
		output  W_VALID,
		input   W_READY,
    /*写相应通道*/  
		//input   [1 : 0] B_RESP,
		input   B_VALID,
		output  reg B_READY,
    /*读地址通道*/  
		output  [ADDR_WIDTH-1 : 0] AR_ADDR,
		output  AR_VALID,
		input   AR_READY,
    /*读数据通道*/  
		input   [DATA_WIDTH-1 : 0] R_DATA,
		//input  [1 : 0] R_RESP,
		input   R_VALID,
		output  R_READY

	);

//========================================================

reg [ADDR_WIDTH-1 : 0] w_addr_reg;     
reg [DATA_WIDTH-1 : 0] w_data_reg;    
reg [ADDR_WIDTH-1 : 0] r_addr_reg;
reg [(DATA_WIDTH/8)-1 : 0] w_strb_reg;


//=========================================================

//====== 写地址通道

reg aw_valid_reg;
always@(posedge CLK)
  if(~RESETN)
    aw_valid_reg <= 1'b0;
  else if(aw_valid_reg && AW_READY)
    aw_valid_reg <= 1'b0;  
  else if(WREQ)
    aw_valid_reg <= 1'b1; 

assign AW_VALID = WREQ | aw_valid_reg;

always@(posedge CLK)
  if(~RESETN)
    w_addr_reg <= 'd0;
  else if(AW_VALID && AW_READY)
    w_addr_reg <= 'd0;
  else if(WREQ)
    w_addr_reg <= IN_WADDR;

assign AW_ADDR = WREQ? IN_WADDR: (aw_valid_reg? w_addr_reg : 'd0);


//====== 写数据通道

reg w_valid_reg;
always@(posedge CLK)
  if(~RESETN)
    w_valid_reg <= 1'b0;
  else if(w_valid_reg && W_READY)//lite模式中只有一个数据，握手只持续一次
    w_valid_reg <= 1'b0;  
  else if(WREQ)
    w_valid_reg <= 1'b1;  

assign W_VALID = WREQ | w_valid_reg;

always@(posedge CLK)
  if(~RESETN) begin
    w_data_reg <= 'd0;
    w_strb_reg <= 'd0; 
    end
  else if(W_VALID && W_READY)begin
    w_data_reg <= 'd0;
    w_strb_reg <= 'd0; 
    end 
  else if(WREQ) begin
    w_data_reg <= IN_WDATA; 
    w_strb_reg <= IN_WMASK; 
    end

assign W_DATA = WREQ? IN_WDATA: (w_valid_reg? w_data_reg : 'd0);
assign W_STRB = WREQ? IN_WMASK: (w_valid_reg? w_strb_reg : 'd0);

//====== 写响应通道

always@(posedge CLK)
  if(~RESETN)
    B_READY <= 1'b0;
  else if(~B_READY && B_VALID)
    B_READY <= 1'b1;  
  else 
    B_READY <= 1'b0;

//====== 读地址通道

reg ar_valid_reg;
always@(posedge CLK)
  if(~RESETN)
    ar_valid_reg <= 1'b0;
  else if(ar_valid_reg && AR_READY)
    ar_valid_reg <= 1'b0;  
  else if(RREQ)
    ar_valid_reg <= 1'b1;  

assign AR_VALID = RREQ | ar_valid_reg;

always@(posedge CLK)
  if(~RESETN)
    r_addr_reg <= 'd0;
  else if(RREQ)
    r_addr_reg <= IN_RADDR;

assign AR_ADDR = RREQ? IN_RADDR: r_addr_reg;

//====== 读数据通道

reg r_ready_reg;
always@(posedge CLK)
  if(~RESETN)
    r_ready_reg <= 1'b0;
  else if(r_ready_reg && R_VALID)
    r_ready_reg <= 1'b0;  
  else if(RREQ)
    r_ready_reg <= 1'b1; 

assign R_READY = RREQ | r_ready_reg;

assign DATA_OUT = R_DATA;
//assign DATA_OUT_VALID = R_VALID && R_READY;

//error判断
//assign    ERROR[0] = (B_RESP[1])? 1'b1 : 1'b0;//读出错
//assign    ERROR[1] = (R_RESP[1])? 1'b1 : 1'b0;//写出错

endmodule



