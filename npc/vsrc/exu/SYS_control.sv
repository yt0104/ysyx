module SYS_control#(ADDR_WIDTH = 2, DATA_WIDTH = 64) (

  input logic clk,
  input logic rst_n,

  input logic sys_req,

  input logic csr,    
  input logic ecall,  
  input logic ebreak,
  input logic mret,  
  input logic [2:0] func3, 

  input logic [63:0] pc,
  input logic [63:0] src1,
  input logic [63:0] imm,

  output logic [63:0] csr_data_out,
  output logic csr_vld,

  //CSRegisterFile
  input  logic [DATA_WIDTH -1:0] csrf_rdata,
  output logic [ADDR_WIDTH -1:0] csrf_raddr,
  output logic [DATA_WIDTH -1:0] csrf_wdata,
  output logic [ADDR_WIDTH -1:0] csrf_waddr,
  output logic csrf_wen

);


localparam addr_mcause  = 12'b1101_000010;
localparam addr_mstatus = 12'b1100_000000;
localparam addr_mepc    = 12'b1101_000001;
localparam addr_mtvec   = 12'b1100_000101;


always_ff @( posedge clk ) begin 
  if(~rst_n) begin
    csr_vld <= 0;
  end
  else begin
    csr_vld <= sys_req;
  end
end


//--------------------------------------
//------CSR read block

  logic [11:0] raddr;

  always_comb begin: CSR_read_map
    raddr = ecall? addr_mtvec: mret? addr_mepc: imm[11:0];
    case(raddr)
      addr_mcause : csrf_raddr = 0;
      addr_mstatus: csrf_raddr = 1;
      addr_mepc   : csrf_raddr = 2;
      addr_mtvec  : csrf_raddr = 3;
      default: begin  csrf_raddr = 0; end
    endcase

  end

always_ff @( posedge clk ) begin 
  if(~rst_n) begin
    csr_data_out <= 0;
  end
  else if(sys_req)begin
    csr_data_out <= csrf_rdata;
  end
end


//--------------------------------------
//------CSR write block


  always_comb begin: CSR_write_map
    case(waddr)
      addr_mcause : csrf_waddr = 0;
      addr_mstatus: csrf_waddr = 1;
      addr_mepc   : csrf_waddr = 2;
      addr_mtvec  : csrf_waddr = 3;
      default:   csrf_waddr = 0;
    endcase
    csrf_wdata = wdata;
    csrf_wen = wen;
  end


  logic [63:0] wdata;
  logic [11:0] waddr;
  logic wen;

  parameter INIT = 2'b00;
  parameter WR1 = 2'b10;
  parameter WR2 = 2'b11;
  logic [1:0] state, nstate;


  always_comb begin
    case(state)
      INIT: nstate = WR1;
      WR1: nstate = sys_req & ecall? WR2: WR1;
      WR2: nstate = WR1;
    default: nstate = WR1;
    endcase
  end

  always_ff @( posedge clk ) begin
    if(~rst_n) state <= INIT;
    else state <= nstate;
  end

  always_comb begin
    case(state)
      INIT: begin
        wen = 1;
        waddr = addr_mstatus;
        wdata = 64'ha00001800;
      end
      WR1: begin
        if(ecall) begin 
          wen = sys_req; 
          waddr = addr_mepc; 
          wdata = pc; 
          end
        else if(csr)begin //csr
          wen = sys_req;
          waddr = imm[11:0];
          case(func3)
            3'b001:  wdata = src1;  //csrrw
            3'b010:  wdata = src1 | csrf_rdata;  //csrrs
            default:  wdata = 0;
          endcase
          end
        else begin 
          wen = 0; 
          waddr = 0; 
          wdata = 0; 
          end
      end
      WR2: begin  //ecall
        wen = 1;
        waddr = addr_mcause; 
        wdata = 64'hb;
      end
      default: begin waddr = 0; wdata = 0; end
    endcase
  end



endmodule

