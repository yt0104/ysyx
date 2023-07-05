// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+333,"clk", false,-1);
        tracep->declBit(c+334,"rst_n", false,-1);
        tracep->declBus(c+335,"jmp_type", false,-1, 7,0);
        tracep->declBit(c+336,"ifetch_taken", false,-1);
        tracep->declQuad(c+337,"ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+339,"mainUpdate_valid", false,-1);
        tracep->declQuad(c+340,"inst", false,-1, 63,0);
        tracep->declQuad(c+342,"pc", false,-1, 63,0);
        tracep->declBit(c+333,"top clk", false,-1);
        tracep->declBit(c+334,"top rst_n", false,-1);
        tracep->declBus(c+335,"top jmp_type", false,-1, 7,0);
        tracep->declBit(c+336,"top ifetch_taken", false,-1);
        tracep->declQuad(c+337,"top ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+339,"top mainUpdate_valid", false,-1);
        tracep->declQuad(c+340,"top inst", false,-1, 63,0);
        tracep->declQuad(c+342,"top pc", false,-1, 63,0);
        tracep->declBit(c+1,"top ifetch_inst_vld", false,-1);
        tracep->declQuad(c+2,"top ifetch_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+4,"top ifetch_inst", false,-1, 63,0);
        tracep->declBit(c+6,"top dec_inst_vld", false,-1);
        tracep->declQuad(c+7,"top dec_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top dec_inst", false,-1, 63,0);
        tracep->declBit(c+11,"top ifetch_req", false,-1);
        tracep->declBus(c+12,"top rd", false,-1, 4,0);
        tracep->declBus(c+13,"top rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top imm", false,-1, 63,0);
        tracep->declBus(c+17,"top op", false,-1, 31,0);
        tracep->declQuad(c+18,"top inst_act", false,-1, 32,0);
        tracep->declBus(c+20,"top inst_type", false,-1, 17,0);
        tracep->declQuad(c+21,"top src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top src2", false,-1, 63,0);
        tracep->declBit(c+25,"top alu_wb_vld", false,-1);
        tracep->declBus(c+26,"top alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"top alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+29,"top csr_wb_vld", false,-1);
        tracep->declQuad(c+30,"top csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+32,"top csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+33,"top lsu_wb_vld", false,-1);
        tracep->declBus(c+34,"top lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"top lsu_wb_data", false,-1, 63,0);
        tracep->declBit(c+37,"top axis1_AW_VALID", false,-1);
        tracep->declBit(c+38,"top axis1_AW_READY", false,-1);
        tracep->declBit(c+39,"top axis1_W_VALID", false,-1);
        tracep->declBit(c+40,"top axis1_W_READY", false,-1);
        tracep->declBit(c+41,"top axis1_B_VALID", false,-1);
        tracep->declBit(c+42,"top axis1_B_READY", false,-1);
        tracep->declBit(c+43,"top axis1_AR_VALID", false,-1);
        tracep->declBit(c+44,"top axis1_AR_READY", false,-1);
        tracep->declBit(c+45,"top axis1_R_VALID", false,-1);
        tracep->declBit(c+46,"top axis1_R_READY", false,-1);
        tracep->declQuad(c+47,"top axis1_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+49,"top axis1_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+51,"top axis1_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+53,"top axis1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top axis1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+56,"top axis2_AW_VALID", false,-1);
        tracep->declBit(c+57,"top axis2_AW_READY", false,-1);
        tracep->declBit(c+58,"top axis2_W_VALID", false,-1);
        tracep->declBit(c+59,"top axis2_W_READY", false,-1);
        tracep->declBit(c+60,"top axis2_B_VALID", false,-1);
        tracep->declBit(c+61,"top axis2_B_READY", false,-1);
        tracep->declBit(c+62,"top axis2_AR_VALID", false,-1);
        tracep->declBit(c+63,"top axis2_AR_READY", false,-1);
        tracep->declBit(c+64,"top axis2_R_VALID", false,-1);
        tracep->declBit(c+65,"top axis2_R_READY", false,-1);
        tracep->declQuad(c+66,"top axis2_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+68,"top axis2_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+70,"top axis2_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+72,"top axis2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+74,"top axis2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+75,"top in_channel", false,-1);
        tracep->declBit(c+76,"top itrace_en", false,-1);
        tracep->declBit(c+333,"top u_ifetch clk", false,-1);
        tracep->declBit(c+334,"top u_ifetch rst_n", false,-1);
        tracep->declBit(c+1,"top u_ifetch ifetch_inst_vld", false,-1);
        tracep->declQuad(c+2,"top u_ifetch ifetch_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_ifetch ifetch_inst", false,-1, 63,0);
        tracep->declQuad(c+337,"top u_ifetch ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+336,"top u_ifetch ifetch_taken", false,-1);
        tracep->declBit(c+11,"top u_ifetch ifetch_req", false,-1);
        tracep->declQuad(c+47,"top u_ifetch axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+37,"top u_ifetch axi_AW_VALID", false,-1);
        tracep->declBit(c+38,"top u_ifetch axi_AW_READY", false,-1);
        tracep->declQuad(c+53,"top u_ifetch axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top u_ifetch axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+39,"top u_ifetch axi_W_VALID", false,-1);
        tracep->declBit(c+40,"top u_ifetch axi_W_READY", false,-1);
        tracep->declBit(c+41,"top u_ifetch axi_B_VALID", false,-1);
        tracep->declBit(c+42,"top u_ifetch axi_B_READY", false,-1);
        tracep->declQuad(c+49,"top u_ifetch axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+43,"top u_ifetch axi_AR_VALID", false,-1);
        tracep->declBit(c+44,"top u_ifetch axi_AR_READY", false,-1);
        tracep->declQuad(c+51,"top u_ifetch axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+45,"top u_ifetch axi_R_VALID", false,-1);
        tracep->declBit(c+46,"top u_ifetch axi_R_READY", false,-1);
        tracep->declQuad(c+77,"top u_ifetch pc_raddr", false,-1, 63,0);
        tracep->declBus(c+79,"top u_ifetch pre_cnt", false,-1, 5,0);
        tracep->declQuad(c+51,"top u_ifetch mem_inst64", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ifetch rask", false,-1);
        tracep->declBit(c+80,"top u_ifetch rreq", false,-1);
        tracep->declBus(c+344,"top u_ifetch u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+344,"top u_ifetch u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+345,"top u_ifetch u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+346,"top u_ifetch u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+346,"top u_ifetch u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+348,"top u_ifetch u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+80,"top u_ifetch u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+77,"top u_ifetch u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+51,"top u_ifetch u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+333,"top u_ifetch u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+334,"top u_ifetch u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+47,"top u_ifetch u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+37,"top u_ifetch u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+38,"top u_ifetch u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+53,"top u_ifetch u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top u_ifetch u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+39,"top u_ifetch u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+40,"top u_ifetch u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+41,"top u_ifetch u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+42,"top u_ifetch u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+49,"top u_ifetch u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+43,"top u_ifetch u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+44,"top u_ifetch u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+51,"top u_ifetch u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+45,"top u_ifetch u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+46,"top u_ifetch u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+81,"top u_ifetch u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+83,"top u_ifetch u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+49,"top u_ifetch u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+85,"top u_ifetch u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+37,"top u_ifetch u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+39,"top u_ifetch u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+86,"top u_ifetch u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+87,"top u_ifetch u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBit(c+333,"top u_dec clk", false,-1);
        tracep->declBit(c+334,"top u_dec rst_n", false,-1);
        tracep->declBit(c+1,"top u_dec ifetch_inst_vld", false,-1);
        tracep->declQuad(c+4,"top u_dec ifetch_inst", false,-1, 63,0);
        tracep->declQuad(c+2,"top u_dec ifetch_inst_pc", false,-1, 63,0);
        tracep->declBus(c+12,"top u_dec rd", false,-1, 4,0);
        tracep->declBus(c+13,"top u_dec rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_dec rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_dec imm", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_dec inst_act", false,-1, 32,0);
        tracep->declBus(c+20,"top u_dec inst_type", false,-1, 17,0);
        tracep->declBus(c+17,"top u_dec op", false,-1, 31,0);
        tracep->declBit(c+6,"top u_dec dec_inst_vld", false,-1);
        tracep->declQuad(c+7,"top u_dec dec_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_dec dec_inst", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_dec inst", false,-1, 63,0);
        tracep->declQuad(c+88,"top u_dec inst_act_pre", false,-1, 32,0);
        tracep->declBus(c+90,"top u_dec inst_type_pre", false,-1, 17,0);
        tracep->declBit(c+91,"top u_dec ras_rd_link", false,-1);
        tracep->declBit(c+92,"top u_dec ras_rs1_link", false,-1);
        tracep->declQuad(c+93,"top u_dec imm_pre", false,-1, 63,0);
        tracep->declBus(c+95,"top u_dec rd_pre", false,-1, 4,0);
        tracep->declBus(c+96,"top u_dec rs1_pre", false,-1, 4,0);
        tracep->declBus(c+97,"top u_dec rs2_pre", false,-1, 4,0);
        tracep->declBit(c+333,"top u_EXU clk", false,-1);
        tracep->declBit(c+334,"top u_EXU rst_n", false,-1);
        tracep->declBus(c+12,"top u_EXU rd", false,-1, 4,0);
        tracep->declQuad(c+21,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_EXU imm", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_EXU inst_act", false,-1, 32,0);
        tracep->declBit(c+6,"top u_EXU dec_inst_vld", false,-1);
        tracep->declQuad(c+7,"top u_EXU dec_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_EXU dec_inst", false,-1, 63,0);
        tracep->declBit(c+336,"top u_EXU ifetch_taken", false,-1);
        tracep->declQuad(c+337,"top u_EXU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+11,"top u_EXU ifetch_req", false,-1);
        tracep->declBit(c+25,"top u_EXU alu_wb_vld", false,-1);
        tracep->declBus(c+26,"top u_EXU alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"top u_EXU alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+29,"top u_EXU csr_wb_vld", false,-1);
        tracep->declQuad(c+30,"top u_EXU csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+32,"top u_EXU csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+33,"top u_EXU lsu_wb_vld", false,-1);
        tracep->declBus(c+34,"top u_EXU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"top u_EXU lsu_wb_data", false,-1, 63,0);
        tracep->declQuad(c+66,"top u_EXU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+56,"top u_EXU axi_AW_VALID", false,-1);
        tracep->declBit(c+57,"top u_EXU axi_AW_READY", false,-1);
        tracep->declQuad(c+72,"top u_EXU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+74,"top u_EXU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+58,"top u_EXU axi_W_VALID", false,-1);
        tracep->declBit(c+59,"top u_EXU axi_W_READY", false,-1);
        tracep->declBit(c+60,"top u_EXU axi_B_VALID", false,-1);
        tracep->declBit(c+61,"top u_EXU axi_B_READY", false,-1);
        tracep->declQuad(c+68,"top u_EXU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+62,"top u_EXU axi_AR_VALID", false,-1);
        tracep->declBit(c+63,"top u_EXU axi_AR_READY", false,-1);
        tracep->declQuad(c+70,"top u_EXU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+64,"top u_EXU axi_R_VALID", false,-1);
        tracep->declBit(c+65,"top u_EXU axi_R_READY", false,-1);
        tracep->declBit(c+98,"top u_EXU alu_stall", false,-1);
        tracep->declBit(c+99,"top u_EXU bmu_vld", false,-1);
        tracep->declBit(c+100,"top u_EXU lsu_data_vld", false,-1);
        tracep->declBit(c+101,"top u_EXU ld_req", false,-1);
        tracep->declBit(c+102,"top u_EXU st_req", false,-1);
        tracep->declBit(c+103,"top u_EXU sys_req", false,-1);
        tracep->declBit(c+104,"top u_EXU csr_data_vld", false,-1);
        tracep->declQuad(c+105,"top u_EXU csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+107,"top u_EXU csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+108,"top u_EXU csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+110,"top u_EXU csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+111,"top u_EXU csrf_wen", false,-1);
        tracep->declBit(c+333,"top u_EXU u_alu clk", false,-1);
        tracep->declBit(c+334,"top u_EXU u_alu rst_n", false,-1);
        tracep->declBit(c+6,"top u_EXU u_alu dec_inst_vld", false,-1);
        tracep->declQuad(c+18,"top u_EXU u_alu inst_act", false,-1, 32,0);
        tracep->declBus(c+12,"top u_EXU u_alu dst_id", false,-1, 4,0);
        tracep->declQuad(c+21,"top u_EXU u_alu src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU u_alu src2", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_EXU u_alu imm", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_EXU u_alu pc", false,-1, 63,0);
        tracep->declBit(c+25,"top u_EXU u_alu alu_wb_vld", false,-1);
        tracep->declBus(c+26,"top u_EXU u_alu alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"top u_EXU u_alu alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+98,"top u_EXU u_alu alu_stall", false,-1);
        tracep->declBit(c+112,"top u_EXU u_alu dec_inst_vld_d", false,-1);
        tracep->declBit(c+113,"top u_EXU u_alu shift_out_vld", false,-1);
        tracep->declBit(c+114,"top u_EXU u_alu lgc_out_vld", false,-1);
        tracep->declBit(c+115,"top u_EXU u_alu add_out_vld", false,-1);
        tracep->declQuad(c+116,"top u_EXU u_alu shift_data_out", false,-1, 63,0);
        tracep->declQuad(c+118,"top u_EXU u_alu lgc_data_out", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_EXU u_alu add_data_out", false,-1, 63,0);
        tracep->declBit(c+122,"top u_EXU u_alu w_inst_d", false,-1);
        tracep->declBit(c+123,"top u_EXU u_alu div_rem_d", false,-1);
        tracep->declBit(c+124,"top u_EXU u_alu shift_req", false,-1);
        tracep->declBit(c+125,"top u_EXU u_alu shift_dir", false,-1);
        tracep->declBit(c+126,"top u_EXU u_alu shift_mode", false,-1);
        tracep->declBus(c+127,"top u_EXU u_alu shift_shamt", false,-1, 5,0);
        tracep->declQuad(c+128,"top u_EXU u_alu shift_result", false,-1, 63,0);
        tracep->declQuad(c+130,"top u_EXU u_alu add_result", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_EXU u_alu adder_src0", false,-1, 63,0);
        tracep->declQuad(c+134,"top u_EXU u_alu adder_src1", false,-1, 63,0);
        tracep->declBit(c+136,"top u_EXU u_alu adder_AorS", false,-1);
        tracep->declBit(c+137,"top u_EXU u_alu add_req", false,-1);
        tracep->declQuad(c+138,"top u_EXU u_alu adder_sum", false,-1, 63,0);
        tracep->declBit(c+140,"top u_EXU u_alu adder_co", false,-1);
        tracep->declBit(c+141,"top u_EXU u_alu adder_sign", false,-1);
        tracep->declQuad(c+142,"top u_EXU u_alu lgc_result", false,-1, 63,0);
        tracep->declBit(c+144,"top u_EXU u_alu lgc_req", false,-1);
        tracep->declQuad(c+21,"top u_EXU u_alu lgc_src0", false,-1, 63,0);
        tracep->declQuad(c+145,"top u_EXU u_alu lgc_src1", false,-1, 63,0);
        tracep->declBit(c+147,"top u_EXU u_alu mul_out_valid", false,-1);
        tracep->declQuad(c+148,"top u_EXU u_alu mul_result", false,-1, 63,0);
        tracep->declBit(c+150,"top u_EXU u_alu mult_req", false,-1);
        tracep->declQuad(c+21,"top u_EXU u_alu mult_src0", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU u_alu mult_src1", false,-1, 63,0);
        tracep->declBit(c+151,"top u_EXU u_alu mult_sign", false,-1);
        tracep->declArray(c+152,"top u_EXU u_alu mult_data_out", false,-1, 127,0);
        tracep->declBit(c+147,"top u_EXU u_alu mult_data_vld", false,-1);
        tracep->declBit(c+156,"top u_EXU u_alu div_req", false,-1);
        tracep->declBit(c+157,"top u_EXU u_alu div_out_valid", false,-1);
        tracep->declQuad(c+158,"top u_EXU u_alu quotient", false,-1, 63,0);
        tracep->declQuad(c+160,"top u_EXU u_alu remainder", false,-1, 63,0);
        tracep->declQuad(c+162,"top u_EXU u_alu div_result", false,-1, 63,0);
        tracep->declBit(c+124,"top u_EXU u_alu alu_shift shift_req", false,-1);
        tracep->declQuad(c+21,"top u_EXU u_alu alu_shift shift_data_in", false,-1, 63,0);
        tracep->declBit(c+349,"top u_EXU u_alu alu_shift shift_data_tc", false,-1);
        tracep->declBus(c+127,"top u_EXU u_alu alu_shift shift_sh", false,-1, 5,0);
        tracep->declBit(c+126,"top u_EXU u_alu alu_shift shift_sh_mode", false,-1);
        tracep->declBit(c+125,"top u_EXU u_alu alu_shift shift_dir", false,-1);
        tracep->declBit(c+164,"top u_EXU u_alu alu_shift w_inst", false,-1);
        tracep->declQuad(c+128,"top u_EXU u_alu alu_shift shift_data_out", false,-1, 63,0);
        tracep->declQuad(c+165,"top u_EXU u_alu alu_shift shift_res", false,-1, 63,0);
        tracep->declBus(c+167,"top u_EXU u_alu alu_shift w_inst_shift_res", false,-1, 31,0);
        tracep->declBus(c+350,"top u_EXU u_alu alu_add WIDTH", false,-1, 31,0);
        tracep->declQuad(c+134,"top u_EXU u_alu alu_add adder_src1", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_EXU u_alu alu_add adder_src0", false,-1, 63,0);
        tracep->declBit(c+349,"top u_EXU u_alu alu_add adder_src1_vld", false,-1);
        tracep->declBit(c+349,"top u_EXU u_alu alu_add adder_src0_vld", false,-1);
        tracep->declBit(c+151,"top u_EXU u_alu alu_add sign", false,-1);
        tracep->declBit(c+164,"top u_EXU u_alu alu_add w_inst", false,-1);
        tracep->declBit(c+136,"top u_EXU u_alu alu_add adder_AorS", false,-1);
        tracep->declBit(c+137,"top u_EXU u_alu alu_add add_req", false,-1);
        tracep->declQuad(c+138,"top u_EXU u_alu alu_add adder_sum", false,-1, 63,0);
        tracep->declBit(c+140,"top u_EXU u_alu alu_add adder_co", false,-1);
        tracep->declBit(c+141,"top u_EXU u_alu alu_add adder_sign", false,-1);
        tracep->declBus(c+351,"top u_EXU u_alu alu_add H_WIDTH", false,-1, 31,0);
        tracep->declArray(c+168,"top u_EXU u_alu alu_add addend", false,-1, 128,0);
        tracep->declBit(c+173,"top u_EXU u_alu alu_add s0", false,-1);
        tracep->declQuad(c+174,"top u_EXU u_alu alu_add adder_sum_temp", false,-1, 63,0);
        tracep->declBit(c+333,"top u_EXU u_alu u_div clk", false,-1);
        tracep->declBit(c+334,"top u_EXU u_alu u_div rst_n", false,-1);
        tracep->declBit(c+151,"top u_EXU u_alu u_div sign_div", false,-1);
        tracep->declBit(c+164,"top u_EXU u_alu u_div divw", false,-1);
        tracep->declQuad(c+21,"top u_EXU u_alu u_div dividend", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU u_alu u_div divisor", false,-1, 63,0);
        tracep->declBit(c+156,"top u_EXU u_alu u_div div_valid", false,-1);
        tracep->declQuad(c+158,"top u_EXU u_alu u_div quotient", false,-1, 63,0);
        tracep->declQuad(c+160,"top u_EXU u_alu u_div remainder", false,-1, 63,0);
        tracep->declBit(c+157,"top u_EXU u_alu u_div out_valid", false,-1);
        tracep->declBus(c+176,"top u_EXU u_alu u_div count", false,-1, 5,0);
        tracep->declQuad(c+177,"top u_EXU u_alu u_div reg_q", false,-1, 63,0);
        tracep->declQuad(c+179,"top u_EXU u_alu u_div reg_r", false,-1, 63,0);
        tracep->declQuad(c+181,"top u_EXU u_alu u_div reg_b", false,-1, 63,0);
        tracep->declBit(c+183,"top u_EXU u_alu u_div r_sign", false,-1);
        tracep->declBit(c+184,"top u_EXU u_alu u_div dividend_sign", false,-1);
        tracep->declBit(c+185,"top u_EXU u_alu u_div divisor_sign", false,-1);
        tracep->declQuad(c+186,"top u_EXU u_alu u_div op_dividend", false,-1, 63,0);
        tracep->declQuad(c+188,"top u_EXU u_alu u_div op_divisor", false,-1, 63,0);
        tracep->declArray(c+190,"top u_EXU u_alu u_div sub_add", false,-1, 64,0);
        tracep->declQuad(c+193,"top u_EXU u_alu u_div reg_r2", false,-1, 63,0);
        tracep->declBit(c+195,"top u_EXU u_alu u_div busy", false,-1);
        tracep->declBit(c+196,"top u_EXU u_alu u_div busy_r", false,-1);
        tracep->declBit(c+333,"top u_EXU u_BJU clk", false,-1);
        tracep->declBit(c+334,"top u_EXU u_BJU rst_n", false,-1);
        tracep->declBit(c+6,"top u_EXU u_BJU dec_inst_vld", false,-1);
        tracep->declBit(c+197,"top u_EXU u_BJU jal", false,-1);
        tracep->declBit(c+198,"top u_EXU u_BJU jalr", false,-1);
        tracep->declBit(c+199,"top u_EXU u_BJU br", false,-1);
        tracep->declBit(c+200,"top u_EXU u_BJU syscall", false,-1);
        tracep->declBus(c+201,"top u_EXU u_BJU func3", false,-1, 2,0);
        tracep->declQuad(c+7,"top u_EXU u_BJU pc", false,-1, 63,0);
        tracep->declQuad(c+21,"top u_EXU u_BJU src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU u_BJU src2", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_EXU u_BJU imm", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_EXU u_BJU rCSR", false,-1, 63,0);
        tracep->declBit(c+336,"top u_EXU u_BJU ifetch_taken", false,-1);
        tracep->declQuad(c+337,"top u_EXU u_BJU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+99,"top u_EXU u_BJU bmu_vld", false,-1);
        tracep->declBit(c+202,"top u_EXU u_BJU ifetch_taken_pre", false,-1);
        tracep->declQuad(c+203,"top u_EXU u_BJU ifetch_taken_pc_pre", false,-1, 63,0);
        tracep->declQuad(c+205,"top u_EXU u_BJU add_src1", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_EXU u_BJU add_src2", false,-1, 63,0);
        tracep->declQuad(c+207,"top u_EXU u_BJU add_sum", false,-1, 63,0);
        tracep->declBit(c+333,"top u_EXU u_LSU clk", false,-1);
        tracep->declBit(c+334,"top u_EXU u_LSU rst_n", false,-1);
        tracep->declBit(c+101,"top u_EXU u_LSU ld_req", false,-1);
        tracep->declBit(c+102,"top u_EXU u_LSU st_req", false,-1);
        tracep->declBus(c+201,"top u_EXU u_LSU func3", false,-1, 2,0);
        tracep->declQuad(c+21,"top u_EXU u_LSU src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU u_LSU src2", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_EXU u_LSU imm", false,-1, 63,0);
        tracep->declBus(c+12,"top u_EXU u_LSU dst_id", false,-1, 4,0);
        tracep->declBit(c+209,"top u_EXU u_LSU dst_vld", false,-1);
        tracep->declBit(c+100,"top u_EXU u_LSU lsu_data_vld", false,-1);
        tracep->declBit(c+33,"top u_EXU u_LSU lsu_wb_vld", false,-1);
        tracep->declBus(c+34,"top u_EXU u_LSU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"top u_EXU u_LSU lsu_wb_data", false,-1, 63,0);
        tracep->declQuad(c+66,"top u_EXU u_LSU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+56,"top u_EXU u_LSU axi_AW_VALID", false,-1);
        tracep->declBit(c+57,"top u_EXU u_LSU axi_AW_READY", false,-1);
        tracep->declQuad(c+72,"top u_EXU u_LSU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+74,"top u_EXU u_LSU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+58,"top u_EXU u_LSU axi_W_VALID", false,-1);
        tracep->declBit(c+59,"top u_EXU u_LSU axi_W_READY", false,-1);
        tracep->declBit(c+60,"top u_EXU u_LSU axi_B_VALID", false,-1);
        tracep->declBit(c+61,"top u_EXU u_LSU axi_B_READY", false,-1);
        tracep->declQuad(c+68,"top u_EXU u_LSU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+62,"top u_EXU u_LSU axi_AR_VALID", false,-1);
        tracep->declBit(c+63,"top u_EXU u_LSU axi_AR_READY", false,-1);
        tracep->declQuad(c+70,"top u_EXU u_LSU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+64,"top u_EXU u_LSU axi_R_VALID", false,-1);
        tracep->declBit(c+65,"top u_EXU u_LSU axi_R_READY", false,-1);
        tracep->declBus(c+210,"top u_EXU u_LSU func3_d", false,-1, 2,0);
        tracep->declBit(c+211,"top u_EXU u_LSU dst_vld_r", false,-1);
        tracep->declBus(c+34,"top u_EXU u_LSU dst_id_r", false,-1, 4,0);
        tracep->declQuad(c+212,"top u_EXU u_LSU raddrM", false,-1, 63,0);
        tracep->declQuad(c+70,"top u_EXU u_LSU rdataM", false,-1, 63,0);
        tracep->declQuad(c+214,"top u_EXU u_LSU waddrM", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU u_LSU wdataM", false,-1, 63,0);
        tracep->declBus(c+216,"top u_EXU u_LSU wmaskM", false,-1, 7,0);
        tracep->declBit(c+102,"top u_EXU u_LSU wenM", false,-1);
        tracep->declBit(c+101,"top u_EXU u_LSU renM", false,-1);
        tracep->declBit(c+100,"top u_EXU u_LSU dataM_valid", false,-1);
        tracep->declBus(c+344,"top u_EXU u_LSU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+344,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+102,"top u_EXU u_LSU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+214,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+216,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+101,"top u_EXU u_LSU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+212,"top u_EXU u_LSU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+70,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+333,"top u_EXU u_LSU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+334,"top u_EXU u_LSU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+66,"top u_EXU u_LSU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+56,"top u_EXU u_LSU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+57,"top u_EXU u_LSU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+72,"top u_EXU u_LSU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+74,"top u_EXU u_LSU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+58,"top u_EXU u_LSU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+59,"top u_EXU u_LSU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+60,"top u_EXU u_LSU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+61,"top u_EXU u_LSU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+68,"top u_EXU u_LSU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+62,"top u_EXU u_LSU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+63,"top u_EXU u_LSU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+70,"top u_EXU u_LSU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+64,"top u_EXU u_LSU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+65,"top u_EXU u_LSU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+217,"top u_EXU u_LSU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_EXU u_LSU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+68,"top u_EXU u_LSU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+221,"top u_EXU u_LSU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+222,"top u_EXU u_LSU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+223,"top u_EXU u_LSU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+224,"top u_EXU u_LSU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+225,"top u_EXU u_LSU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBus(c+352,"top u_EXU u_sysc ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_EXU u_sysc DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+333,"top u_EXU u_sysc clk", false,-1);
        tracep->declBit(c+334,"top u_EXU u_sysc rst_n", false,-1);
        tracep->declBit(c+103,"top u_EXU u_sysc sys_req", false,-1);
        tracep->declBit(c+226,"top u_EXU u_sysc csr", false,-1);
        tracep->declBit(c+227,"top u_EXU u_sysc ecall", false,-1);
        tracep->declBit(c+228,"top u_EXU u_sysc ebreak", false,-1);
        tracep->declBit(c+229,"top u_EXU u_sysc mret", false,-1);
        tracep->declBus(c+201,"top u_EXU u_sysc func3", false,-1, 2,0);
        tracep->declBit(c+209,"top u_EXU u_sysc dst_vld", false,-1);
        tracep->declQuad(c+7,"top u_EXU u_sysc pc", false,-1, 63,0);
        tracep->declQuad(c+21,"top u_EXU u_sysc src1", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_EXU u_sysc imm", false,-1, 63,0);
        tracep->declBus(c+12,"top u_EXU u_sysc dst_id", false,-1, 4,0);
        tracep->declBit(c+104,"top u_EXU u_sysc csr_vld", false,-1);
        tracep->declQuad(c+30,"top u_EXU u_sysc csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+32,"top u_EXU u_sysc csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+29,"top u_EXU u_sysc csr_wb_vld", false,-1);
        tracep->declQuad(c+105,"top u_EXU u_sysc csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+107,"top u_EXU u_sysc csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+108,"top u_EXU u_sysc csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+110,"top u_EXU u_sysc csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+111,"top u_EXU u_sysc csrf_wen", false,-1);
        tracep->declBus(c+353,"top u_EXU u_sysc addr_mcause", false,-1, 11,0);
        tracep->declBus(c+354,"top u_EXU u_sysc addr_mstatus", false,-1, 11,0);
        tracep->declBus(c+355,"top u_EXU u_sysc addr_mepc", false,-1, 11,0);
        tracep->declBus(c+356,"top u_EXU u_sysc addr_mtvec", false,-1, 11,0);
        tracep->declBus(c+230,"top u_EXU u_sysc raddr", false,-1, 11,0);
        tracep->declQuad(c+108,"top u_EXU u_sysc wdata", false,-1, 63,0);
        tracep->declBus(c+231,"top u_EXU u_sysc waddr", false,-1, 11,0);
        tracep->declBit(c+111,"top u_EXU u_sysc wen", false,-1);
        tracep->declBus(c+357,"top u_EXU u_sysc INIT", false,-1, 1,0);
        tracep->declBus(c+358,"top u_EXU u_sysc WR1", false,-1, 1,0);
        tracep->declBus(c+359,"top u_EXU u_sysc WR2", false,-1, 1,0);
        tracep->declBus(c+232,"top u_EXU u_sysc state", false,-1, 1,0);
        tracep->declBus(c+233,"top u_EXU u_sysc nstate", false,-1, 1,0);
        tracep->declBus(c+352,"top u_EXU u_csrf ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_EXU u_csrf DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+333,"top u_EXU u_csrf clk", false,-1);
        tracep->declQuad(c+105,"top u_EXU u_csrf rdata", false,-1, 63,0);
        tracep->declBus(c+107,"top u_EXU u_csrf raddr", false,-1, 1,0);
        tracep->declQuad(c+108,"top u_EXU u_csrf wdata", false,-1, 63,0);
        tracep->declBus(c+110,"top u_EXU u_csrf waddr", false,-1, 1,0);
        tracep->declBit(c+111,"top u_EXU u_csrf wen", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+234+i*2,"top u_EXU u_csrf csrf", true,(i+0), 63,0);}}
        tracep->declBit(c+333,"top u_RMU clk", false,-1);
        tracep->declBit(c+334,"top u_RMU rst_n", false,-1);
        tracep->declBus(c+13,"top u_RMU rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_RMU rs2", false,-1, 4,0);
        tracep->declQuad(c+21,"top u_RMU src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_RMU src2", false,-1, 63,0);
        tracep->declBit(c+25,"top u_RMU alu_wb_vld", false,-1);
        tracep->declBus(c+26,"top u_RMU alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+27,"top u_RMU alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+29,"top u_RMU csr_wb_vld", false,-1);
        tracep->declQuad(c+30,"top u_RMU csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+32,"top u_RMU csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+33,"top u_RMU lsu_wb_vld", false,-1);
        tracep->declBus(c+34,"top u_RMU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"top u_RMU lsu_wb_data", false,-1, 63,0);
        tracep->declBit(c+242,"top u_RMU wb_vld", false,-1);
        tracep->declBus(c+243,"top u_RMU wb_addr", false,-1, 4,0);
        tracep->declQuad(c+244,"top u_RMU wb_data", false,-1, 63,0);
        tracep->declQuad(c+246,"top u_RMU grf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+248,"top u_RMU grf_rdata2", false,-1, 63,0);
        tracep->declBus(c+13,"top u_RMU grf_raddr1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_RMU grf_raddr2", false,-1, 4,0);
        tracep->declBus(c+360,"top u_RMU u1_gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+350,"top u_RMU u1_gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+333,"top u_RMU u1_gpr clk", false,-1);
        tracep->declQuad(c+246,"top u_RMU u1_gpr rdata1", false,-1, 63,0);
        tracep->declBus(c+13,"top u_RMU u1_gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+248,"top u_RMU u1_gpr rdata2", false,-1, 63,0);
        tracep->declBus(c+14,"top u_RMU u1_gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+244,"top u_RMU u1_gpr wdata", false,-1, 63,0);
        tracep->declBus(c+243,"top u_RMU u1_gpr waddr", false,-1, 4,0);
        tracep->declBit(c+242,"top u_RMU u1_gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+250+i*2,"top u_RMU u1_gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+344,"top u_AXI_arbiter_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+344,"top u_AXI_arbiter_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+75,"top u_AXI_arbiter_SRAM in_channel", false,-1);
        tracep->declBit(c+333,"top u_AXI_arbiter_SRAM CLK", false,-1);
        tracep->declBit(c+334,"top u_AXI_arbiter_SRAM RESETN", false,-1);
        tracep->declQuad(c+47,"top u_AXI_arbiter_SRAM axi1_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+37,"top u_AXI_arbiter_SRAM axi1_AW_VALID", false,-1);
        tracep->declBit(c+38,"top u_AXI_arbiter_SRAM axi1_AW_READY", false,-1);
        tracep->declQuad(c+53,"top u_AXI_arbiter_SRAM axi1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top u_AXI_arbiter_SRAM axi1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+39,"top u_AXI_arbiter_SRAM axi1_W_VALID", false,-1);
        tracep->declBit(c+40,"top u_AXI_arbiter_SRAM axi1_W_READY", false,-1);
        tracep->declBit(c+41,"top u_AXI_arbiter_SRAM axi1_B_VALID", false,-1);
        tracep->declBit(c+42,"top u_AXI_arbiter_SRAM axi1_B_READY", false,-1);
        tracep->declQuad(c+49,"top u_AXI_arbiter_SRAM axi1_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+43,"top u_AXI_arbiter_SRAM axi1_AR_VALID", false,-1);
        tracep->declBit(c+44,"top u_AXI_arbiter_SRAM axi1_AR_READY", false,-1);
        tracep->declQuad(c+51,"top u_AXI_arbiter_SRAM axi1_R_DATA", false,-1, 63,0);
        tracep->declBit(c+45,"top u_AXI_arbiter_SRAM axi1_R_VALID", false,-1);
        tracep->declBit(c+46,"top u_AXI_arbiter_SRAM axi1_R_READY", false,-1);
        tracep->declQuad(c+66,"top u_AXI_arbiter_SRAM axi2_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+56,"top u_AXI_arbiter_SRAM axi2_AW_VALID", false,-1);
        tracep->declBit(c+57,"top u_AXI_arbiter_SRAM axi2_AW_READY", false,-1);
        tracep->declQuad(c+72,"top u_AXI_arbiter_SRAM axi2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+74,"top u_AXI_arbiter_SRAM axi2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+58,"top u_AXI_arbiter_SRAM axi2_W_VALID", false,-1);
        tracep->declBit(c+59,"top u_AXI_arbiter_SRAM axi2_W_READY", false,-1);
        tracep->declBit(c+60,"top u_AXI_arbiter_SRAM axi2_B_VALID", false,-1);
        tracep->declBit(c+61,"top u_AXI_arbiter_SRAM axi2_B_READY", false,-1);
        tracep->declQuad(c+68,"top u_AXI_arbiter_SRAM axi2_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+62,"top u_AXI_arbiter_SRAM axi2_AR_VALID", false,-1);
        tracep->declBit(c+63,"top u_AXI_arbiter_SRAM axi2_AR_READY", false,-1);
        tracep->declQuad(c+70,"top u_AXI_arbiter_SRAM axi2_R_DATA", false,-1, 63,0);
        tracep->declBit(c+64,"top u_AXI_arbiter_SRAM axi2_R_VALID", false,-1);
        tracep->declBit(c+65,"top u_AXI_arbiter_SRAM axi2_R_READY", false,-1);
        tracep->declBit(c+75,"top u_AXI_arbiter_SRAM channel", false,-1);
        tracep->declBit(c+314,"top u_AXI_arbiter_SRAM AW_VALID", false,-1);
        tracep->declBit(c+315,"top u_AXI_arbiter_SRAM W_VALID", false,-1);
        tracep->declBit(c+316,"top u_AXI_arbiter_SRAM B_READY", false,-1);
        tracep->declBit(c+317,"top u_AXI_arbiter_SRAM AR_VALID", false,-1);
        tracep->declBit(c+318,"top u_AXI_arbiter_SRAM R_READY", false,-1);
        tracep->declBit(c+319,"top u_AXI_arbiter_SRAM B_VALID", false,-1);
        tracep->declQuad(c+320,"top u_AXI_arbiter_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+322,"top u_AXI_arbiter_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+324,"top u_AXI_arbiter_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+326,"top u_AXI_arbiter_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+327,"top u_AXI_arbiter_SRAM AR_READY", false,-1);
        tracep->declBit(c+328,"top u_AXI_arbiter_SRAM R_VALID", false,-1);
        tracep->declBit(c+329,"top u_AXI_arbiter_SRAM AW_READY", false,-1);
        tracep->declBit(c+330,"top u_AXI_arbiter_SRAM W_READY", false,-1);
        tracep->declQuad(c+331,"top u_AXI_arbiter_SRAM R_DATA", false,-1, 63,0);
        tracep->declBus(c+344,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+344,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+333,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM CLK", false,-1);
        tracep->declBit(c+334,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM RESETN", false,-1);
        tracep->declQuad(c+320,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+314,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_VALID", false,-1);
        tracep->declBit(c+329,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_READY", false,-1);
        tracep->declQuad(c+324,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+326,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+315,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_VALID", false,-1);
        tracep->declBit(c+330,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_READY", false,-1);
        tracep->declBit(c+319,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_VALID", false,-1);
        tracep->declBit(c+316,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_READY", false,-1);
        tracep->declQuad(c+322,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+317,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_VALID", false,-1);
        tracep->declBit(c+327,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_READY", false,-1);
        tracep->declQuad(c+331,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+328,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_VALID", false,-1);
        tracep->declBit(c+318,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_READY", false,-1);
        tracep->declBus(c+361,"$unit inst_ecall", false,-1, 11,0);
        tracep->declBus(c+362,"$unit inst_mret", false,-1, 11,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp87;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__u_ifetch__DOT__rask));
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__ifetch_inst_pc),64);
        tracep->fullQData(oldp+4,((0xffffffffULL & vlSelf->top__DOT__axis1_R_DATA)),64);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__dec_inst_vld));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__dec_inst_pc),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__dec_inst),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__ifetch_req));
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__rd),5);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__rs2),5);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__imm),64);
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__op),32);
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__inst_act),33);
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__inst_type),18);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__src2),64);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__alu_wb_vld));
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__alu_wb_addr),5);
        tracep->fullQData(oldp+27,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
                                     ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out
                                         : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld)
                                             ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out
                                             : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld)
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U] 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U]))))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                                    : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                                    ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                                    : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                                  : 0ULL)))))),64);
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__csr_wb_vld));
        tracep->fullQData(oldp+30,(vlSelf->top__DOT__csr_wb_data),64);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__csr_wb_addr),5);
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__lsu_wb_vld));
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r),5);
        tracep->fullQData(oldp+35,(((4U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                     ? ((2U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                         ? ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                             ? 0ULL
                                             : (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA)))
                                         : ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                             : (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))
                                     : ((2U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                         ? ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                             ? vlSelf->top__DOT__axis2_R_DATA
                                             : (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                         : ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0xfU)))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__axis2_R_DATA)))))
                                             : (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 7U)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))))),64);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__axis1_AW_READY));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__axis1_W_READY));
        tracep->fullBit(oldp+41,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__axis1_B_READY));
        tracep->fullBit(oldp+43,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__rreq) 
                                  | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
        tracep->fullBit(oldp+44,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__axis1_R_VALID));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__axis1_R_READY));
        tracep->fullQData(oldp+47,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                     ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__axis1_R_DATA),64);
        tracep->fullQData(oldp+53,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                     : 0ULL)),64);
        tracep->fullCData(oldp+55,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? (0xffU & (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                     : 0U)),8);
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__axis2_AW_VALID));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__axis2_AW_READY));
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__axis2_W_VALID));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__axis2_W_READY));
        tracep->fullBit(oldp+60,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__axis2_B_READY));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__axis2_AR_VALID));
        tracep->fullBit(oldp+63,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__axis2_R_VALID));
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__axis2_R_READY));
        tracep->fullQData(oldp+66,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__axis2_R_DATA),64);
        tracep->fullQData(oldp+72,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__src2
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                         : 0ULL))),64);
        tracep->fullCData(oldp+74,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__in_channel));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__itrace_en));
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_ifetch__DOT__pc_raddr),64);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__u_ifetch__DOT__pre_cnt),6);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__u_ifetch__DOT__rreq));
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__u_dec__DOT__inst_act_pre),33);
        tracep->fullIData(oldp+90,(vlSelf->top__DOT__u_dec__DOT__inst_type_pre),18);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__u_dec__DOT__ras_rd_link));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__u_dec__DOT__ras_rs1_link));
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__u_dec__DOT__imm_pre),64);
        tracep->fullCData(oldp+95,((0x1fU & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 7U))))),5);
        tracep->fullCData(oldp+96,((0x1fU & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 0xfU))))),5);
        tracep->fullCData(oldp+97,((0x1fU & (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 0x14U))))),5);
        tracep->fullBit(oldp+98,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d) 
                                  & (~ (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
                                           | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                          | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
                                         | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld))))));
        tracep->fullBit(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__bmu_vld));
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
        tracep->fullBit(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__st_req));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
        tracep->fullCData(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
        tracep->fullQData(oldp+108,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                      ? 0xa00001800ULL
                                      : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 8U)))
                                              ? vlSelf->top__DOT__dec_inst_pc
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 0xaU)))
                                                  ? 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__inst_act 
                                                               >> 3U))))
                                                   ? vlSelf->top__DOT__src1
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__inst_act 
                                                                >> 3U))))
                                                    ? 
                                                   (vlSelf->top__DOT__src1 
                                                    | vlSelf->top__DOT__u_EXU__DOT__csrf_rdata)
                                                    : 0ULL))
                                                  : 0ULL))
                                          : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                              ? 0xbULL
                                              : 0ULL)))),64);
        tracep->fullCData(oldp+110,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                      ? 0U : ((0x300U 
                                               == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                               ? 1U
                                               : ((0x341U 
                                                   == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                   ? 2U
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                    ? 3U
                                                    : 0U))))),2);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d));
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out),64);
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir));
        tracep->fullBit(oldp+126,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xfU)))));
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt),6);
        tracep->fullQData(oldp+128,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req)
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__inst_act 
                                                        >> 0xcU)))
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res)))
                                          : ((1U & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 0xcU)))
                                              ? 0ULL
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 0xfU)))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                   ? 
                                                  VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                   : 
                                                  (vlSelf->top__DOT__src1 
                                                   << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                   ? 
                                                  (vlSelf->top__DOT__src1 
                                                   >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                   : 
                                                  (vlSelf->top__DOT__src1 
                                                   << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))))))
                                      : 0ULL)),64);
        __Vtemp67[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp67[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp67[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp69[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp69[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp69[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp70, __Vtemp67, __Vtemp69);
        tracep->fullQData(oldp+130,(((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x11U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__inst_act 
                                                        >> 0xdU)))
                                          ? ((1U & 
                                              ((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                  ? 
                                                 (7U 
                                                  & __Vtemp70[2U])
                                                  : 0U) 
                                                >> 1U) 
                                               ^ (IData)(
                                                         (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum 
                                                          >> 0x3fU))))
                                              ? (QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum 
                                                                               >> 0x3fU))))))
                                              : (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum 
                                                                            >> 0x3fU))))))
                                          : ((1U == 
                                              ((2U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 
                                                            >> 0x3fU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1 
                                                             >> 0x3fU)))))
                                              ? 1ULL
                                              : ((2U 
                                                  == 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 
                                                                >> 0x3fU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1 
                                                                 >> 0x3fU)))))
                                                  ? 0ULL
                                                  : (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum 
                                                                                >> 0x3fU))))))))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum)),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1),64);
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req));
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum),64);
        __Vtemp76[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp76[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp76[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp78[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp78[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp78[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp79, __Vtemp76, __Vtemp78);
        tracep->fullBit(oldp+140,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                           ? (7U & 
                                              __Vtemp79[2U])
                                           : 0U) >> 2U))));
        __Vtemp85[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp85[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp85[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp87[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp87[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp87[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp88, __Vtemp85, __Vtemp87);
        tracep->fullBit(oldp+141,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                           ? (7U & 
                                              __Vtemp88[2U])
                                           : 0U) >> 1U))));
        tracep->fullQData(oldp+142,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)
                                      ? ((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 3U))))
                                          ? (vlSelf->top__DOT__src1 
                                             & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                          : ((6U == 
                                              (7U & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U))))
                                              ? (vlSelf->top__DOT__src1 
                                                 | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 3U))))
                                                  ? 
                                                 (vlSelf->top__DOT__src1 
                                                  ^ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                                  : 0ULL)))
                                      : 0ULL)),64);
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req));
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1),64);
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld));
        tracep->fullQData(oldp+148,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U] 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U]))))),64);
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req));
        tracep->fullBit(oldp+151,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xdU)))));
        tracep->fullWData(oldp+152,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out),128);
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid));
        tracep->fullQData(oldp+158,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                      ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q)),64);
        tracep->fullQData(oldp+160,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)),64);
        tracep->fullQData(oldp+162,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d)
                                      ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                      : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                          ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))),64);
        tracep->fullBit(oldp+164,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xcU)))));
        tracep->fullQData(oldp+165,(((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xcU)))
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 0xfU)))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                  ? 
                                                 VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                  : 
                                                 (vlSelf->top__DOT__src1 
                                                  << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                  ? 
                                                 (vlSelf->top__DOT__src1 
                                                  >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                  : 
                                                 (vlSelf->top__DOT__src1 
                                                  << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))))),64);
        tracep->fullIData(oldp+167,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res),32);
        tracep->fullWData(oldp+168,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend),129);
        __Vtemp94[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp94[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp94[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp96[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp96[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp96[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp97, __Vtemp94, __Vtemp96);
        tracep->fullBit(oldp+173,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                    ? (1U & __Vtemp97[0U])
                                    : 0U)));
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp),64);
        tracep->fullCData(oldp+176,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count),6);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b),64);
        tracep->fullBit(oldp+183,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign));
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign));
        tracep->fullBit(oldp+185,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign));
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor),64);
        tracep->fullWData(oldp+190,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add),65);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2),64);
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy));
        tracep->fullBit(oldp+196,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
        tracep->fullBit(oldp+197,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+198,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+199,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+200,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 9U)))));
        tracep->fullCData(oldp+201,((7U & (IData)((vlSelf->top__DOT__inst_act 
                                                   >> 3U)))),3);
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre));
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum),64);
        tracep->fullBit(oldp+209,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 1U)))));
        tracep->fullCData(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d),3);
        tracep->fullBit(oldp+211,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
        tracep->fullQData(oldp+212,((vlSelf->top__DOT__src1 
                                     + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
        tracep->fullCData(oldp+216,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullCData(oldp+221,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullBit(oldp+226,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xaU)))));
        tracep->fullBit(oldp+227,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 8U)))));
        tracep->fullBit(oldp+228,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 6U)))));
        tracep->fullBit(oldp+229,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 7U)))));
        tracep->fullSData(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
        tracep->fullSData(oldp+231,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
        tracep->fullCData(oldp+232,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
        tracep->fullCData(oldp+233,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                      ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                               ? (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 8U)))
                                                   ? 3U
                                                   : 2U)
                                               : 2U))),2);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__u_RMU__DOT__wb_vld));
        tracep->fullCData(oldp+243,(vlSelf->top__DOT__u_RMU__DOT__wb_addr),5);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__u_RMU__DOT__wb_data),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                    [vlSelf->top__DOT__rs1]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                    [vlSelf->top__DOT__rs2]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+312,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[31]),64);
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
        tracep->fullBit(oldp+317,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
        tracep->fullBit(oldp+318,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
        tracep->fullBit(oldp+319,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
        tracep->fullQData(oldp+320,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                       ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                       : 0ULL))),64);
        tracep->fullQData(oldp+322,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                          : 0ULL) : vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
        tracep->fullQData(oldp+324,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? vlSelf->top__DOT__src2
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                       ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                       : 0ULL))),64);
        tracep->fullCData(oldp+326,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
                                               ? ((IData)(vlSelf->top__DOT__in_channel)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                     : 0U))
                                                   : 0U)
                                               : ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                   ? (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                   : 0U)))),8);
        tracep->fullBit(oldp+327,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
        tracep->fullBit(oldp+328,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
        tracep->fullBit(oldp+329,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
        tracep->fullBit(oldp+330,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
        tracep->fullQData(oldp+331,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        tracep->fullBit(oldp+333,(vlSelf->clk));
        tracep->fullBit(oldp+334,(vlSelf->rst_n));
        tracep->fullCData(oldp+335,(vlSelf->jmp_type),8);
        tracep->fullBit(oldp+336,(vlSelf->ifetch_taken));
        tracep->fullQData(oldp+337,(vlSelf->ifetch_taken_pc),64);
        tracep->fullBit(oldp+339,(vlSelf->mainUpdate_valid));
        tracep->fullQData(oldp+340,(vlSelf->inst),64);
        tracep->fullQData(oldp+342,(vlSelf->pc),64);
        tracep->fullIData(oldp+344,(0x40U),32);
        tracep->fullBit(oldp+345,(0U));
        tracep->fullQData(oldp+346,(0ULL),64);
        tracep->fullCData(oldp+348,(0U),8);
        tracep->fullBit(oldp+349,(1U));
        tracep->fullIData(oldp+350,(0x40U),32);
        tracep->fullIData(oldp+351,(0x20U),32);
        tracep->fullIData(oldp+352,(2U),32);
        tracep->fullSData(oldp+353,(0x342U),12);
        tracep->fullSData(oldp+354,(0x300U),12);
        tracep->fullSData(oldp+355,(0x341U),12);
        tracep->fullSData(oldp+356,(0x305U),12);
        tracep->fullCData(oldp+357,(0U),2);
        tracep->fullCData(oldp+358,(2U),2);
        tracep->fullCData(oldp+359,(3U),2);
        tracep->fullIData(oldp+360,(5U),32);
        tracep->fullSData(oldp+361,(1U),12);
        tracep->fullSData(oldp+362,(2U),12);
    }
}
