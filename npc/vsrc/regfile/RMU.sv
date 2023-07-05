module RMU(

  input clk,
  input rst_n,
 
  //input logic           dst_vld,
  input logic   [ 4:0]  rs1,
  input logic   [ 4:0]  rs2,
  //input logic           src0_vld,
  //input logic           src1_vld,
  output logic   [63:0] src1,
  output logic   [63:0] src2,


  //alu
  input logic           alu_wb_vld,
  input logic   [4:0]   alu_wb_addr,
  input logic   [63:0]  alu_wb_data,

  //sys
  input logic           csr_wb_vld,
  input logic   [63:0]  csr_wb_data,
  input logic   [ 4:0]  csr_wb_addr,

  //lsu
  input logic           lsu_wb_vld,
  input logic    [4:0]  lsu_wb_addr,
  input logic   [63:0]  lsu_wb_data



);



  //===================================================
  //===WB

  /*GPR*/

  logic          wb_vld;
  logic  [4:0]   wb_addr;
  logic  [63:0]  wb_data;

  always_comb begin : wb
    
    if(alu_wb_vld) begin
      wb_data = alu_wb_data;
      wb_addr = alu_wb_addr;
    end
    else if(lsu_wb_vld) begin 
      wb_data = lsu_wb_data;
      wb_addr = lsu_wb_addr;
    end
    else if(csr_wb_vld) begin
      wb_data = csr_wb_data;
      wb_addr = csr_wb_addr;
    end
    else begin
      wb_data = 0;
      wb_addr = 0;
    end

    if(wb_addr == 0) wb_data = 0;

    //bypass
    grf_raddr1 = rs1;
    grf_raddr2 = rs2;
    src1 = wb_vld & (rs1 == wb_addr)? wb_data : grf_rdata1;
    src2 = wb_vld & (rs2 == wb_addr)? wb_data : grf_rdata2;
    //src1 = grf_rdata1;
    //src2 = grf_rdata2;

  end

  assign wb_vld = (alu_wb_vld | lsu_wb_vld | csr_wb_vld);


  logic   [63:0] grf_rdata1;
  logic   [63:0] grf_rdata2;
  logic   [ 4:0] grf_raddr1;
  logic   [ 4:0] grf_raddr2;

  RegisterFile u1_gpr(
      .clk    (clk),
      .rdata1 (grf_rdata1),
      .raddr1 (grf_raddr1),
      .rdata2 (grf_rdata2),
      .raddr2 (grf_raddr2),

      .wdata  (wb_data),
      .waddr  (wb_addr),
      .wen    (wb_vld)
  );



endmodule
