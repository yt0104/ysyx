//4096 control register
module RegisterCSFile #(ADDR_WIDTH = 12, DATA_WIDTH = 64) (
  input clk,

  input  [ADDR_WIDTH-1:0] op_addr,
  input  [ADDR_WIDTH-1:0] op_inst,

  output reg [DATA_WIDTH-1:0] rdata,

  input  [DATA_WIDTH-1:0] wdata1,
  input  [DATA_WIDTH-1:0] wdata2,

  input wen
);


reg  [`ISA_WIDTH-1:0] mcause, mstatus, mepc, mtvec;

localparam addr_mcause  = 12'b1101_000010;
localparam addr_mstatus = 12'b1100_000000;
localparam addr_mepc    = 12'b1101_000001;
localparam addr_mtvec   = 12'b1100_000101;



initial mstatus = 64'ha00001800;

  always @(posedge clk) begin
    if (wen) begin
      if(op_inst == 0)
        case(op_addr)
        addr_mcause:  mcause <= wdata1;
        addr_mstatus: mstatus <= wdata1; 
        addr_mtvec:   mtvec <= wdata1;
        addr_mepc:    mepc <= wdata1;
        default: {mcause, mstatus, mepc, mtvec} <= {mcause, mstatus, mepc, mtvec};
        endcase
      else 
        case(op_inst)
        inst_ecall: begin mepc <= wdata1; mcause <= wdata2; end
        default: {mcause, mstatus, mepc, mtvec} <= {mcause, mstatus, mepc, mtvec};
        endcase
    end
  end


  always@(*) begin
    if(op_inst == 0)
      case(op_addr)
      addr_mcause:  rdata = mcause;
      addr_mstatus: rdata = mstatus;
      addr_mtvec:   rdata = mtvec;
      addr_mepc:    rdata = mepc;
      default: rdata = 0;
      endcase
    else 
      case(op_inst)
      inst_ecall:   rdata = mtvec; 
      inst_mret:    rdata = mepc;
      default: rdata = 0;
      endcase

  end



endmodule
