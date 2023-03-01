module AXI_slave_ifench #
	(
		parameter integer ADDR_WIDTH	= 64,
		parameter integer DATA_WIDTH	= 64
	)
	(
		//全局变量
		input   CLK,
		input   RESETN,
		// 写地址 
		input  [ADDR_WIDTH-1 : 0] AW_ADDR,
		input   AW_VALID,
		output reg  AW_READY,
		// 写数据 
		input  [DATA_WIDTH-1 : 0] W_DATA,    
		input  [(DATA_WIDTH/8)-1 : 0] W_STRB,
		input   W_VALID,
		output reg  W_READY,
		// 写响应.
		//output reg [1 : 0] B_RESP,
		output reg  B_VALID,
		input   B_READY,
		// read地址 
		input  [ADDR_WIDTH-1 : 0] AR_ADDR,
		input   AR_VALID,
		output reg  AR_READY,
		// read数据 
		output reg [DATA_WIDTH-1 : 0] R_DATA,
		//output reg [1 : 0] R_RESP,
		output reg  R_VALID,
		input   R_READY
	);

import "DPI-C" function void ifetch(input longint pc, output longint inst);
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);



//写地址通道	
//=====================================================================

//写地址AW_READY的产生
always@(posedge CLK)
  if(~RESETN)
    AW_READY <= 1'b0;
  else if(B_VALID && B_READY)//master 中AWVALID的清零信号应该也是它，同步清零
    AW_READY <= 1'b0;
  else if(~AW_READY && AW_VALID && W_VALID)	
    AW_READY <= 1'b1;
  else
    AW_READY <= 1'b0;  
  	

//写数据通道
//======================================================================

always@(posedge CLK)
  if(~RESETN)
    W_READY <= 1'b0;
  else if(B_VALID && B_READY)//master 中WVALID的清零信号应该也是它，同步清零
    W_READY <= 1'b0;
  else if(~W_READY && AW_VALID && W_VALID)	//地址和数据要同步，所以都有效时才能ready
    W_READY <= 1'b1;
  else
    W_READY <= 1'b0; 
    

always@(*)
  if(AW_VALID && W_VALID && AW_READY && W_READY) begin	
	  pmem_write(AW_ADDR, W_DATA, W_STRB);
	end   


//写响应通道
//======================================================================	  	  	  	  
always@(posedge CLK)
  if(~RESETN) begin
    B_VALID <= 1'b0;
    end       //00:OK ;01:EXOK;10:SLVERR;11:DECERR
  else begin
    if(AW_VALID && W_VALID && AW_READY && W_READY)begin
      B_VALID <= 1'b1;
      end
    else if(B_READY && B_VALID)	//地址和数据要同步，所以都有效时才能ready
      B_VALID <= 1'b0;
  end  	
	

//读地址通道
//======================================================================		
always@(posedge CLK)
  if(~RESETN)   
    AR_READY <= 1'b0;
  else if(~AR_READY && AR_VALID && R_READY)  //R_VALID
    AR_READY <= 1'b1;  
  else
    AR_READY <= 1'b0; 

	
//读数据通道
//======================================================================    
always@(posedge CLK)
  if(~RESETN) begin  
    R_VALID <= 1'b0;
    //R_RESP <= 2'b00; 
    end
  else if(R_READY && R_VALID)begin
    R_VALID <= 1'b0;
    //R_RESP <= 2'b00;	
    end 
  else if(~R_VALID && AR_VALID && R_READY) begin
    R_VALID <= 1'b1; 
    //R_RESP <= 2'b00; 
    end	



always @(*) begin
  if(AR_VALID && R_VALID && AR_READY && R_READY) begin	
    ifetch(AR_ADDR, R_DATA);
  end
  else R_DATA = 0;
end



endmodule	


