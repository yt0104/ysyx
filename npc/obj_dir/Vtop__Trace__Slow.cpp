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
        tracep->declBit(c+281,"clk", false,-1);
        tracep->declBit(c+282,"rst_n", false,-1);
        tracep->declQuad(c+283,"inst", false,-1, 63,0);
        tracep->declQuad(c+285,"pc", false,-1, 63,0);
        tracep->declBit(c+287,"mainUpdate_valid", false,-1);
        tracep->declBit(c+281,"top clk", false,-1);
        tracep->declBit(c+282,"top rst_n", false,-1);
        tracep->declQuad(c+283,"top inst", false,-1, 63,0);
        tracep->declQuad(c+285,"top pc", false,-1, 63,0);
        tracep->declBit(c+287,"top mainUpdate_valid", false,-1);
        tracep->declQuad(c+1,"top IDU_npc", false,-1, 63,0);
        tracep->declQuad(c+3,"top EXU_npc", false,-1, 63,0);
        tracep->declQuad(c+5,"top IFU_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+11,"top IDU_inst", false,-1, 63,0);
        tracep->declBit(c+13,"top IFU_valid", false,-1);
        tracep->declBit(c+14,"top IFU_ready", false,-1);
        tracep->declBit(c+15,"top IDU_valid", false,-1);
        tracep->declBit(c+16,"top IDU_ready", false,-1);
        tracep->declBit(c+17,"top EXU_valid", false,-1);
        tracep->declBit(c+18,"top EXU_ready", false,-1);
        tracep->declBus(c+19,"top rd", false,-1, 4,0);
        tracep->declBus(c+20,"top rs1", false,-1, 4,0);
        tracep->declBus(c+21,"top rs2", false,-1, 4,0);
        tracep->declQuad(c+22,"top imm", false,-1, 63,0);
        tracep->declBus(c+24,"top op", false,-1, 31,0);
        tracep->declBit(c+276,"top EXU_npc_valid", false,-1);
        tracep->declBit(c+277,"top IDU_npc_valid", false,-1);
        tracep->declBit(c+25,"top npc_channel", false,-1);
        tracep->declQuad(c+26,"top npc", false,-1, 63,0);
        tracep->declBit(c+28,"top axis1_AW_VALID", false,-1);
        tracep->declBit(c+29,"top axis1_AW_READY", false,-1);
        tracep->declBit(c+30,"top axis1_W_VALID", false,-1);
        tracep->declBit(c+31,"top axis1_W_READY", false,-1);
        tracep->declBit(c+32,"top axis1_B_VALID", false,-1);
        tracep->declBit(c+33,"top axis1_B_READY", false,-1);
        tracep->declBit(c+34,"top axis1_AR_VALID", false,-1);
        tracep->declBit(c+35,"top axis1_AR_READY", false,-1);
        tracep->declBit(c+36,"top axis1_R_VALID", false,-1);
        tracep->declBit(c+37,"top axis1_R_READY", false,-1);
        tracep->declQuad(c+38,"top axis1_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+40,"top axis1_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+42,"top axis1_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+44,"top axis1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+46,"top axis1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+47,"top axis2_AW_VALID", false,-1);
        tracep->declBit(c+48,"top axis2_AW_READY", false,-1);
        tracep->declBit(c+49,"top axis2_W_VALID", false,-1);
        tracep->declBit(c+50,"top axis2_W_READY", false,-1);
        tracep->declBit(c+51,"top axis2_B_VALID", false,-1);
        tracep->declBit(c+52,"top axis2_B_READY", false,-1);
        tracep->declBit(c+53,"top axis2_AR_VALID", false,-1);
        tracep->declBit(c+54,"top axis2_AR_READY", false,-1);
        tracep->declBit(c+55,"top axis2_R_VALID", false,-1);
        tracep->declBit(c+56,"top axis2_R_READY", false,-1);
        tracep->declQuad(c+57,"top axis2_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+59,"top axis2_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+61,"top axis2_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+63,"top axis2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+65,"top axis2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+66,"top in_channel", false,-1);
        tracep->declBit(c+67,"top itrace_en", false,-1);
        tracep->declBit(c+68,"top main_valid", false,-1);
        tracep->declQuad(c+69,"top main_pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top main_inst", false,-1, 63,0);
        tracep->declBit(c+281,"top u_IFU clk", false,-1);
        tracep->declBit(c+282,"top u_IFU rst_n", false,-1);
        tracep->declQuad(c+5,"top u_IFU pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_IFU inst", false,-1, 63,0);
        tracep->declBit(c+15,"top u_IFU IDU_valid", false,-1);
        tracep->declBit(c+16,"top u_IFU IDU_ready", false,-1);
        tracep->declQuad(c+26,"top u_IFU npc", false,-1, 63,0);
        tracep->declBit(c+13,"top u_IFU IFU_valid", false,-1);
        tracep->declBit(c+14,"top u_IFU IFU_ready", false,-1);
        tracep->declQuad(c+38,"top u_IFU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+28,"top u_IFU axi_AW_VALID", false,-1);
        tracep->declBit(c+29,"top u_IFU axi_AW_READY", false,-1);
        tracep->declQuad(c+44,"top u_IFU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+46,"top u_IFU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+30,"top u_IFU axi_W_VALID", false,-1);
        tracep->declBit(c+31,"top u_IFU axi_W_READY", false,-1);
        tracep->declBit(c+32,"top u_IFU axi_B_VALID", false,-1);
        tracep->declBit(c+33,"top u_IFU axi_B_READY", false,-1);
        tracep->declQuad(c+40,"top u_IFU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+34,"top u_IFU axi_AR_VALID", false,-1);
        tracep->declBit(c+35,"top u_IFU axi_AR_READY", false,-1);
        tracep->declQuad(c+42,"top u_IFU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+36,"top u_IFU axi_R_VALID", false,-1);
        tracep->declBit(c+37,"top u_IFU axi_R_READY", false,-1);
        tracep->declQuad(c+73,"top u_IFU inst64", false,-1, 63,0);
        tracep->declBus(c+75,"top u_IFU pre_cnt", false,-1, 5,0);
        tracep->declBit(c+76,"top u_IFU rreq", false,-1);
        tracep->declBus(c+288,"top u_IFU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+288,"top u_IFU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+289,"top u_IFU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+290,"top u_IFU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+290,"top u_IFU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+292,"top u_IFU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+76,"top u_IFU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+5,"top u_IFU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_IFU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+281,"top u_IFU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+282,"top u_IFU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+38,"top u_IFU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+28,"top u_IFU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+29,"top u_IFU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+44,"top u_IFU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+46,"top u_IFU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+30,"top u_IFU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+31,"top u_IFU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+32,"top u_IFU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+33,"top u_IFU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+40,"top u_IFU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+34,"top u_IFU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+35,"top u_IFU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+42,"top u_IFU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+36,"top u_IFU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+37,"top u_IFU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+77,"top u_IFU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+79,"top u_IFU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+81,"top u_IFU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+83,"top u_IFU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+28,"top u_IFU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+30,"top u_IFU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+84,"top u_IFU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+85,"top u_IFU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBit(c+281,"top u_IDU clk", false,-1);
        tracep->declBit(c+282,"top u_IDU rst_n", false,-1);
        tracep->declBit(c+15,"top u_IDU IDU_valid", false,-1);
        tracep->declBit(c+16,"top u_IDU IDU_ready", false,-1);
        tracep->declQuad(c+9,"top u_IDU i_inst", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_IDU i_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_IDU pc", false,-1, 63,0);
        tracep->declQuad(c+11,"top u_IDU inst", false,-1, 63,0);
        tracep->declBus(c+19,"top u_IDU rd", false,-1, 4,0);
        tracep->declBus(c+20,"top u_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+21,"top u_IDU rs2", false,-1, 4,0);
        tracep->declQuad(c+22,"top u_IDU imm", false,-1, 63,0);
        tracep->declBus(c+24,"top u_IDU op", false,-1, 31,0);
        tracep->declBit(c+277,"top u_IDU npc_valid", false,-1);
        tracep->declQuad(c+1,"top u_IDU npc", false,-1, 63,0);
        tracep->declBit(c+18,"top u_IDU EXU_ready", false,-1);
        tracep->declBit(c+17,"top u_IDU EXU_valid", false,-1);
        tracep->declBit(c+281,"top u_EXU clk", false,-1);
        tracep->declBit(c+282,"top u_EXU rst_n", false,-1);
        tracep->declBit(c+17,"top u_EXU EXU_valid", false,-1);
        tracep->declBit(c+18,"top u_EXU EXU_ready", false,-1);
        tracep->declBus(c+19,"top u_EXU i_rd", false,-1, 4,0);
        tracep->declBus(c+20,"top u_EXU i_rs1", false,-1, 4,0);
        tracep->declBus(c+21,"top u_EXU i_rs2", false,-1, 4,0);
        tracep->declQuad(c+22,"top u_EXU i_imm", false,-1, 63,0);
        tracep->declBus(c+24,"top u_EXU i_op", false,-1, 31,0);
        tracep->declQuad(c+7,"top u_EXU i_pc", false,-1, 63,0);
        tracep->declQuad(c+11,"top u_EXU i_inst", false,-1, 63,0);
        tracep->declQuad(c+3,"top u_EXU npc", false,-1, 63,0);
        tracep->declBit(c+276,"top u_EXU npc_valid", false,-1);
        tracep->declBit(c+68,"top u_EXU main_valid", false,-1);
        tracep->declQuad(c+69,"top u_EXU main_pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top u_EXU main_inst", false,-1, 63,0);
        tracep->declQuad(c+57,"top u_EXU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+47,"top u_EXU axi_AW_VALID", false,-1);
        tracep->declBit(c+48,"top u_EXU axi_AW_READY", false,-1);
        tracep->declQuad(c+63,"top u_EXU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+65,"top u_EXU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+49,"top u_EXU axi_W_VALID", false,-1);
        tracep->declBit(c+50,"top u_EXU axi_W_READY", false,-1);
        tracep->declBit(c+51,"top u_EXU axi_B_VALID", false,-1);
        tracep->declBit(c+52,"top u_EXU axi_B_READY", false,-1);
        tracep->declQuad(c+59,"top u_EXU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+53,"top u_EXU axi_AR_VALID", false,-1);
        tracep->declBit(c+54,"top u_EXU axi_AR_READY", false,-1);
        tracep->declQuad(c+61,"top u_EXU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+55,"top u_EXU axi_R_VALID", false,-1);
        tracep->declBit(c+56,"top u_EXU axi_R_READY", false,-1);
        tracep->declBus(c+86,"top u_EXU rd_r", false,-1, 4,0);
        tracep->declBus(c+87,"top u_EXU rs1_r", false,-1, 4,0);
        tracep->declBus(c+88,"top u_EXU rs2_r", false,-1, 4,0);
        tracep->declQuad(c+89,"top u_EXU imm_r", false,-1, 63,0);
        tracep->declBus(c+91,"top u_EXU op_r", false,-1, 31,0);
        tracep->declQuad(c+92,"top u_EXU pc_r", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_EXU inst_r", false,-1, 63,0);
        tracep->declBus(c+96,"top u_EXU rd", false,-1, 4,0);
        tracep->declBus(c+97,"top u_EXU rs1", false,-1, 4,0);
        tracep->declBus(c+98,"top u_EXU rs2", false,-1, 4,0);
        tracep->declQuad(c+99,"top u_EXU imm", false,-1, 63,0);
        tracep->declBus(c+101,"top u_EXU op", false,-1, 31,0);
        tracep->declQuad(c+69,"top u_EXU pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top u_EXU inst", false,-1, 63,0);
        tracep->declBit(c+278,"top u_EXU exe_valid", false,-1);
        tracep->declBit(c+102,"top u_EXU exe_finish_valid", false,-1);
        tracep->declQuad(c+103,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+107,"top u_EXU dest", false,-1, 63,0);
        tracep->declBit(c+109,"top u_EXU wenR", false,-1);
        tracep->declQuad(c+110,"top u_EXU rCSR", false,-1, 63,0);
        tracep->declQuad(c+112,"top u_EXU wCSR1", false,-1, 63,0);
        tracep->declQuad(c+114,"top u_EXU wCSR2", false,-1, 63,0);
        tracep->declBus(c+116,"top u_EXU instCSR", false,-1, 11,0);
        tracep->declBus(c+117,"top u_EXU addrCSR", false,-1, 11,0);
        tracep->declBit(c+118,"top u_EXU wenC", false,-1);
        tracep->declQuad(c+119,"top u_EXU rdata", false,-1, 63,0);
        tracep->declQuad(c+121,"top u_EXU raddr", false,-1, 63,0);
        tracep->declQuad(c+123,"top u_EXU waddr", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_EXU wdata", false,-1, 63,0);
        tracep->declBus(c+127,"top u_EXU wmask", false,-1, 7,0);
        tracep->declBit(c+128,"top u_EXU wenM", false,-1);
        tracep->declBit(c+129,"top u_EXU renM", false,-1);
        tracep->declQuad(c+130,"top u_EXU temp", false,-1, 63,0);
        tracep->declBit(c+279,"top u_EXU mul_valid", false,-1);
        tracep->declBit(c+280,"top u_EXU div_valid", false,-1);
        tracep->declBit(c+132,"top u_EXU mul_out_valid", false,-1);
        tracep->declQuad(c+133,"top u_EXU mul_result_h", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_EXU mul_result_l", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_EXU mul_result", false,-1, 63,0);
        tracep->declBit(c+137,"top u_EXU div_out_valid", false,-1);
        tracep->declQuad(c+138,"top u_EXU quotient", false,-1, 63,0);
        tracep->declQuad(c+140,"top u_EXU remainder", false,-1, 63,0);
        tracep->declBus(c+293,"top u_EXU u_gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+294,"top u_EXU u_gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+281,"top u_EXU u_gpr clk", false,-1);
        tracep->declQuad(c+103,"top u_EXU u_gpr rdata1", false,-1, 63,0);
        tracep->declBus(c+97,"top u_EXU u_gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+105,"top u_EXU u_gpr rdata2", false,-1, 63,0);
        tracep->declBus(c+98,"top u_EXU u_gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+107,"top u_EXU u_gpr wdata", false,-1, 63,0);
        tracep->declBus(c+96,"top u_EXU u_gpr waddr", false,-1, 4,0);
        tracep->declBit(c+109,"top u_EXU u_gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+142+i*2,"top u_EXU u_gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+295,"top u_EXU u_csr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+294,"top u_EXU u_csr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+281,"top u_EXU u_csr clk", false,-1);
        tracep->declBus(c+117,"top u_EXU u_csr op_addr", false,-1, 11,0);
        tracep->declBus(c+116,"top u_EXU u_csr op_inst", false,-1, 11,0);
        tracep->declQuad(c+110,"top u_EXU u_csr rdata", false,-1, 63,0);
        tracep->declQuad(c+112,"top u_EXU u_csr wdata1", false,-1, 63,0);
        tracep->declQuad(c+114,"top u_EXU u_csr wdata2", false,-1, 63,0);
        tracep->declBit(c+118,"top u_EXU u_csr wen", false,-1);
        tracep->declQuad(c+206,"top u_EXU u_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+208,"top u_EXU u_csr mstatus", false,-1, 63,0);
        tracep->declQuad(c+210,"top u_EXU u_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+212,"top u_EXU u_csr mtvec", false,-1, 63,0);
        tracep->declBus(c+296,"top u_EXU u_csr addr_mcause", false,-1, 11,0);
        tracep->declBus(c+297,"top u_EXU u_csr addr_mstatus", false,-1, 11,0);
        tracep->declBus(c+298,"top u_EXU u_csr addr_mepc", false,-1, 11,0);
        tracep->declBus(c+299,"top u_EXU u_csr addr_mtvec", false,-1, 11,0);
        tracep->declBus(c+288,"top u_EXU u0_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+288,"top u_EXU u0_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+128,"top u_EXU u0_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+123,"top u_EXU u0_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_EXU u0_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+127,"top u_EXU u0_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+129,"top u_EXU u0_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+121,"top u_EXU u0_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+119,"top u_EXU u0_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+281,"top u_EXU u0_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+282,"top u_EXU u0_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+57,"top u_EXU u0_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+47,"top u_EXU u0_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+48,"top u_EXU u0_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+63,"top u_EXU u0_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+65,"top u_EXU u0_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+49,"top u_EXU u0_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+50,"top u_EXU u0_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+51,"top u_EXU u0_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+52,"top u_EXU u0_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+59,"top u_EXU u0_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+53,"top u_EXU u0_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+54,"top u_EXU u0_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+61,"top u_EXU u0_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+55,"top u_EXU u0_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+56,"top u_EXU u0_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+214,"top u_EXU u0_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+216,"top u_EXU u0_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+218,"top u_EXU u0_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+220,"top u_EXU u0_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+221,"top u_EXU u0_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+222,"top u_EXU u0_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+223,"top u_EXU u0_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+224,"top u_EXU u0_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBit(c+281,"top u_EXU u_mul clk", false,-1);
        tracep->declBit(c+282,"top u_EXU u_mul rst_n", false,-1);
        tracep->declBit(c+279,"top u_EXU u_mul mul_valid", false,-1);
        tracep->declQuad(c+103,"top u_EXU u_mul multiplicand", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_EXU u_mul multiplier", false,-1, 63,0);
        tracep->declBit(c+132,"top u_EXU u_mul out_valid", false,-1);
        tracep->declQuad(c+133,"top u_EXU u_mul result_h", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_EXU u_mul result_l", false,-1, 63,0);
        tracep->declBus(c+225,"top u_EXU u_mul cnt", false,-1, 6,0);
        tracep->declQuad(c+226,"top u_EXU u_mul multiplicand_r", false,-1, 63,0);
        tracep->declQuad(c+228,"top u_EXU u_mul multiplier_r", false,-1, 63,0);
        tracep->declArray(c+230,"top u_EXU u_mul result_reg", false,-1, 127,0);
        tracep->declBit(c+281,"top u_EXU u_div clk", false,-1);
        tracep->declBit(c+282,"top u_EXU u_div rst_n", false,-1);
        tracep->declBit(c+234,"top u_EXU u_div sign_div", false,-1);
        tracep->declBit(c+235,"top u_EXU u_div divw", false,-1);
        tracep->declQuad(c+103,"top u_EXU u_div dividend", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_EXU u_div divisor", false,-1, 63,0);
        tracep->declBit(c+280,"top u_EXU u_div div_valid", false,-1);
        tracep->declQuad(c+138,"top u_EXU u_div quotient", false,-1, 63,0);
        tracep->declQuad(c+140,"top u_EXU u_div remainder", false,-1, 63,0);
        tracep->declBit(c+137,"top u_EXU u_div out_valid", false,-1);
        tracep->declBus(c+236,"top u_EXU u_div count", false,-1, 5,0);
        tracep->declQuad(c+237,"top u_EXU u_div reg_q", false,-1, 63,0);
        tracep->declQuad(c+239,"top u_EXU u_div reg_r", false,-1, 63,0);
        tracep->declQuad(c+241,"top u_EXU u_div reg_b", false,-1, 63,0);
        tracep->declBit(c+243,"top u_EXU u_div r_sign", false,-1);
        tracep->declBit(c+244,"top u_EXU u_div dividend_sign", false,-1);
        tracep->declBit(c+245,"top u_EXU u_div divisor_sign", false,-1);
        tracep->declQuad(c+246,"top u_EXU u_div op_dividend", false,-1, 63,0);
        tracep->declQuad(c+248,"top u_EXU u_div op_divisor", false,-1, 63,0);
        tracep->declArray(c+250,"top u_EXU u_div sub_add", false,-1, 64,0);
        tracep->declQuad(c+253,"top u_EXU u_div reg_r2", false,-1, 63,0);
        tracep->declBit(c+255,"top u_EXU u_div busy", false,-1);
        tracep->declBit(c+256,"top u_EXU u_div busy_r", false,-1);
        tracep->declBus(c+288,"top u_AXI_arbiter_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+288,"top u_AXI_arbiter_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+66,"top u_AXI_arbiter_SRAM in_channel", false,-1);
        tracep->declBit(c+281,"top u_AXI_arbiter_SRAM CLK", false,-1);
        tracep->declBit(c+282,"top u_AXI_arbiter_SRAM RESETN", false,-1);
        tracep->declQuad(c+38,"top u_AXI_arbiter_SRAM axi1_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+28,"top u_AXI_arbiter_SRAM axi1_AW_VALID", false,-1);
        tracep->declBit(c+29,"top u_AXI_arbiter_SRAM axi1_AW_READY", false,-1);
        tracep->declQuad(c+44,"top u_AXI_arbiter_SRAM axi1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+46,"top u_AXI_arbiter_SRAM axi1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+30,"top u_AXI_arbiter_SRAM axi1_W_VALID", false,-1);
        tracep->declBit(c+31,"top u_AXI_arbiter_SRAM axi1_W_READY", false,-1);
        tracep->declBit(c+32,"top u_AXI_arbiter_SRAM axi1_B_VALID", false,-1);
        tracep->declBit(c+33,"top u_AXI_arbiter_SRAM axi1_B_READY", false,-1);
        tracep->declQuad(c+40,"top u_AXI_arbiter_SRAM axi1_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+34,"top u_AXI_arbiter_SRAM axi1_AR_VALID", false,-1);
        tracep->declBit(c+35,"top u_AXI_arbiter_SRAM axi1_AR_READY", false,-1);
        tracep->declQuad(c+42,"top u_AXI_arbiter_SRAM axi1_R_DATA", false,-1, 63,0);
        tracep->declBit(c+36,"top u_AXI_arbiter_SRAM axi1_R_VALID", false,-1);
        tracep->declBit(c+37,"top u_AXI_arbiter_SRAM axi1_R_READY", false,-1);
        tracep->declQuad(c+57,"top u_AXI_arbiter_SRAM axi2_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+47,"top u_AXI_arbiter_SRAM axi2_AW_VALID", false,-1);
        tracep->declBit(c+48,"top u_AXI_arbiter_SRAM axi2_AW_READY", false,-1);
        tracep->declQuad(c+63,"top u_AXI_arbiter_SRAM axi2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+65,"top u_AXI_arbiter_SRAM axi2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+49,"top u_AXI_arbiter_SRAM axi2_W_VALID", false,-1);
        tracep->declBit(c+50,"top u_AXI_arbiter_SRAM axi2_W_READY", false,-1);
        tracep->declBit(c+51,"top u_AXI_arbiter_SRAM axi2_B_VALID", false,-1);
        tracep->declBit(c+52,"top u_AXI_arbiter_SRAM axi2_B_READY", false,-1);
        tracep->declQuad(c+59,"top u_AXI_arbiter_SRAM axi2_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+53,"top u_AXI_arbiter_SRAM axi2_AR_VALID", false,-1);
        tracep->declBit(c+54,"top u_AXI_arbiter_SRAM axi2_AR_READY", false,-1);
        tracep->declQuad(c+61,"top u_AXI_arbiter_SRAM axi2_R_DATA", false,-1, 63,0);
        tracep->declBit(c+55,"top u_AXI_arbiter_SRAM axi2_R_VALID", false,-1);
        tracep->declBit(c+56,"top u_AXI_arbiter_SRAM axi2_R_READY", false,-1);
        tracep->declBit(c+66,"top u_AXI_arbiter_SRAM channel", false,-1);
        tracep->declBit(c+257,"top u_AXI_arbiter_SRAM AW_VALID", false,-1);
        tracep->declBit(c+258,"top u_AXI_arbiter_SRAM W_VALID", false,-1);
        tracep->declBit(c+259,"top u_AXI_arbiter_SRAM B_READY", false,-1);
        tracep->declBit(c+260,"top u_AXI_arbiter_SRAM AR_VALID", false,-1);
        tracep->declBit(c+261,"top u_AXI_arbiter_SRAM R_READY", false,-1);
        tracep->declBit(c+262,"top u_AXI_arbiter_SRAM B_VALID", false,-1);
        tracep->declQuad(c+263,"top u_AXI_arbiter_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+265,"top u_AXI_arbiter_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+267,"top u_AXI_arbiter_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+269,"top u_AXI_arbiter_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+270,"top u_AXI_arbiter_SRAM AR_READY", false,-1);
        tracep->declBit(c+271,"top u_AXI_arbiter_SRAM R_VALID", false,-1);
        tracep->declBit(c+272,"top u_AXI_arbiter_SRAM AW_READY", false,-1);
        tracep->declBit(c+273,"top u_AXI_arbiter_SRAM W_READY", false,-1);
        tracep->declQuad(c+274,"top u_AXI_arbiter_SRAM R_DATA", false,-1, 63,0);
        tracep->declBus(c+288,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+288,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+281,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM CLK", false,-1);
        tracep->declBit(c+282,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM RESETN", false,-1);
        tracep->declQuad(c+263,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+257,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_VALID", false,-1);
        tracep->declBit(c+272,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_READY", false,-1);
        tracep->declQuad(c+267,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+269,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+258,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_VALID", false,-1);
        tracep->declBit(c+273,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_READY", false,-1);
        tracep->declBit(c+262,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_VALID", false,-1);
        tracep->declBit(c+259,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_READY", false,-1);
        tracep->declQuad(c+265,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+260,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_VALID", false,-1);
        tracep->declBit(c+270,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_READY", false,-1);
        tracep->declQuad(c+274,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+271,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_VALID", false,-1);
        tracep->declBit(c+261,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_READY", false,-1);
        tracep->declBus(c+300,"$unit inst_ecall", false,-1, 11,0);
        tracep->declBus(c+301,"$unit inst_mret", false,-1, 11,0);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__IDU_npc),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__EXU_npc),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__IFU_pc),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__IDU_pc),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__IFU_inst),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__IDU_inst),64);
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__IFU_valid));
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__IFU_ready));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__IDU_valid));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__IDU_ready));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__EXU_valid));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__EXU_ready));
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__rd),5);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__rs2),5);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__imm),64);
        tracep->fullIData(oldp+24,(vlSelf->top__DOT__op),32);
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__npc_channel));
        tracep->fullQData(oldp+26,(((IData)(vlSelf->top__DOT__npc_channel)
                                     ? vlSelf->top__DOT__EXU_npc
                                     : vlSelf->top__DOT__IDU_npc)),64);
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__axis1_AW_READY));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__axis1_W_READY));
        tracep->fullBit(oldp+32,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+33,(vlSelf->top__DOT__axis1_B_READY));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__axis1_AR_VALID));
        tracep->fullBit(oldp+35,(vlSelf->top__DOT__axis1_AR_READY));
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__axis1_R_VALID));
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__axis1_R_READY));
        tracep->fullQData(oldp+38,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+40,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                     ? vlSelf->top__DOT__IFU_pc
                                     : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                         ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+42,(((IData)(vlSelf->top__DOT__in_channel)
                                     ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)),64);
        tracep->fullQData(oldp+44,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                     : 0ULL)),64);
        tracep->fullCData(oldp+46,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                     : 0U)),8);
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__axis2_AW_VALID));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__axis2_AW_READY));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__axis2_W_VALID));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__axis2_W_READY));
        tracep->fullBit(oldp+51,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__axis2_B_READY));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__axis2_AR_VALID));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__axis2_AR_READY));
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__axis2_R_VALID));
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__axis2_R_READY));
        tracep->fullQData(oldp+57,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                     ? vlSelf->top__DOT__u_EXU__DOT__waddr
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__aw_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+59,(((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                     ? vlSelf->top__DOT__u_EXU__DOT__raddr
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__ar_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+61,(((IData)(vlSelf->top__DOT__in_channel)
                                     ? ((IData)(vlSelf->top__DOT__in_channel)
                                         ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                         : 0ULL) : 0ULL)),64);
        tracep->fullQData(oldp+63,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                     ? vlSelf->top__DOT__u_EXU__DOT__wdata
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_data_reg
                                         : 0ULL))),64);
        tracep->fullCData(oldp+65,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                              ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmask)
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__in_channel));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__itrace_en));
        tracep->fullBit(oldp+68,(vlSelf->top__DOT__main_valid));
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
        tracep->fullQData(oldp+73,((((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                     & (IData)(vlSelf->top__DOT__axis1_R_READY))
                                     ? ((IData)(vlSelf->top__DOT__in_channel)
                                         ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)
                                     : 0ULL)),64);
        tracep->fullCData(oldp+75,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
        tracep->fullBit(oldp+76,(vlSelf->top__DOT__u_IFU__DOT__rreq));
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+83,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+85,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
        tracep->fullCData(oldp+87,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
        tracep->fullCData(oldp+88,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
        tracep->fullIData(oldp+91,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__u_EXU__DOT__rs1),5);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__rs2),5);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__op),32);
        tracep->fullBit(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid));
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__dest),64);
        tracep->fullBit(oldp+109,(vlSelf->top__DOT__u_EXU__DOT__wenR));
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__u_EXU__DOT__rCSR),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__wCSR1),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__u_EXU__DOT__wCSR2),64);
        tracep->fullSData(oldp+116,(vlSelf->top__DOT__u_EXU__DOT__instCSR),12);
        tracep->fullSData(oldp+117,((0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm))),12);
        tracep->fullBit(oldp+118,(vlSelf->top__DOT__u_EXU__DOT__wenC));
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__rdata),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__u_EXU__DOT__raddr),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__u_EXU__DOT__waddr),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__u_EXU__DOT__wdata),64);
        tracep->fullCData(oldp+127,(vlSelf->top__DOT__u_EXU__DOT__wmask),8);
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__u_EXU__DOT__wenM));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__u_EXU__DOT__renM));
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__u_EXU__DOT__temp),64);
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid));
        tracep->fullQData(oldp+133,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U])))),64);
        tracep->fullQData(oldp+135,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))),64);
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__div_out_valid));
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__u_EXU__DOT__quotient),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__u_EXU__DOT__remainder),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+166,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+168,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+170,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+220,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullCData(oldp+225,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt),7);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r),64);
        tracep->fullWData(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg),128);
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__divw));
        tracep->fullCData(oldp+236,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count),6);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b),64);
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign));
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor),64);
        tracep->fullWData(oldp+250,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add),65);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2),64);
        tracep->fullBit(oldp+255,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy));
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
        tracep->fullBit(oldp+262,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
        tracep->fullQData(oldp+263,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                              ? vlSelf->top__DOT__u_EXU__DOT__waddr
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                       ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                       : 0ULL))),64);
        tracep->fullQData(oldp+265,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                              ? vlSelf->top__DOT__u_EXU__DOT__raddr
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__ar_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_addr_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                       ? vlSelf->top__DOT__IFU_pc
                                       : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                           ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                           : 0ULL)))),64);
        tracep->fullQData(oldp+267,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                              ? vlSelf->top__DOT__u_EXU__DOT__wdata
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                       ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                       : 0ULL))),64);
        tracep->fullCData(oldp+269,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
                                               ? ((IData)(vlSelf->top__DOT__in_channel)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmask)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_strb_reg)
                                                     : 0U))
                                                   : 0U)
                                               : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                   ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                   : 0U)))),8);
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
        tracep->fullBit(oldp+271,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
        tracep->fullBit(oldp+273,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        tracep->fullBit(oldp+276,(vlSelf->top__DOT__EXU_npc_valid));
        tracep->fullBit(oldp+277,(vlSelf->top__DOT__IDU_npc_valid));
        tracep->fullBit(oldp+278,(vlSelf->top__DOT__u_EXU__DOT__exe_valid));
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__u_EXU__DOT__mul_valid));
        tracep->fullBit(oldp+280,(vlSelf->top__DOT__u_EXU__DOT__div_valid));
        tracep->fullBit(oldp+281,(vlSelf->clk));
        tracep->fullBit(oldp+282,(vlSelf->rst_n));
        tracep->fullQData(oldp+283,(vlSelf->inst),64);
        tracep->fullQData(oldp+285,(vlSelf->pc),64);
        tracep->fullBit(oldp+287,(vlSelf->mainUpdate_valid));
        tracep->fullIData(oldp+288,(0x40U),32);
        tracep->fullBit(oldp+289,(0U));
        tracep->fullQData(oldp+290,(0ULL),64);
        tracep->fullCData(oldp+292,(0U),8);
        tracep->fullIData(oldp+293,(5U),32);
        tracep->fullIData(oldp+294,(0x40U),32);
        tracep->fullIData(oldp+295,(0xcU),32);
        tracep->fullSData(oldp+296,(0x342U),12);
        tracep->fullSData(oldp+297,(0x300U),12);
        tracep->fullSData(oldp+298,(0x341U),12);
        tracep->fullSData(oldp+299,(0x305U),12);
        tracep->fullSData(oldp+300,(1U),12);
        tracep->fullSData(oldp+301,(2U),12);
    }
}
