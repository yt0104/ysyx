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
        tracep->declBit(c+307,"clk", false,-1);
        tracep->declBit(c+308,"rst_n", false,-1);
        tracep->declBus(c+309,"jmp_type", false,-1, 7,0);
        tracep->declBit(c+310,"ifetch_taken", false,-1);
        tracep->declQuad(c+311,"ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+313,"mainUpdate_valid", false,-1);
        tracep->declQuad(c+314,"inst", false,-1, 63,0);
        tracep->declQuad(c+316,"pc", false,-1, 63,0);
        tracep->declBit(c+307,"top clk", false,-1);
        tracep->declBit(c+308,"top rst_n", false,-1);
        tracep->declBus(c+309,"top jmp_type", false,-1, 7,0);
        tracep->declBit(c+310,"top ifetch_taken", false,-1);
        tracep->declQuad(c+311,"top ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+313,"top mainUpdate_valid", false,-1);
        tracep->declQuad(c+314,"top inst", false,-1, 63,0);
        tracep->declQuad(c+316,"top pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top IFU_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"top IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"top IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+7,"top IDU_inst", false,-1, 63,0);
        tracep->declBit(c+9,"top ifetch_req", false,-1);
        tracep->declBit(c+10,"top IFU_vld", false,-1);
        tracep->declBit(c+11,"top IDU_vld", false,-1);
        tracep->declBus(c+12,"top rd", false,-1, 4,0);
        tracep->declBus(c+13,"top rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top imm", false,-1, 63,0);
        tracep->declBus(c+17,"top op", false,-1, 31,0);
        tracep->declBus(c+18,"top inst_act", false,-1, 30,0);
        tracep->declBus(c+19,"top inst_type", false,-1, 5,0);
        tracep->declBit(c+20,"top axis1_AW_VALID", false,-1);
        tracep->declBit(c+21,"top axis1_AW_READY", false,-1);
        tracep->declBit(c+22,"top axis1_W_VALID", false,-1);
        tracep->declBit(c+23,"top axis1_W_READY", false,-1);
        tracep->declBit(c+24,"top axis1_B_VALID", false,-1);
        tracep->declBit(c+25,"top axis1_B_READY", false,-1);
        tracep->declBit(c+26,"top axis1_AR_VALID", false,-1);
        tracep->declBit(c+27,"top axis1_AR_READY", false,-1);
        tracep->declBit(c+28,"top axis1_R_VALID", false,-1);
        tracep->declBit(c+29,"top axis1_R_READY", false,-1);
        tracep->declQuad(c+30,"top axis1_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+32,"top axis1_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+34,"top axis1_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+36,"top axis1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+38,"top axis1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+39,"top axis2_AW_VALID", false,-1);
        tracep->declBit(c+40,"top axis2_AW_READY", false,-1);
        tracep->declBit(c+41,"top axis2_W_VALID", false,-1);
        tracep->declBit(c+42,"top axis2_W_READY", false,-1);
        tracep->declBit(c+43,"top axis2_B_VALID", false,-1);
        tracep->declBit(c+44,"top axis2_B_READY", false,-1);
        tracep->declBit(c+45,"top axis2_AR_VALID", false,-1);
        tracep->declBit(c+46,"top axis2_AR_READY", false,-1);
        tracep->declBit(c+47,"top axis2_R_VALID", false,-1);
        tracep->declBit(c+48,"top axis2_R_READY", false,-1);
        tracep->declQuad(c+49,"top axis2_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+51,"top axis2_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+53,"top axis2_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+55,"top axis2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+57,"top axis2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+58,"top in_channel", false,-1);
        tracep->declBit(c+59,"top itrace_en", false,-1);
        tracep->declBit(c+307,"top u_IFU clk", false,-1);
        tracep->declBit(c+308,"top u_IFU rst_n", false,-1);
        tracep->declBit(c+10,"top u_IFU IFU_vld", false,-1);
        tracep->declQuad(c+1,"top u_IFU IFU_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_IFU IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+311,"top u_IFU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+310,"top u_IFU ifetch_taken", false,-1);
        tracep->declBit(c+9,"top u_IFU ifetch_req", false,-1);
        tracep->declQuad(c+30,"top u_IFU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+20,"top u_IFU axi_AW_VALID", false,-1);
        tracep->declBit(c+21,"top u_IFU axi_AW_READY", false,-1);
        tracep->declQuad(c+36,"top u_IFU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+38,"top u_IFU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+22,"top u_IFU axi_W_VALID", false,-1);
        tracep->declBit(c+23,"top u_IFU axi_W_READY", false,-1);
        tracep->declBit(c+24,"top u_IFU axi_B_VALID", false,-1);
        tracep->declBit(c+25,"top u_IFU axi_B_READY", false,-1);
        tracep->declQuad(c+32,"top u_IFU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+26,"top u_IFU axi_AR_VALID", false,-1);
        tracep->declBit(c+27,"top u_IFU axi_AR_READY", false,-1);
        tracep->declQuad(c+34,"top u_IFU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+28,"top u_IFU axi_R_VALID", false,-1);
        tracep->declBit(c+29,"top u_IFU axi_R_READY", false,-1);
        tracep->declQuad(c+60,"top u_IFU ifetch_pc", false,-1, 63,0);
        tracep->declBus(c+62,"top u_IFU pre_cnt", false,-1, 5,0);
        tracep->declQuad(c+34,"top u_IFU mem_inst64", false,-1, 63,0);
        tracep->declBit(c+10,"top u_IFU rask", false,-1);
        tracep->declBit(c+63,"top u_IFU rreq", false,-1);
        tracep->declBus(c+318,"top u_IFU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+318,"top u_IFU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+319,"top u_IFU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+320,"top u_IFU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+320,"top u_IFU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+322,"top u_IFU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+63,"top u_IFU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+60,"top u_IFU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+34,"top u_IFU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+307,"top u_IFU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+308,"top u_IFU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+30,"top u_IFU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+20,"top u_IFU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+21,"top u_IFU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+36,"top u_IFU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+38,"top u_IFU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+22,"top u_IFU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+23,"top u_IFU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+24,"top u_IFU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+25,"top u_IFU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+32,"top u_IFU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+26,"top u_IFU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+27,"top u_IFU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+34,"top u_IFU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+28,"top u_IFU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+29,"top u_IFU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+64,"top u_IFU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+66,"top u_IFU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+68,"top u_IFU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+70,"top u_IFU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+20,"top u_IFU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+22,"top u_IFU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+71,"top u_IFU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+72,"top u_IFU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBit(c+307,"top u_IDU clk", false,-1);
        tracep->declBit(c+308,"top u_IDU rst_n", false,-1);
        tracep->declBit(c+10,"top u_IDU IFU_vld", false,-1);
        tracep->declQuad(c+5,"top u_IDU IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_IDU IFU_pc", false,-1, 63,0);
        tracep->declBus(c+12,"top u_IDU rd", false,-1, 4,0);
        tracep->declBus(c+13,"top u_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_IDU rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_IDU imm", false,-1, 63,0);
        tracep->declBus(c+18,"top u_IDU inst_act", false,-1, 30,0);
        tracep->declBus(c+19,"top u_IDU inst_type", false,-1, 5,0);
        tracep->declBus(c+17,"top u_IDU op", false,-1, 31,0);
        tracep->declBit(c+11,"top u_IDU IDU_vld", false,-1);
        tracep->declQuad(c+3,"top u_IDU IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_IDU IDU_inst", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_IDU inst", false,-1, 63,0);
        tracep->declBus(c+73,"top u_IDU inst_act_pre", false,-1, 30,0);
        tracep->declBus(c+74,"top u_IDU inst_type_pre", false,-1, 5,0);
        tracep->declBit(c+75,"top u_IDU ras_rd_link", false,-1);
        tracep->declBit(c+76,"top u_IDU ras_rs1_link", false,-1);
        tracep->declQuad(c+77,"top u_IDU imm_pre", false,-1, 63,0);
        tracep->declBus(c+79,"top u_IDU rd_pre", false,-1, 4,0);
        tracep->declBus(c+80,"top u_IDU rs1_pre", false,-1, 4,0);
        tracep->declBus(c+81,"top u_IDU rs2_pre", false,-1, 4,0);
        tracep->declBit(c+307,"top u_EXU clk", false,-1);
        tracep->declBit(c+308,"top u_EXU rst_n", false,-1);
        tracep->declBus(c+12,"top u_EXU i_rd", false,-1, 4,0);
        tracep->declBus(c+13,"top u_EXU i_rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_EXU i_rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_EXU i_imm", false,-1, 63,0);
        tracep->declBus(c+17,"top u_EXU i_op", false,-1, 31,0);
        tracep->declBus(c+18,"top u_EXU i_inst_act", false,-1, 30,0);
        tracep->declBit(c+11,"top u_EXU IDU_vld", false,-1);
        tracep->declQuad(c+3,"top u_EXU IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_EXU IDU_inst", false,-1, 63,0);
        tracep->declBit(c+310,"top u_EXU ifetch_taken", false,-1);
        tracep->declQuad(c+311,"top u_EXU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+9,"top u_EXU ifetch_req", false,-1);
        tracep->declQuad(c+49,"top u_EXU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+39,"top u_EXU axi_AW_VALID", false,-1);
        tracep->declBit(c+40,"top u_EXU axi_AW_READY", false,-1);
        tracep->declQuad(c+55,"top u_EXU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+57,"top u_EXU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+41,"top u_EXU axi_W_VALID", false,-1);
        tracep->declBit(c+42,"top u_EXU axi_W_READY", false,-1);
        tracep->declBit(c+43,"top u_EXU axi_B_VALID", false,-1);
        tracep->declBit(c+44,"top u_EXU axi_B_READY", false,-1);
        tracep->declQuad(c+51,"top u_EXU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+45,"top u_EXU axi_AR_VALID", false,-1);
        tracep->declBit(c+46,"top u_EXU axi_AR_READY", false,-1);
        tracep->declQuad(c+53,"top u_EXU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+47,"top u_EXU axi_R_VALID", false,-1);
        tracep->declBit(c+48,"top u_EXU axi_R_READY", false,-1);
        tracep->declBus(c+82,"top u_EXU rd_r", false,-1, 4,0);
        tracep->declBus(c+83,"top u_EXU rs1_r", false,-1, 4,0);
        tracep->declBus(c+84,"top u_EXU rs2_r", false,-1, 4,0);
        tracep->declQuad(c+85,"top u_EXU imm_r", false,-1, 63,0);
        tracep->declBus(c+87,"top u_EXU op_r", false,-1, 31,0);
        tracep->declBus(c+88,"top u_EXU inst_act_r", false,-1, 30,0);
        tracep->declQuad(c+89,"top u_EXU pc_r", false,-1, 63,0);
        tracep->declQuad(c+91,"top u_EXU inst_r", false,-1, 63,0);
        tracep->declBus(c+93,"top u_EXU rd", false,-1, 4,0);
        tracep->declBus(c+94,"top u_EXU rs1", false,-1, 4,0);
        tracep->declBus(c+95,"top u_EXU rs2", false,-1, 4,0);
        tracep->declQuad(c+96,"top u_EXU imm", false,-1, 63,0);
        tracep->declBus(c+98,"top u_EXU op", false,-1, 31,0);
        tracep->declBus(c+99,"top u_EXU inst_act", false,-1, 30,0);
        tracep->declQuad(c+100,"top u_EXU pc", false,-1, 63,0);
        tracep->declQuad(c+102,"top u_EXU inst", false,-1, 63,0);
        tracep->declBit(c+104,"top u_EXU mul_valid", false,-1);
        tracep->declBit(c+105,"top u_EXU div_valid", false,-1);
        tracep->declBit(c+106,"top u_EXU mul_out_valid", false,-1);
        tracep->declQuad(c+107,"top u_EXU mul_result_h", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_EXU mul_result_l", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_EXU mul_result", false,-1, 63,0);
        tracep->declBit(c+111,"top u_EXU div_out_valid", false,-1);
        tracep->declQuad(c+112,"top u_EXU quotient", false,-1, 63,0);
        tracep->declQuad(c+114,"top u_EXU remainder", false,-1, 63,0);
        tracep->declQuad(c+116,"top u_EXU div_result", false,-1, 63,0);
        tracep->declBit(c+118,"top u_EXU alu_vld", false,-1);
        tracep->declQuad(c+119,"top u_EXU alu_data", false,-1, 63,0);
        tracep->declBit(c+121,"top u_EXU mini_alu_vld", false,-1);
        tracep->declQuad(c+122,"top u_EXU mini_alu_data", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+128,"top u_EXU dest", false,-1, 63,0);
        tracep->declBit(c+130,"top u_EXU wb_vld", false,-1);
        tracep->declBit(c+131,"top u_EXU bmu_vld", false,-1);
        tracep->declQuad(c+132,"top u_EXU ld_data_out", false,-1, 63,0);
        tracep->declBit(c+134,"top u_EXU lsu_data_vld", false,-1);
        tracep->declBit(c+135,"top u_EXU ld_req", false,-1);
        tracep->declBit(c+136,"top u_EXU st_req", false,-1);
        tracep->declBit(c+137,"top u_EXU sys_req", false,-1);
        tracep->declQuad(c+138,"top u_EXU csr_data_out", false,-1, 63,0);
        tracep->declBit(c+140,"top u_EXU csr_data_vld", false,-1);
        tracep->declQuad(c+141,"top u_EXU csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+143,"top u_EXU csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+144,"top u_EXU csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+146,"top u_EXU csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+147,"top u_EXU csrf_wen", false,-1);
        tracep->declBit(c+307,"top u_EXU u_mul clk", false,-1);
        tracep->declBit(c+308,"top u_EXU u_mul rst_n", false,-1);
        tracep->declBit(c+104,"top u_EXU u_mul mul_valid", false,-1);
        tracep->declQuad(c+124,"top u_EXU u_mul multiplicand", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU u_mul multiplier", false,-1, 63,0);
        tracep->declBit(c+106,"top u_EXU u_mul out_valid", false,-1);
        tracep->declQuad(c+107,"top u_EXU u_mul result_h", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_EXU u_mul result_l", false,-1, 63,0);
        tracep->declBus(c+148,"top u_EXU u_mul cnt", false,-1, 6,0);
        tracep->declQuad(c+149,"top u_EXU u_mul multiplicand_r", false,-1, 63,0);
        tracep->declQuad(c+151,"top u_EXU u_mul multiplier_r", false,-1, 63,0);
        tracep->declArray(c+153,"top u_EXU u_mul result_reg", false,-1, 127,0);
        tracep->declBit(c+307,"top u_EXU u_div clk", false,-1);
        tracep->declBit(c+308,"top u_EXU u_div rst_n", false,-1);
        tracep->declBit(c+157,"top u_EXU u_div sign_div", false,-1);
        tracep->declBit(c+158,"top u_EXU u_div divw", false,-1);
        tracep->declQuad(c+124,"top u_EXU u_div dividend", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU u_div divisor", false,-1, 63,0);
        tracep->declBit(c+105,"top u_EXU u_div div_valid", false,-1);
        tracep->declQuad(c+112,"top u_EXU u_div quotient", false,-1, 63,0);
        tracep->declQuad(c+114,"top u_EXU u_div remainder", false,-1, 63,0);
        tracep->declBit(c+111,"top u_EXU u_div out_valid", false,-1);
        tracep->declBus(c+159,"top u_EXU u_div count", false,-1, 5,0);
        tracep->declQuad(c+160,"top u_EXU u_div reg_q", false,-1, 63,0);
        tracep->declQuad(c+162,"top u_EXU u_div reg_r", false,-1, 63,0);
        tracep->declQuad(c+164,"top u_EXU u_div reg_b", false,-1, 63,0);
        tracep->declBit(c+166,"top u_EXU u_div r_sign", false,-1);
        tracep->declBit(c+167,"top u_EXU u_div dividend_sign", false,-1);
        tracep->declBit(c+168,"top u_EXU u_div divisor_sign", false,-1);
        tracep->declQuad(c+169,"top u_EXU u_div op_dividend", false,-1, 63,0);
        tracep->declQuad(c+171,"top u_EXU u_div op_divisor", false,-1, 63,0);
        tracep->declArray(c+173,"top u_EXU u_div sub_add", false,-1, 64,0);
        tracep->declQuad(c+176,"top u_EXU u_div reg_r2", false,-1, 63,0);
        tracep->declBit(c+178,"top u_EXU u_div busy", false,-1);
        tracep->declBit(c+179,"top u_EXU u_div busy_r", false,-1);
        tracep->declBus(c+323,"top u_EXU u_gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+324,"top u_EXU u_gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+307,"top u_EXU u_gpr clk", false,-1);
        tracep->declQuad(c+124,"top u_EXU u_gpr rdata1", false,-1, 63,0);
        tracep->declBus(c+94,"top u_EXU u_gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+126,"top u_EXU u_gpr rdata2", false,-1, 63,0);
        tracep->declBus(c+95,"top u_EXU u_gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+128,"top u_EXU u_gpr wdata", false,-1, 63,0);
        tracep->declBus(c+93,"top u_EXU u_gpr waddr", false,-1, 4,0);
        tracep->declBit(c+130,"top u_EXU u_gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+180+i*2,"top u_EXU u_gpr rf", true,(i+0), 63,0);}}
        tracep->declBit(c+307,"top u_EXU u_BMU clk", false,-1);
        tracep->declBit(c+308,"top u_EXU u_BMU rst_n", false,-1);
        tracep->declBit(c+11,"top u_EXU u_BMU IDU_vld", false,-1);
        tracep->declBit(c+244,"top u_EXU u_BMU jal", false,-1);
        tracep->declBit(c+245,"top u_EXU u_BMU jalr", false,-1);
        tracep->declBit(c+246,"top u_EXU u_BMU br", false,-1);
        tracep->declBit(c+247,"top u_EXU u_BMU syscall", false,-1);
        tracep->declBus(c+248,"top u_EXU u_BMU func3", false,-1, 2,0);
        tracep->declQuad(c+100,"top u_EXU u_BMU pc", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_EXU u_BMU src1", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU u_BMU src2", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_EXU u_BMU imm", false,-1, 63,0);
        tracep->declQuad(c+141,"top u_EXU u_BMU rCSR", false,-1, 63,0);
        tracep->declBit(c+310,"top u_EXU u_BMU ifetch_taken", false,-1);
        tracep->declQuad(c+311,"top u_EXU u_BMU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+131,"top u_EXU u_BMU bmu_vld", false,-1);
        tracep->declBit(c+249,"top u_EXU u_BMU ifetch_taken_pre", false,-1);
        tracep->declQuad(c+250,"top u_EXU u_BMU ifetch_taken_pc_pre", false,-1, 63,0);
        tracep->declQuad(c+252,"top u_EXU u_BMU add_src1", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_EXU u_BMU add_src2", false,-1, 63,0);
        tracep->declQuad(c+254,"top u_EXU u_BMU add_sum", false,-1, 63,0);
        tracep->declBit(c+307,"top u_EXU u_LSU clk", false,-1);
        tracep->declBit(c+308,"top u_EXU u_LSU rst_n", false,-1);
        tracep->declBit(c+135,"top u_EXU u_LSU ld_req", false,-1);
        tracep->declBit(c+136,"top u_EXU u_LSU st_req", false,-1);
        tracep->declBus(c+248,"top u_EXU u_LSU func3", false,-1, 2,0);
        tracep->declQuad(c+124,"top u_EXU u_LSU src1", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU u_LSU src2", false,-1, 63,0);
        tracep->declQuad(c+128,"top u_EXU u_LSU dest", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_EXU u_LSU imm", false,-1, 63,0);
        tracep->declQuad(c+132,"top u_EXU u_LSU ld_data_out", false,-1, 63,0);
        tracep->declBit(c+134,"top u_EXU u_LSU lsu_data_vld", false,-1);
        tracep->declQuad(c+49,"top u_EXU u_LSU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+39,"top u_EXU u_LSU axi_AW_VALID", false,-1);
        tracep->declBit(c+40,"top u_EXU u_LSU axi_AW_READY", false,-1);
        tracep->declQuad(c+55,"top u_EXU u_LSU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+57,"top u_EXU u_LSU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+41,"top u_EXU u_LSU axi_W_VALID", false,-1);
        tracep->declBit(c+42,"top u_EXU u_LSU axi_W_READY", false,-1);
        tracep->declBit(c+43,"top u_EXU u_LSU axi_B_VALID", false,-1);
        tracep->declBit(c+44,"top u_EXU u_LSU axi_B_READY", false,-1);
        tracep->declQuad(c+51,"top u_EXU u_LSU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+45,"top u_EXU u_LSU axi_AR_VALID", false,-1);
        tracep->declBit(c+46,"top u_EXU u_LSU axi_AR_READY", false,-1);
        tracep->declQuad(c+53,"top u_EXU u_LSU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+47,"top u_EXU u_LSU axi_R_VALID", false,-1);
        tracep->declBit(c+48,"top u_EXU u_LSU axi_R_READY", false,-1);
        tracep->declQuad(c+256,"top u_EXU u_LSU raddrM", false,-1, 63,0);
        tracep->declQuad(c+53,"top u_EXU u_LSU rdataM", false,-1, 63,0);
        tracep->declQuad(c+258,"top u_EXU u_LSU waddrM", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU u_LSU wdataM", false,-1, 63,0);
        tracep->declBus(c+260,"top u_EXU u_LSU wmaskM", false,-1, 7,0);
        tracep->declBit(c+136,"top u_EXU u_LSU wenM", false,-1);
        tracep->declBit(c+135,"top u_EXU u_LSU renM", false,-1);
        tracep->declBit(c+134,"top u_EXU u_LSU dataM_valid", false,-1);
        tracep->declBus(c+318,"top u_EXU u_LSU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+318,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+136,"top u_EXU u_LSU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+258,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+260,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+135,"top u_EXU u_LSU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+256,"top u_EXU u_LSU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+53,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+307,"top u_EXU u_LSU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+308,"top u_EXU u_LSU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+49,"top u_EXU u_LSU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+39,"top u_EXU u_LSU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+40,"top u_EXU u_LSU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+55,"top u_EXU u_LSU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+57,"top u_EXU u_LSU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+41,"top u_EXU u_LSU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+42,"top u_EXU u_LSU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+43,"top u_EXU u_LSU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+44,"top u_EXU u_LSU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+51,"top u_EXU u_LSU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+45,"top u_EXU u_LSU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+46,"top u_EXU u_LSU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+53,"top u_EXU u_LSU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+47,"top u_EXU u_LSU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+48,"top u_EXU u_LSU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+261,"top u_EXU u_LSU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+263,"top u_EXU u_LSU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+265,"top u_EXU u_LSU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+267,"top u_EXU u_LSU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+268,"top u_EXU u_LSU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+269,"top u_EXU u_LSU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+270,"top u_EXU u_LSU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+271,"top u_EXU u_LSU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBus(c+325,"top u_EXU u_sysc ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+324,"top u_EXU u_sysc DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+307,"top u_EXU u_sysc clk", false,-1);
        tracep->declBit(c+308,"top u_EXU u_sysc rst_n", false,-1);
        tracep->declBit(c+137,"top u_EXU u_sysc sys_req", false,-1);
        tracep->declBit(c+272,"top u_EXU u_sysc csr", false,-1);
        tracep->declBit(c+273,"top u_EXU u_sysc ecall", false,-1);
        tracep->declBit(c+274,"top u_EXU u_sysc ebreak", false,-1);
        tracep->declBit(c+275,"top u_EXU u_sysc mret", false,-1);
        tracep->declBus(c+248,"top u_EXU u_sysc func3", false,-1, 2,0);
        tracep->declQuad(c+100,"top u_EXU u_sysc pc", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_EXU u_sysc src1", false,-1, 63,0);
        tracep->declQuad(c+96,"top u_EXU u_sysc imm", false,-1, 63,0);
        tracep->declQuad(c+138,"top u_EXU u_sysc csr_data_out", false,-1, 63,0);
        tracep->declBit(c+140,"top u_EXU u_sysc csr_vld", false,-1);
        tracep->declQuad(c+141,"top u_EXU u_sysc csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+143,"top u_EXU u_sysc csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+144,"top u_EXU u_sysc csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+146,"top u_EXU u_sysc csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+147,"top u_EXU u_sysc csrf_wen", false,-1);
        tracep->declBus(c+326,"top u_EXU u_sysc addr_mcause", false,-1, 11,0);
        tracep->declBus(c+327,"top u_EXU u_sysc addr_mstatus", false,-1, 11,0);
        tracep->declBus(c+328,"top u_EXU u_sysc addr_mepc", false,-1, 11,0);
        tracep->declBus(c+329,"top u_EXU u_sysc addr_mtvec", false,-1, 11,0);
        tracep->declBus(c+276,"top u_EXU u_sysc raddr", false,-1, 11,0);
        tracep->declQuad(c+144,"top u_EXU u_sysc wdata", false,-1, 63,0);
        tracep->declBus(c+277,"top u_EXU u_sysc waddr", false,-1, 11,0);
        tracep->declBit(c+147,"top u_EXU u_sysc wen", false,-1);
        tracep->declBus(c+330,"top u_EXU u_sysc INIT", false,-1, 1,0);
        tracep->declBus(c+331,"top u_EXU u_sysc WR1", false,-1, 1,0);
        tracep->declBus(c+332,"top u_EXU u_sysc WR2", false,-1, 1,0);
        tracep->declBus(c+278,"top u_EXU u_sysc state", false,-1, 1,0);
        tracep->declBus(c+279,"top u_EXU u_sysc nstate", false,-1, 1,0);
        tracep->declBus(c+325,"top u_EXU u_csrf ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+324,"top u_EXU u_csrf DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+307,"top u_EXU u_csrf clk", false,-1);
        tracep->declQuad(c+141,"top u_EXU u_csrf rdata", false,-1, 63,0);
        tracep->declBus(c+143,"top u_EXU u_csrf raddr", false,-1, 1,0);
        tracep->declQuad(c+144,"top u_EXU u_csrf wdata", false,-1, 63,0);
        tracep->declBus(c+146,"top u_EXU u_csrf waddr", false,-1, 1,0);
        tracep->declBit(c+147,"top u_EXU u_csrf wen", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+280+i*2,"top u_EXU u_csrf csrf", true,(i+0), 63,0);}}
        tracep->declBus(c+318,"top u_AXI_arbiter_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+318,"top u_AXI_arbiter_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+58,"top u_AXI_arbiter_SRAM in_channel", false,-1);
        tracep->declBit(c+307,"top u_AXI_arbiter_SRAM CLK", false,-1);
        tracep->declBit(c+308,"top u_AXI_arbiter_SRAM RESETN", false,-1);
        tracep->declQuad(c+30,"top u_AXI_arbiter_SRAM axi1_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+20,"top u_AXI_arbiter_SRAM axi1_AW_VALID", false,-1);
        tracep->declBit(c+21,"top u_AXI_arbiter_SRAM axi1_AW_READY", false,-1);
        tracep->declQuad(c+36,"top u_AXI_arbiter_SRAM axi1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+38,"top u_AXI_arbiter_SRAM axi1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+22,"top u_AXI_arbiter_SRAM axi1_W_VALID", false,-1);
        tracep->declBit(c+23,"top u_AXI_arbiter_SRAM axi1_W_READY", false,-1);
        tracep->declBit(c+24,"top u_AXI_arbiter_SRAM axi1_B_VALID", false,-1);
        tracep->declBit(c+25,"top u_AXI_arbiter_SRAM axi1_B_READY", false,-1);
        tracep->declQuad(c+32,"top u_AXI_arbiter_SRAM axi1_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+26,"top u_AXI_arbiter_SRAM axi1_AR_VALID", false,-1);
        tracep->declBit(c+27,"top u_AXI_arbiter_SRAM axi1_AR_READY", false,-1);
        tracep->declQuad(c+34,"top u_AXI_arbiter_SRAM axi1_R_DATA", false,-1, 63,0);
        tracep->declBit(c+28,"top u_AXI_arbiter_SRAM axi1_R_VALID", false,-1);
        tracep->declBit(c+29,"top u_AXI_arbiter_SRAM axi1_R_READY", false,-1);
        tracep->declQuad(c+49,"top u_AXI_arbiter_SRAM axi2_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+39,"top u_AXI_arbiter_SRAM axi2_AW_VALID", false,-1);
        tracep->declBit(c+40,"top u_AXI_arbiter_SRAM axi2_AW_READY", false,-1);
        tracep->declQuad(c+55,"top u_AXI_arbiter_SRAM axi2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+57,"top u_AXI_arbiter_SRAM axi2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+41,"top u_AXI_arbiter_SRAM axi2_W_VALID", false,-1);
        tracep->declBit(c+42,"top u_AXI_arbiter_SRAM axi2_W_READY", false,-1);
        tracep->declBit(c+43,"top u_AXI_arbiter_SRAM axi2_B_VALID", false,-1);
        tracep->declBit(c+44,"top u_AXI_arbiter_SRAM axi2_B_READY", false,-1);
        tracep->declQuad(c+51,"top u_AXI_arbiter_SRAM axi2_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+45,"top u_AXI_arbiter_SRAM axi2_AR_VALID", false,-1);
        tracep->declBit(c+46,"top u_AXI_arbiter_SRAM axi2_AR_READY", false,-1);
        tracep->declQuad(c+53,"top u_AXI_arbiter_SRAM axi2_R_DATA", false,-1, 63,0);
        tracep->declBit(c+47,"top u_AXI_arbiter_SRAM axi2_R_VALID", false,-1);
        tracep->declBit(c+48,"top u_AXI_arbiter_SRAM axi2_R_READY", false,-1);
        tracep->declBit(c+58,"top u_AXI_arbiter_SRAM channel", false,-1);
        tracep->declBit(c+288,"top u_AXI_arbiter_SRAM AW_VALID", false,-1);
        tracep->declBit(c+289,"top u_AXI_arbiter_SRAM W_VALID", false,-1);
        tracep->declBit(c+290,"top u_AXI_arbiter_SRAM B_READY", false,-1);
        tracep->declBit(c+291,"top u_AXI_arbiter_SRAM AR_VALID", false,-1);
        tracep->declBit(c+292,"top u_AXI_arbiter_SRAM R_READY", false,-1);
        tracep->declBit(c+293,"top u_AXI_arbiter_SRAM B_VALID", false,-1);
        tracep->declQuad(c+294,"top u_AXI_arbiter_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+296,"top u_AXI_arbiter_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+298,"top u_AXI_arbiter_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+300,"top u_AXI_arbiter_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+301,"top u_AXI_arbiter_SRAM AR_READY", false,-1);
        tracep->declBit(c+302,"top u_AXI_arbiter_SRAM R_VALID", false,-1);
        tracep->declBit(c+303,"top u_AXI_arbiter_SRAM AW_READY", false,-1);
        tracep->declBit(c+304,"top u_AXI_arbiter_SRAM W_READY", false,-1);
        tracep->declQuad(c+305,"top u_AXI_arbiter_SRAM R_DATA", false,-1, 63,0);
        tracep->declBus(c+318,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+318,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+307,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM CLK", false,-1);
        tracep->declBit(c+308,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM RESETN", false,-1);
        tracep->declQuad(c+294,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+288,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_VALID", false,-1);
        tracep->declBit(c+303,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_READY", false,-1);
        tracep->declQuad(c+298,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+300,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+289,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_VALID", false,-1);
        tracep->declBit(c+304,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_READY", false,-1);
        tracep->declBit(c+293,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_VALID", false,-1);
        tracep->declBit(c+290,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_READY", false,-1);
        tracep->declQuad(c+296,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+291,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_VALID", false,-1);
        tracep->declBit(c+301,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_READY", false,-1);
        tracep->declQuad(c+305,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+302,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_VALID", false,-1);
        tracep->declBit(c+292,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_READY", false,-1);
        tracep->declBus(c+333,"$unit inst_ecall", false,-1, 11,0);
        tracep->declBus(c+334,"$unit inst_mret", false,-1, 11,0);
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__IFU_pc),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__IDU_pc),64);
        tracep->fullQData(oldp+5,((0xffffffffULL & vlSelf->top__DOT__axis1_R_DATA)),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__IDU_inst),64);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__ifetch_req));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__u_IFU__DOT__rask));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__IDU_vld));
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__rd),5);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__rs2),5);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__imm),64);
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__op),32);
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__inst_act),31);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__inst_type),6);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__axis1_AW_READY));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__axis1_W_READY));
        tracep->fullBit(oldp+24,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__axis1_B_READY));
        tracep->fullBit(oldp+26,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                  | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
        tracep->fullBit(oldp+27,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__axis1_R_VALID));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__axis1_R_READY));
        tracep->fullQData(oldp+30,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+32,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                     ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                     : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__axis1_R_DATA),64);
        tracep->fullQData(oldp+36,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                     : 0ULL)),64);
        tracep->fullCData(oldp+38,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                     : 0U)),8);
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__axis2_AW_VALID));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__axis2_AW_READY));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__axis2_W_VALID));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__axis2_W_READY));
        tracep->fullBit(oldp+43,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__axis2_B_READY));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__axis2_AR_VALID));
        tracep->fullBit(oldp+46,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__axis2_R_VALID));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__axis2_R_READY));
        tracep->fullQData(oldp+49,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+51,(((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                     : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
        tracep->fullQData(oldp+53,(((IData)(vlSelf->top__DOT__in_channel)
                                     ? ((IData)(vlSelf->top__DOT__in_channel)
                                         ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                         : 0ULL) : 0ULL)),64);
        tracep->fullQData(oldp+55,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__src2
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                         : 0ULL))),64);
        tracep->fullCData(oldp+57,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__in_channel));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__itrace_en));
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__u_IFU__DOT__ifetch_pc),64);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__u_IFU__DOT__rreq));
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullIData(oldp+73,(vlSelf->top__DOT__u_IDU__DOT__inst_act_pre),31);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre),6);
        tracep->fullBit(oldp+75,(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link));
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link));
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__imm_pre),64);
        tracep->fullCData(oldp+79,((0x1fU & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 7U))))),5);
        tracep->fullCData(oldp+80,((0x1fU & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 0xfU))))),5);
        tracep->fullCData(oldp+81,((0x1fU & (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 0x14U))))),5);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
        tracep->fullIData(oldp+87,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
        tracep->fullIData(oldp+88,(vlSelf->top__DOT__u_EXU__DOT__inst_act_r),31);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
        tracep->fullCData(oldp+93,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
        tracep->fullCData(oldp+94,(vlSelf->top__DOT__u_EXU__DOT__rs1),5);
        tracep->fullCData(oldp+95,(vlSelf->top__DOT__u_EXU__DOT__rs2),5);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
        tracep->fullIData(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__op),32);
        tracep->fullIData(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__inst_act),31);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__mul_valid));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__u_EXU__DOT__div_valid));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid));
        tracep->fullQData(oldp+107,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U])))),64);
        tracep->fullQData(oldp+109,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))),64);
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__u_EXU__DOT__div_out_valid));
        tracep->fullQData(oldp+112,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                      ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q)),64);
        tracep->fullQData(oldp+114,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2)),64);
        tracep->fullQData(oldp+116,(((0x1000U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                      ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2)
                                      : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                          ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))),64);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__u_EXU__DOT__alu_vld));
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__alu_data),64);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__u_EXU__DOT__mini_alu_vld));
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__mini_alu_data),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__u_EXU__DOT__dest),64);
        tracep->fullBit(oldp+130,(((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                    >> 9U) & (((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_vld) 
                                               | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid)) 
                                              | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld)))));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__u_EXU__DOT__bmu_vld));
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__u_EXU__DOT__ld_data_out),64);
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__u_EXU__DOT__st_req));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__u_EXU__DOT__csr_data_out),64);
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
        tracep->fullQData(oldp+144,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                      ? 0xa00001800ULL
                                      : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                          ? ((0x40U 
                                              & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                              ? vlSelf->top__DOT__u_EXU__DOT__pc
                                              : ((0x100U 
                                                  & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                                  ? 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 1U)))
                                                   ? vlSelf->top__DOT__u_EXU__DOT__src1
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                        >> 1U)))
                                                    ? 
                                                   (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    | vlSelf->top__DOT__u_EXU__DOT__csrf_rdata)
                                                    : 0ULL))
                                                  : 0ULL))
                                          : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                              ? 0xbULL
                                              : 0ULL)))),64);
        tracep->fullCData(oldp+146,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
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
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
        tracep->fullCData(oldp+148,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt),7);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r),64);
        tracep->fullWData(oldp+153,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg),128);
        tracep->fullBit(oldp+157,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 0xbU))));
        tracep->fullBit(oldp+158,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 0xaU))));
        tracep->fullCData(oldp+159,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count),6);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b),64);
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign));
        tracep->fullBit(oldp+168,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign));
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor),64);
        tracep->fullWData(oldp+173,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add),65);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2),64);
        tracep->fullBit(oldp+178,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
        tracep->fullBit(oldp+244,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 0x16U))));
        tracep->fullBit(oldp+245,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 0x1dU))));
        tracep->fullBit(oldp+246,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 0x13U))));
        tracep->fullBit(oldp+247,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 7U))));
        tracep->fullCData(oldp+248,((7U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                           >> 1U))),3);
        tracep->fullBit(oldp+249,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pre));
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pc_pre),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_src1),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_sum),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
        tracep->fullCData(oldp+260,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+263,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+265,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+267,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullBit(oldp+272,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 8U))));
        tracep->fullBit(oldp+273,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 6U))));
        tracep->fullBit(oldp+274,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 4U))));
        tracep->fullBit(oldp+275,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 5U))));
        tracep->fullSData(oldp+276,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
        tracep->fullSData(oldp+277,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
        tracep->fullCData(oldp+278,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
        tracep->fullCData(oldp+279,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                      ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                               ? (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                      >> 6U))
                                                   ? 3U
                                                   : 2U)
                                               : 2U))),2);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
        tracep->fullBit(oldp+290,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
        tracep->fullBit(oldp+291,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
        tracep->fullQData(oldp+294,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                       ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                       : 0ULL))),64);
        tracep->fullQData(oldp+296,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                              ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                              : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                       ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                       : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg))),64);
        tracep->fullQData(oldp+298,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? vlSelf->top__DOT__u_EXU__DOT__src2
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                       ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                       : 0ULL))),64);
        tracep->fullCData(oldp+300,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
                                               ? ((IData)(vlSelf->top__DOT__in_channel)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                     : 0U))
                                                   : 0U)
                                               : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                   ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                   : 0U)))),8);
        tracep->fullBit(oldp+301,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        tracep->fullBit(oldp+307,(vlSelf->clk));
        tracep->fullBit(oldp+308,(vlSelf->rst_n));
        tracep->fullCData(oldp+309,(vlSelf->jmp_type),8);
        tracep->fullBit(oldp+310,(vlSelf->ifetch_taken));
        tracep->fullQData(oldp+311,(vlSelf->ifetch_taken_pc),64);
        tracep->fullBit(oldp+313,(vlSelf->mainUpdate_valid));
        tracep->fullQData(oldp+314,(vlSelf->inst),64);
        tracep->fullQData(oldp+316,(vlSelf->pc),64);
        tracep->fullIData(oldp+318,(0x40U),32);
        tracep->fullBit(oldp+319,(0U));
        tracep->fullQData(oldp+320,(0ULL),64);
        tracep->fullCData(oldp+322,(0U),8);
        tracep->fullIData(oldp+323,(5U),32);
        tracep->fullIData(oldp+324,(0x40U),32);
        tracep->fullIData(oldp+325,(2U),32);
        tracep->fullSData(oldp+326,(0x342U),12);
        tracep->fullSData(oldp+327,(0x300U),12);
        tracep->fullSData(oldp+328,(0x341U),12);
        tracep->fullSData(oldp+329,(0x305U),12);
        tracep->fullCData(oldp+330,(0U),2);
        tracep->fullCData(oldp+331,(2U),2);
        tracep->fullCData(oldp+332,(3U),2);
        tracep->fullSData(oldp+333,(1U),12);
        tracep->fullSData(oldp+334,(2U),12);
    }
}
