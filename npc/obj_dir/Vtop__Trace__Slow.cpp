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
        tracep->declBit(c+533,"clk", false,-1);
        tracep->declBit(c+534,"rst_n", false,-1);
        tracep->declBus(c+535,"jmp_type", false,-1, 7,0);
        tracep->declBit(c+536,"ifetch_taken", false,-1);
        tracep->declQuad(c+537,"ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+539,"mainUpdate_valid", false,-1);
        tracep->declQuad(c+540,"pc", false,-1, 63,0);
        tracep->declBit(c+533,"top clk", false,-1);
        tracep->declBit(c+534,"top rst_n", false,-1);
        tracep->declBus(c+535,"top jmp_type", false,-1, 7,0);
        tracep->declBit(c+536,"top ifetch_taken", false,-1);
        tracep->declQuad(c+537,"top ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+539,"top mainUpdate_valid", false,-1);
        tracep->declQuad(c+540,"top pc", false,-1, 63,0);
        tracep->declBit(c+1,"top ifetch_inst_vld", false,-1);
        tracep->declQuad(c+2,"top ifetch_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+4,"top ifetch_inst", false,-1, 63,0);
        tracep->declBit(c+6,"top dec_inst_vld", false,-1);
        tracep->declQuad(c+7,"top dec_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top dec_inst", false,-1, 63,0);
        tracep->declBit(c+11,"top exu_inst_vld", false,-1);
        tracep->declQuad(c+12,"top exu_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+14,"top exu_inst", false,-1, 63,0);
        tracep->declBit(c+16,"top exu_stall", false,-1);
        tracep->declBus(c+17,"top rd", false,-1, 4,0);
        tracep->declBus(c+18,"top rs1", false,-1, 4,0);
        tracep->declBus(c+19,"top rs2", false,-1, 4,0);
        tracep->declQuad(c+20,"top imm", false,-1, 63,0);
        tracep->declBus(c+22,"top op", false,-1, 31,0);
        tracep->declQuad(c+23,"top inst_act", false,-1, 32,0);
        tracep->declBus(c+25,"top inst_type", false,-1, 17,0);
        tracep->declQuad(c+26,"top src1", false,-1, 63,0);
        tracep->declQuad(c+28,"top src2", false,-1, 63,0);
        tracep->declBit(c+30,"top alu_wb_vld", false,-1);
        tracep->declBus(c+31,"top alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+32,"top alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+34,"top csr_wb_vld", false,-1);
        tracep->declQuad(c+35,"top csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+37,"top csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+38,"top lsu_wb_vld", false,-1);
        tracep->declBus(c+39,"top lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"top lsu_wb_data", false,-1, 63,0);
        tracep->declBit(c+11,"top ifetch_req", false,-1);
        tracep->declBit(c+42,"top axis1_AW_VALID", false,-1);
        tracep->declBit(c+43,"top axis1_AW_READY", false,-1);
        tracep->declBit(c+44,"top axis1_W_VALID", false,-1);
        tracep->declBit(c+45,"top axis1_W_READY", false,-1);
        tracep->declBit(c+46,"top axis1_B_VALID", false,-1);
        tracep->declBit(c+47,"top axis1_B_READY", false,-1);
        tracep->declBit(c+48,"top axis1_AR_VALID", false,-1);
        tracep->declBit(c+49,"top axis1_AR_READY", false,-1);
        tracep->declBit(c+50,"top axis1_R_VALID", false,-1);
        tracep->declBit(c+51,"top axis1_R_READY", false,-1);
        tracep->declQuad(c+52,"top axis1_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+54,"top axis1_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+56,"top axis1_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+58,"top axis1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+60,"top axis1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+61,"top axis2_AW_VALID", false,-1);
        tracep->declBit(c+62,"top axis2_AW_READY", false,-1);
        tracep->declBit(c+63,"top axis2_W_VALID", false,-1);
        tracep->declBit(c+64,"top axis2_W_READY", false,-1);
        tracep->declBit(c+65,"top axis2_B_VALID", false,-1);
        tracep->declBit(c+66,"top axis2_B_READY", false,-1);
        tracep->declBit(c+67,"top axis2_AR_VALID", false,-1);
        tracep->declBit(c+68,"top axis2_AR_READY", false,-1);
        tracep->declBit(c+69,"top axis2_R_VALID", false,-1);
        tracep->declBit(c+70,"top axis2_R_READY", false,-1);
        tracep->declQuad(c+71,"top axis2_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+73,"top axis2_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+75,"top axis2_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+77,"top axis2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+79,"top axis2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+80,"top in_channel", false,-1);
        tracep->declBit(c+81,"top itrace_en", false,-1);
        tracep->declBit(c+82,"top commit_vld", false,-1);
        tracep->declQuad(c+83,"top commit_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+85,"top commit_inst", false,-1, 63,0);
        tracep->declBit(c+533,"top u_ifetch clk", false,-1);
        tracep->declBit(c+534,"top u_ifetch rst_n", false,-1);
        tracep->declBit(c+1,"top u_ifetch ifetch_inst_vld", false,-1);
        tracep->declQuad(c+2,"top u_ifetch ifetch_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_ifetch ifetch_inst", false,-1, 63,0);
        tracep->declQuad(c+537,"top u_ifetch ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+536,"top u_ifetch ifetch_taken", false,-1);
        tracep->declBit(c+11,"top u_ifetch ifetch_req", false,-1);
        tracep->declQuad(c+52,"top u_ifetch axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+42,"top u_ifetch axi_AW_VALID", false,-1);
        tracep->declBit(c+43,"top u_ifetch axi_AW_READY", false,-1);
        tracep->declQuad(c+58,"top u_ifetch axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+60,"top u_ifetch axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+44,"top u_ifetch axi_W_VALID", false,-1);
        tracep->declBit(c+45,"top u_ifetch axi_W_READY", false,-1);
        tracep->declBit(c+46,"top u_ifetch axi_B_VALID", false,-1);
        tracep->declBit(c+47,"top u_ifetch axi_B_READY", false,-1);
        tracep->declQuad(c+54,"top u_ifetch axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+48,"top u_ifetch axi_AR_VALID", false,-1);
        tracep->declBit(c+49,"top u_ifetch axi_AR_READY", false,-1);
        tracep->declQuad(c+56,"top u_ifetch axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+50,"top u_ifetch axi_R_VALID", false,-1);
        tracep->declBit(c+51,"top u_ifetch axi_R_READY", false,-1);
        tracep->declQuad(c+87,"top u_ifetch pc_raddr", false,-1, 63,0);
        tracep->declBus(c+89,"top u_ifetch pre_cnt", false,-1, 5,0);
        tracep->declBus(c+90,"top u_ifetch inst", false,-1, 31,0);
        tracep->declBit(c+1,"top u_ifetch rask", false,-1);
        tracep->declBit(c+91,"top u_ifetch rreq", false,-1);
        tracep->declBit(c+92,"top u_ifetch icache_hit", false,-1);
        tracep->declBit(c+93,"top u_ifetch icache_inv", false,-1);
        tracep->declBit(c+94,"top u_ifetch icache_rep", false,-1);
        tracep->declBit(c+95,"top u_ifetch icache_l2_rreq", false,-1);
        tracep->declQuad(c+96,"top u_ifetch icache_l2_raddr", false,-1, 63,0);
        tracep->declArray(c+98,"top u_ifetch l2_icache_rdata", false,-1, 255,0);
        tracep->declBit(c+106,"top u_ifetch l2_icache_rask", false,-1);
        tracep->declBit(c+107,"top u_ifetch AXI_RREQ", false,-1);
        tracep->declBit(c+542,"top u_ifetch AXI_WREQ", false,-1);
        tracep->declBit(c+108,"top u_ifetch AXI_RASK", false,-1);
        tracep->declBit(c+109,"top u_ifetch AXI_WASK", false,-1);
        tracep->declQuad(c+110,"top u_ifetch AXI_RADDR", false,-1, 63,0);
        tracep->declQuad(c+543,"top u_ifetch AXI_WADDR", false,-1, 63,0);
        tracep->declQuad(c+56,"top u_ifetch AXI_RDATA", false,-1, 63,0);
        tracep->declQuad(c+543,"top u_ifetch AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+545,"top u_ifetch AXI_WMASK", false,-1, 7,0);
        tracep->declBit(c+91,"top u_ifetch u_icache icache_rreq", false,-1);
        tracep->declQuad(c+87,"top u_ifetch u_icache icache_raddr", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ifetch u_icache icache_rask", false,-1);
        tracep->declBus(c+90,"top u_ifetch u_icache icache_rdata", false,-1, 31,0);
        tracep->declBit(c+92,"top u_ifetch u_icache icache_hit", false,-1);
        tracep->declBit(c+93,"top u_ifetch u_icache icache_inv", false,-1);
        tracep->declBit(c+94,"top u_ifetch u_icache icache_rep", false,-1);
        tracep->declBit(c+95,"top u_ifetch u_icache icache_l2_rreq", false,-1);
        tracep->declQuad(c+96,"top u_ifetch u_icache icache_l2_raddr", false,-1, 63,0);
        tracep->declArray(c+98,"top u_ifetch u_icache l2_icache_rdata", false,-1, 255,0);
        tracep->declBit(c+106,"top u_ifetch u_icache l2_icache_rask", false,-1);
        tracep->declBit(c+533,"top u_ifetch u_icache clk", false,-1);
        tracep->declBit(c+534,"top u_ifetch u_icache rst_n", false,-1);
        tracep->declBus(c+546,"top u_ifetch u_icache WAY_SIZE", false,-1, 31,0);
        tracep->declBus(c+547,"top u_ifetch u_icache SET_SIZE", false,-1, 31,0);
        tracep->declBus(c+548,"top u_ifetch u_icache LINE_SIZE", false,-1, 31,0);
        tracep->declBus(c+549,"top u_ifetch u_icache OFFSET_W", false,-1, 31,0);
        tracep->declBus(c+550,"top u_ifetch u_icache INDEX_W", false,-1, 31,0);
        tracep->declArray(c+112,"top u_ifetch u_icache entry", false,-1, 1239,0);
        tracep->declBus(c+151,"top u_ifetch u_icache op_line", false,-1, 1,0);
        tracep->declBus(c+152,"top u_ifetch u_icache state", false,-1, 1,0);
        tracep->declBus(c+153,"top u_ifetch u_icache next_state", false,-1, 1,0);
        tracep->declBus(c+551,"top u_ifetch u_icache IDLE", false,-1, 31,0);
        tracep->declBus(c+552,"top u_ifetch u_icache RD", false,-1, 31,0);
        tracep->declBus(c+553,"top u_ifetch u_icache L2RD", false,-1, 31,0);
        tracep->declQuad(c+154,"top u_ifetch u_icache icache_raddr_d", false,-1, 63,0);
        tracep->declArray(c+156,"top u_ifetch u_icache sram_rdat_d", false,-1, 1239,0);
        tracep->declBit(c+195,"top u_ifetch u_icache sram_wr", false,-1);
        tracep->declBus(c+196,"top u_ifetch u_icache sram_wadr", false,-1, 5,0);
        tracep->declArray(c+197,"top u_ifetch u_icache sram_wdat", false,-1, 1239,0);
        tracep->declBit(c+236,"top u_ifetch u_icache sram_rd", false,-1);
        tracep->declBus(c+237,"top u_ifetch u_icache sram_radr", false,-1, 5,0);
        tracep->declArray(c+238,"top u_ifetch u_icache sram_rdat", false,-1, 1239,0);
        tracep->declBus(c+277,"top u_ifetch u_icache RD_CONTROL unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+278,"top u_ifetch u_icache RD_CONTROL unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+547,"top u_ifetch u_icache icache_array ENTRY_CNT", false,-1, 31,0);
        tracep->declBus(c+554,"top u_ifetch u_icache icache_array ENTRY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+552,"top u_ifetch u_icache icache_array R_PORT", false,-1, 31,0);
        tracep->declBit(c+533,"top u_ifetch u_icache icache_array clk", false,-1);
        tracep->declBit(c+195,"top u_ifetch u_icache icache_array wr", false,-1);
        tracep->declBus(c+196,"top u_ifetch u_icache icache_array wadr", false,-1, 5,0);
        tracep->declArray(c+197,"top u_ifetch u_icache icache_array wdat", false,-1, 1239,0);
        tracep->declBus(c+236,"top u_ifetch u_icache icache_array rd", false,-1, 0,0);
        tracep->declBus(c+237,"top u_ifetch u_icache icache_array radr", false,-1, 5,0);
        tracep->declArray(c+238,"top u_ifetch u_icache icache_array rdat", false,-1, 1239,0);
        tracep->declBus(c+279,"top u_ifetch u_icache icache_array unnamedblk1 i", false,-1, 31,0);
        tracep->declBit(c+95,"top u_ifetch u_icache_axi icache_l2_rreq", false,-1);
        tracep->declQuad(c+96,"top u_ifetch u_icache_axi icache_l2_raddr", false,-1, 63,0);
        tracep->declArray(c+98,"top u_ifetch u_icache_axi l2_icache_rdata", false,-1, 255,0);
        tracep->declBit(c+106,"top u_ifetch u_icache_axi l2_icache_rask", false,-1);
        tracep->declBit(c+107,"top u_ifetch u_icache_axi AXI_RREQ", false,-1);
        tracep->declBit(c+108,"top u_ifetch u_icache_axi AXI_RASK", false,-1);
        tracep->declQuad(c+110,"top u_ifetch u_icache_axi AXI_RADDR", false,-1, 63,0);
        tracep->declQuad(c+56,"top u_ifetch u_icache_axi AXI_RDATA", false,-1, 63,0);
        tracep->declBit(c+542,"top u_ifetch u_icache_axi AXI_WREQ", false,-1);
        tracep->declBit(c+109,"top u_ifetch u_icache_axi AXI_WASK", false,-1);
        tracep->declQuad(c+543,"top u_ifetch u_icache_axi AXI_WADDR", false,-1, 63,0);
        tracep->declQuad(c+543,"top u_ifetch u_icache_axi AXI_WDATA", false,-1, 63,0);
        tracep->declBus(c+545,"top u_ifetch u_icache_axi AXI_WMASK", false,-1, 7,0);
        tracep->declBit(c+533,"top u_ifetch u_icache_axi clk", false,-1);
        tracep->declBit(c+534,"top u_ifetch u_icache_axi rst_n", false,-1);
        tracep->declBus(c+555,"top u_ifetch u_icache_axi MEM_BURST", false,-1, 31,0);
        tracep->declQuad(c+556,"top u_ifetch u_icache_axi BASE_ARMASK", false,-1, 63,0);
        tracep->declArray(c+98,"top u_ifetch u_icache_axi MEM_RDATA", false,-1, 255,0);
        tracep->declBit(c+106,"top u_ifetch u_icache_axi MEM_ASK", false,-1);
        tracep->declBus(c+280,"top u_ifetch u_icache_axi state", false,-1, 2,0);
        tracep->declBus(c+281,"top u_ifetch u_icache_axi next_state", false,-1, 2,0);
        tracep->declBus(c+551,"top u_ifetch u_icache_axi IDLE", false,-1, 31,0);
        tracep->declBus(c+552,"top u_ifetch u_icache_axi RD0", false,-1, 31,0);
        tracep->declBus(c+553,"top u_ifetch u_icache_axi RD1", false,-1, 31,0);
        tracep->declBus(c+558,"top u_ifetch u_icache_axi RD2", false,-1, 31,0);
        tracep->declBus(c+546,"top u_ifetch u_icache_axi RD3", false,-1, 31,0);
        tracep->declBus(c+559,"top u_ifetch u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+559,"top u_ifetch u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+542,"top u_ifetch u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+543,"top u_ifetch u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+543,"top u_ifetch u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+545,"top u_ifetch u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+107,"top u_ifetch u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+110,"top u_ifetch u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+56,"top u_ifetch u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+533,"top u_ifetch u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+534,"top u_ifetch u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+52,"top u_ifetch u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+42,"top u_ifetch u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+43,"top u_ifetch u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+58,"top u_ifetch u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+60,"top u_ifetch u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+44,"top u_ifetch u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+45,"top u_ifetch u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+46,"top u_ifetch u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+47,"top u_ifetch u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+54,"top u_ifetch u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+48,"top u_ifetch u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+49,"top u_ifetch u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+56,"top u_ifetch u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+50,"top u_ifetch u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+51,"top u_ifetch u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+282,"top u_ifetch u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+284,"top u_ifetch u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+54,"top u_ifetch u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+286,"top u_ifetch u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+42,"top u_ifetch u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+44,"top u_ifetch u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+287,"top u_ifetch u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+288,"top u_ifetch u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBit(c+533,"top u_dec clk", false,-1);
        tracep->declBit(c+534,"top u_dec rst_n", false,-1);
        tracep->declBit(c+1,"top u_dec ifetch_inst_vld", false,-1);
        tracep->declQuad(c+4,"top u_dec ifetch_inst", false,-1, 63,0);
        tracep->declQuad(c+2,"top u_dec ifetch_inst_pc", false,-1, 63,0);
        tracep->declBus(c+17,"top u_dec rd", false,-1, 4,0);
        tracep->declBus(c+18,"top u_dec rs1", false,-1, 4,0);
        tracep->declBus(c+19,"top u_dec rs2", false,-1, 4,0);
        tracep->declQuad(c+20,"top u_dec imm", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_dec inst_act", false,-1, 32,0);
        tracep->declBus(c+25,"top u_dec inst_type", false,-1, 17,0);
        tracep->declBus(c+22,"top u_dec op", false,-1, 31,0);
        tracep->declBit(c+6,"top u_dec dec_inst_vld", false,-1);
        tracep->declQuad(c+7,"top u_dec dec_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_dec dec_inst", false,-1, 63,0);
        tracep->declQuad(c+4,"top u_dec inst", false,-1, 63,0);
        tracep->declQuad(c+289,"top u_dec inst_act_pre", false,-1, 32,0);
        tracep->declBus(c+291,"top u_dec inst_type_pre", false,-1, 17,0);
        tracep->declBit(c+292,"top u_dec ras_rd_link", false,-1);
        tracep->declBit(c+293,"top u_dec ras_rs1_link", false,-1);
        tracep->declQuad(c+294,"top u_dec imm_pre", false,-1, 63,0);
        tracep->declBus(c+296,"top u_dec rd_pre", false,-1, 4,0);
        tracep->declBus(c+297,"top u_dec rs1_pre", false,-1, 4,0);
        tracep->declBus(c+298,"top u_dec rs2_pre", false,-1, 4,0);
        tracep->declBit(c+533,"top u_EXU clk", false,-1);
        tracep->declBit(c+534,"top u_EXU rst_n", false,-1);
        tracep->declBus(c+17,"top u_EXU rd", false,-1, 4,0);
        tracep->declQuad(c+26,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_EXU imm", false,-1, 63,0);
        tracep->declQuad(c+23,"top u_EXU inst_act", false,-1, 32,0);
        tracep->declBit(c+6,"top u_EXU dec_inst_vld", false,-1);
        tracep->declQuad(c+7,"top u_EXU dec_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+9,"top u_EXU dec_inst", false,-1, 63,0);
        tracep->declBit(c+536,"top u_EXU ifetch_taken", false,-1);
        tracep->declQuad(c+537,"top u_EXU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+11,"top u_EXU exu_inst_vld", false,-1);
        tracep->declQuad(c+12,"top u_EXU exu_inst_pc", false,-1, 63,0);
        tracep->declQuad(c+14,"top u_EXU exu_inst", false,-1, 63,0);
        tracep->declBit(c+16,"top u_EXU exu_stall", false,-1);
        tracep->declBit(c+30,"top u_EXU alu_wb_vld", false,-1);
        tracep->declBus(c+31,"top u_EXU alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+32,"top u_EXU alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+34,"top u_EXU csr_wb_vld", false,-1);
        tracep->declQuad(c+35,"top u_EXU csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+37,"top u_EXU csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+38,"top u_EXU lsu_wb_vld", false,-1);
        tracep->declBus(c+39,"top u_EXU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"top u_EXU lsu_wb_data", false,-1, 63,0);
        tracep->declQuad(c+71,"top u_EXU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+61,"top u_EXU axi_AW_VALID", false,-1);
        tracep->declBit(c+62,"top u_EXU axi_AW_READY", false,-1);
        tracep->declQuad(c+77,"top u_EXU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+79,"top u_EXU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+63,"top u_EXU axi_W_VALID", false,-1);
        tracep->declBit(c+64,"top u_EXU axi_W_READY", false,-1);
        tracep->declBit(c+65,"top u_EXU axi_B_VALID", false,-1);
        tracep->declBit(c+66,"top u_EXU axi_B_READY", false,-1);
        tracep->declQuad(c+73,"top u_EXU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+67,"top u_EXU axi_AR_VALID", false,-1);
        tracep->declBit(c+68,"top u_EXU axi_AR_READY", false,-1);
        tracep->declQuad(c+75,"top u_EXU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+69,"top u_EXU axi_R_VALID", false,-1);
        tracep->declBit(c+70,"top u_EXU axi_R_READY", false,-1);
        tracep->declBit(c+16,"top u_EXU alu_stall", false,-1);
        tracep->declBit(c+30,"top u_EXU alu_data_vld", false,-1);
        tracep->declBit(c+299,"top u_EXU bju_data_vld", false,-1);
        tracep->declBit(c+300,"top u_EXU lsu_data_vld", false,-1);
        tracep->declBit(c+301,"top u_EXU ld_req", false,-1);
        tracep->declBit(c+302,"top u_EXU st_req", false,-1);
        tracep->declBit(c+303,"top u_EXU sys_req", false,-1);
        tracep->declBit(c+304,"top u_EXU csr_data_vld", false,-1);
        tracep->declQuad(c+305,"top u_EXU csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+307,"top u_EXU csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+308,"top u_EXU csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+310,"top u_EXU csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+311,"top u_EXU csrf_wen", false,-1);
        tracep->declBit(c+533,"top u_EXU u_alu clk", false,-1);
        tracep->declBit(c+534,"top u_EXU u_alu rst_n", false,-1);
        tracep->declBit(c+6,"top u_EXU u_alu dec_inst_vld", false,-1);
        tracep->declQuad(c+23,"top u_EXU u_alu inst_act", false,-1, 32,0);
        tracep->declBus(c+17,"top u_EXU u_alu dst_id", false,-1, 4,0);
        tracep->declQuad(c+26,"top u_EXU u_alu src1", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU u_alu src2", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_EXU u_alu imm", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_EXU u_alu pc", false,-1, 63,0);
        tracep->declBit(c+30,"top u_EXU u_alu alu_wb_vld", false,-1);
        tracep->declBus(c+31,"top u_EXU u_alu alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+32,"top u_EXU u_alu alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+16,"top u_EXU u_alu alu_stall", false,-1);
        tracep->declBit(c+312,"top u_EXU u_alu dec_inst_vld_d", false,-1);
        tracep->declBit(c+313,"top u_EXU u_alu shift_out_vld", false,-1);
        tracep->declBit(c+314,"top u_EXU u_alu lgc_out_vld", false,-1);
        tracep->declBit(c+315,"top u_EXU u_alu add_out_vld", false,-1);
        tracep->declQuad(c+316,"top u_EXU u_alu shift_data_out", false,-1, 63,0);
        tracep->declQuad(c+318,"top u_EXU u_alu lgc_data_out", false,-1, 63,0);
        tracep->declQuad(c+320,"top u_EXU u_alu add_data_out", false,-1, 63,0);
        tracep->declBit(c+322,"top u_EXU u_alu w_inst_d", false,-1);
        tracep->declBit(c+323,"top u_EXU u_alu div_rem_d", false,-1);
        tracep->declBit(c+324,"top u_EXU u_alu shift_req", false,-1);
        tracep->declBit(c+325,"top u_EXU u_alu shift_dir", false,-1);
        tracep->declBit(c+326,"top u_EXU u_alu shift_mode", false,-1);
        tracep->declBus(c+327,"top u_EXU u_alu shift_shamt", false,-1, 5,0);
        tracep->declQuad(c+328,"top u_EXU u_alu shift_result", false,-1, 63,0);
        tracep->declQuad(c+330,"top u_EXU u_alu add_result", false,-1, 63,0);
        tracep->declQuad(c+332,"top u_EXU u_alu adder_src0", false,-1, 63,0);
        tracep->declQuad(c+334,"top u_EXU u_alu adder_src1", false,-1, 63,0);
        tracep->declBit(c+336,"top u_EXU u_alu adder_AorS", false,-1);
        tracep->declBit(c+337,"top u_EXU u_alu add_req", false,-1);
        tracep->declQuad(c+338,"top u_EXU u_alu adder_sum", false,-1, 63,0);
        tracep->declBit(c+340,"top u_EXU u_alu adder_co", false,-1);
        tracep->declBit(c+341,"top u_EXU u_alu adder_sign", false,-1);
        tracep->declQuad(c+342,"top u_EXU u_alu lgc_result", false,-1, 63,0);
        tracep->declBit(c+344,"top u_EXU u_alu lgc_req", false,-1);
        tracep->declQuad(c+26,"top u_EXU u_alu lgc_src0", false,-1, 63,0);
        tracep->declQuad(c+345,"top u_EXU u_alu lgc_src1", false,-1, 63,0);
        tracep->declBit(c+347,"top u_EXU u_alu mul_out_valid", false,-1);
        tracep->declQuad(c+348,"top u_EXU u_alu mul_result", false,-1, 63,0);
        tracep->declBit(c+350,"top u_EXU u_alu mult_req", false,-1);
        tracep->declQuad(c+26,"top u_EXU u_alu mult_src0", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU u_alu mult_src1", false,-1, 63,0);
        tracep->declBit(c+351,"top u_EXU u_alu mult_sign", false,-1);
        tracep->declArray(c+352,"top u_EXU u_alu mult_data_out", false,-1, 127,0);
        tracep->declBit(c+347,"top u_EXU u_alu mult_data_vld", false,-1);
        tracep->declBit(c+356,"top u_EXU u_alu div_req", false,-1);
        tracep->declBit(c+357,"top u_EXU u_alu div_out_valid", false,-1);
        tracep->declQuad(c+358,"top u_EXU u_alu quotient", false,-1, 63,0);
        tracep->declQuad(c+360,"top u_EXU u_alu remainder", false,-1, 63,0);
        tracep->declQuad(c+362,"top u_EXU u_alu div_result", false,-1, 63,0);
        tracep->declBit(c+324,"top u_EXU u_alu alu_shift shift_req", false,-1);
        tracep->declQuad(c+26,"top u_EXU u_alu alu_shift shift_data_in", false,-1, 63,0);
        tracep->declBit(c+560,"top u_EXU u_alu alu_shift shift_data_tc", false,-1);
        tracep->declBus(c+327,"top u_EXU u_alu alu_shift shift_sh", false,-1, 5,0);
        tracep->declBit(c+326,"top u_EXU u_alu alu_shift shift_sh_mode", false,-1);
        tracep->declBit(c+325,"top u_EXU u_alu alu_shift shift_dir", false,-1);
        tracep->declBit(c+364,"top u_EXU u_alu alu_shift w_inst", false,-1);
        tracep->declQuad(c+328,"top u_EXU u_alu alu_shift shift_data_out", false,-1, 63,0);
        tracep->declQuad(c+365,"top u_EXU u_alu alu_shift shift_res", false,-1, 63,0);
        tracep->declBus(c+367,"top u_EXU u_alu alu_shift w_inst_shift_res", false,-1, 31,0);
        tracep->declBus(c+547,"top u_EXU u_alu alu_add WIDTH", false,-1, 31,0);
        tracep->declQuad(c+334,"top u_EXU u_alu alu_add adder_src1", false,-1, 63,0);
        tracep->declQuad(c+332,"top u_EXU u_alu alu_add adder_src0", false,-1, 63,0);
        tracep->declBit(c+560,"top u_EXU u_alu alu_add adder_src1_vld", false,-1);
        tracep->declBit(c+560,"top u_EXU u_alu alu_add adder_src0_vld", false,-1);
        tracep->declBit(c+351,"top u_EXU u_alu alu_add sign", false,-1);
        tracep->declBit(c+364,"top u_EXU u_alu alu_add w_inst", false,-1);
        tracep->declBit(c+336,"top u_EXU u_alu alu_add adder_AorS", false,-1);
        tracep->declBit(c+337,"top u_EXU u_alu alu_add add_req", false,-1);
        tracep->declQuad(c+338,"top u_EXU u_alu alu_add adder_sum", false,-1, 63,0);
        tracep->declBit(c+340,"top u_EXU u_alu alu_add adder_co", false,-1);
        tracep->declBit(c+341,"top u_EXU u_alu alu_add adder_sign", false,-1);
        tracep->declBus(c+561,"top u_EXU u_alu alu_add H_WIDTH", false,-1, 31,0);
        tracep->declArray(c+368,"top u_EXU u_alu alu_add addend", false,-1, 128,0);
        tracep->declBit(c+373,"top u_EXU u_alu alu_add s0", false,-1);
        tracep->declQuad(c+374,"top u_EXU u_alu alu_add adder_sum_temp", false,-1, 63,0);
        tracep->declBit(c+533,"top u_EXU u_alu u_div clk", false,-1);
        tracep->declBit(c+534,"top u_EXU u_alu u_div rst_n", false,-1);
        tracep->declBit(c+351,"top u_EXU u_alu u_div sign_div", false,-1);
        tracep->declBit(c+364,"top u_EXU u_alu u_div divw", false,-1);
        tracep->declQuad(c+26,"top u_EXU u_alu u_div dividend", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU u_alu u_div divisor", false,-1, 63,0);
        tracep->declBit(c+356,"top u_EXU u_alu u_div div_valid", false,-1);
        tracep->declQuad(c+358,"top u_EXU u_alu u_div quotient", false,-1, 63,0);
        tracep->declQuad(c+360,"top u_EXU u_alu u_div remainder", false,-1, 63,0);
        tracep->declBit(c+357,"top u_EXU u_alu u_div out_valid", false,-1);
        tracep->declBus(c+376,"top u_EXU u_alu u_div count", false,-1, 5,0);
        tracep->declQuad(c+377,"top u_EXU u_alu u_div reg_q", false,-1, 63,0);
        tracep->declQuad(c+379,"top u_EXU u_alu u_div reg_r", false,-1, 63,0);
        tracep->declQuad(c+381,"top u_EXU u_alu u_div reg_b", false,-1, 63,0);
        tracep->declBit(c+383,"top u_EXU u_alu u_div r_sign", false,-1);
        tracep->declBit(c+384,"top u_EXU u_alu u_div dividend_sign", false,-1);
        tracep->declBit(c+385,"top u_EXU u_alu u_div divisor_sign", false,-1);
        tracep->declQuad(c+386,"top u_EXU u_alu u_div op_dividend", false,-1, 63,0);
        tracep->declQuad(c+388,"top u_EXU u_alu u_div op_divisor", false,-1, 63,0);
        tracep->declArray(c+390,"top u_EXU u_alu u_div sub_add", false,-1, 64,0);
        tracep->declQuad(c+393,"top u_EXU u_alu u_div reg_r2", false,-1, 63,0);
        tracep->declBit(c+395,"top u_EXU u_alu u_div busy", false,-1);
        tracep->declBit(c+396,"top u_EXU u_alu u_div busy_r", false,-1);
        tracep->declBit(c+533,"top u_EXU u_BJU clk", false,-1);
        tracep->declBit(c+534,"top u_EXU u_BJU rst_n", false,-1);
        tracep->declBit(c+6,"top u_EXU u_BJU dec_inst_vld", false,-1);
        tracep->declBit(c+397,"top u_EXU u_BJU jal", false,-1);
        tracep->declBit(c+398,"top u_EXU u_BJU jalr", false,-1);
        tracep->declBit(c+399,"top u_EXU u_BJU br", false,-1);
        tracep->declBit(c+400,"top u_EXU u_BJU syscall", false,-1);
        tracep->declBus(c+401,"top u_EXU u_BJU func3", false,-1, 2,0);
        tracep->declQuad(c+7,"top u_EXU u_BJU pc", false,-1, 63,0);
        tracep->declQuad(c+26,"top u_EXU u_BJU src1", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU u_BJU src2", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_EXU u_BJU imm", false,-1, 63,0);
        tracep->declQuad(c+305,"top u_EXU u_BJU rCSR", false,-1, 63,0);
        tracep->declBit(c+536,"top u_EXU u_BJU ifetch_taken", false,-1);
        tracep->declQuad(c+537,"top u_EXU u_BJU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+299,"top u_EXU u_BJU bmu_vld", false,-1);
        tracep->declBit(c+402,"top u_EXU u_BJU ifetch_taken_pre", false,-1);
        tracep->declQuad(c+403,"top u_EXU u_BJU ifetch_taken_pc_pre", false,-1, 63,0);
        tracep->declQuad(c+405,"top u_EXU u_BJU add_src1", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_EXU u_BJU add_src2", false,-1, 63,0);
        tracep->declQuad(c+407,"top u_EXU u_BJU add_sum", false,-1, 63,0);
        tracep->declBit(c+533,"top u_EXU u_LSU clk", false,-1);
        tracep->declBit(c+534,"top u_EXU u_LSU rst_n", false,-1);
        tracep->declBit(c+301,"top u_EXU u_LSU ld_req", false,-1);
        tracep->declBit(c+302,"top u_EXU u_LSU st_req", false,-1);
        tracep->declBus(c+401,"top u_EXU u_LSU func3", false,-1, 2,0);
        tracep->declQuad(c+26,"top u_EXU u_LSU src1", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU u_LSU src2", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_EXU u_LSU imm", false,-1, 63,0);
        tracep->declBus(c+17,"top u_EXU u_LSU dst_id", false,-1, 4,0);
        tracep->declBit(c+409,"top u_EXU u_LSU dst_vld", false,-1);
        tracep->declBit(c+300,"top u_EXU u_LSU lsu_data_vld", false,-1);
        tracep->declBit(c+38,"top u_EXU u_LSU lsu_wb_vld", false,-1);
        tracep->declBus(c+39,"top u_EXU u_LSU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"top u_EXU u_LSU lsu_wb_data", false,-1, 63,0);
        tracep->declQuad(c+71,"top u_EXU u_LSU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+61,"top u_EXU u_LSU axi_AW_VALID", false,-1);
        tracep->declBit(c+62,"top u_EXU u_LSU axi_AW_READY", false,-1);
        tracep->declQuad(c+77,"top u_EXU u_LSU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+79,"top u_EXU u_LSU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+63,"top u_EXU u_LSU axi_W_VALID", false,-1);
        tracep->declBit(c+64,"top u_EXU u_LSU axi_W_READY", false,-1);
        tracep->declBit(c+65,"top u_EXU u_LSU axi_B_VALID", false,-1);
        tracep->declBit(c+66,"top u_EXU u_LSU axi_B_READY", false,-1);
        tracep->declQuad(c+73,"top u_EXU u_LSU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+67,"top u_EXU u_LSU axi_AR_VALID", false,-1);
        tracep->declBit(c+68,"top u_EXU u_LSU axi_AR_READY", false,-1);
        tracep->declQuad(c+75,"top u_EXU u_LSU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+69,"top u_EXU u_LSU axi_R_VALID", false,-1);
        tracep->declBit(c+70,"top u_EXU u_LSU axi_R_READY", false,-1);
        tracep->declBus(c+410,"top u_EXU u_LSU func3_d", false,-1, 2,0);
        tracep->declBit(c+411,"top u_EXU u_LSU dst_vld_r", false,-1);
        tracep->declBus(c+39,"top u_EXU u_LSU dst_id_r", false,-1, 4,0);
        tracep->declQuad(c+412,"top u_EXU u_LSU raddrM", false,-1, 63,0);
        tracep->declQuad(c+75,"top u_EXU u_LSU rdataM", false,-1, 63,0);
        tracep->declQuad(c+414,"top u_EXU u_LSU waddrM", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU u_LSU wdataM", false,-1, 63,0);
        tracep->declBus(c+416,"top u_EXU u_LSU wmaskM", false,-1, 7,0);
        tracep->declBit(c+302,"top u_EXU u_LSU wenM", false,-1);
        tracep->declBit(c+301,"top u_EXU u_LSU renM", false,-1);
        tracep->declBit(c+300,"top u_EXU u_LSU dataM_valid", false,-1);
        tracep->declBus(c+559,"top u_EXU u_LSU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+559,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+302,"top u_EXU u_LSU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+414,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+416,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+301,"top u_EXU u_LSU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+412,"top u_EXU u_LSU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+75,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+533,"top u_EXU u_LSU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+534,"top u_EXU u_LSU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+71,"top u_EXU u_LSU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+61,"top u_EXU u_LSU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+62,"top u_EXU u_LSU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+77,"top u_EXU u_LSU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+79,"top u_EXU u_LSU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+63,"top u_EXU u_LSU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+64,"top u_EXU u_LSU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+65,"top u_EXU u_LSU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+66,"top u_EXU u_LSU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+73,"top u_EXU u_LSU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+67,"top u_EXU u_LSU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+68,"top u_EXU u_LSU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+75,"top u_EXU u_LSU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+69,"top u_EXU u_LSU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+70,"top u_EXU u_LSU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+417,"top u_EXU u_LSU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+419,"top u_EXU u_LSU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+73,"top u_EXU u_LSU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+421,"top u_EXU u_LSU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+422,"top u_EXU u_LSU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+423,"top u_EXU u_LSU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+424,"top u_EXU u_LSU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+425,"top u_EXU u_LSU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBus(c+553,"top u_EXU u_sysc ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top u_EXU u_sysc DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+533,"top u_EXU u_sysc clk", false,-1);
        tracep->declBit(c+534,"top u_EXU u_sysc rst_n", false,-1);
        tracep->declBit(c+303,"top u_EXU u_sysc sys_req", false,-1);
        tracep->declBit(c+426,"top u_EXU u_sysc csr", false,-1);
        tracep->declBit(c+427,"top u_EXU u_sysc ecall", false,-1);
        tracep->declBit(c+428,"top u_EXU u_sysc ebreak", false,-1);
        tracep->declBit(c+429,"top u_EXU u_sysc mret", false,-1);
        tracep->declBus(c+401,"top u_EXU u_sysc func3", false,-1, 2,0);
        tracep->declBit(c+409,"top u_EXU u_sysc dst_vld", false,-1);
        tracep->declQuad(c+7,"top u_EXU u_sysc pc", false,-1, 63,0);
        tracep->declQuad(c+26,"top u_EXU u_sysc src1", false,-1, 63,0);
        tracep->declQuad(c+20,"top u_EXU u_sysc imm", false,-1, 63,0);
        tracep->declBus(c+17,"top u_EXU u_sysc dst_id", false,-1, 4,0);
        tracep->declBit(c+304,"top u_EXU u_sysc csr_vld", false,-1);
        tracep->declQuad(c+35,"top u_EXU u_sysc csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+37,"top u_EXU u_sysc csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+34,"top u_EXU u_sysc csr_wb_vld", false,-1);
        tracep->declQuad(c+305,"top u_EXU u_sysc csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+307,"top u_EXU u_sysc csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+308,"top u_EXU u_sysc csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+310,"top u_EXU u_sysc csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+311,"top u_EXU u_sysc csrf_wen", false,-1);
        tracep->declBus(c+562,"top u_EXU u_sysc addr_mcause", false,-1, 11,0);
        tracep->declBus(c+563,"top u_EXU u_sysc addr_mstatus", false,-1, 11,0);
        tracep->declBus(c+564,"top u_EXU u_sysc addr_mepc", false,-1, 11,0);
        tracep->declBus(c+565,"top u_EXU u_sysc addr_mtvec", false,-1, 11,0);
        tracep->declBus(c+430,"top u_EXU u_sysc raddr", false,-1, 11,0);
        tracep->declQuad(c+308,"top u_EXU u_sysc wdata", false,-1, 63,0);
        tracep->declBus(c+431,"top u_EXU u_sysc waddr", false,-1, 11,0);
        tracep->declBit(c+311,"top u_EXU u_sysc wen", false,-1);
        tracep->declBus(c+566,"top u_EXU u_sysc INIT", false,-1, 1,0);
        tracep->declBus(c+567,"top u_EXU u_sysc WR1", false,-1, 1,0);
        tracep->declBus(c+568,"top u_EXU u_sysc WR2", false,-1, 1,0);
        tracep->declBus(c+432,"top u_EXU u_sysc state", false,-1, 1,0);
        tracep->declBus(c+433,"top u_EXU u_sysc nstate", false,-1, 1,0);
        tracep->declBus(c+553,"top u_EXU u_csrf ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top u_EXU u_csrf DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+533,"top u_EXU u_csrf clk", false,-1);
        tracep->declQuad(c+305,"top u_EXU u_csrf rdata", false,-1, 63,0);
        tracep->declBus(c+307,"top u_EXU u_csrf raddr", false,-1, 1,0);
        tracep->declQuad(c+308,"top u_EXU u_csrf wdata", false,-1, 63,0);
        tracep->declBus(c+310,"top u_EXU u_csrf waddr", false,-1, 1,0);
        tracep->declBit(c+311,"top u_EXU u_csrf wen", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+434+i*2,"top u_EXU u_csrf csrf", true,(i+0), 63,0);}}
        tracep->declBit(c+533,"top u_RMU clk", false,-1);
        tracep->declBit(c+534,"top u_RMU rst_n", false,-1);
        tracep->declBus(c+18,"top u_RMU rs1", false,-1, 4,0);
        tracep->declBus(c+19,"top u_RMU rs2", false,-1, 4,0);
        tracep->declQuad(c+26,"top u_RMU src1", false,-1, 63,0);
        tracep->declQuad(c+28,"top u_RMU src2", false,-1, 63,0);
        tracep->declBit(c+30,"top u_RMU alu_wb_vld", false,-1);
        tracep->declBus(c+31,"top u_RMU alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+32,"top u_RMU alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+34,"top u_RMU csr_wb_vld", false,-1);
        tracep->declQuad(c+35,"top u_RMU csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+37,"top u_RMU csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+38,"top u_RMU lsu_wb_vld", false,-1);
        tracep->declBus(c+39,"top u_RMU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"top u_RMU lsu_wb_data", false,-1, 63,0);
        tracep->declBit(c+442,"top u_RMU wb_vld", false,-1);
        tracep->declBus(c+443,"top u_RMU wb_addr", false,-1, 4,0);
        tracep->declQuad(c+444,"top u_RMU wb_data", false,-1, 63,0);
        tracep->declQuad(c+446,"top u_RMU grf_rdata1", false,-1, 63,0);
        tracep->declQuad(c+448,"top u_RMU grf_rdata2", false,-1, 63,0);
        tracep->declBus(c+18,"top u_RMU grf_raddr1", false,-1, 4,0);
        tracep->declBus(c+19,"top u_RMU grf_raddr2", false,-1, 4,0);
        tracep->declBus(c+549,"top u_RMU u1_gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+547,"top u_RMU u1_gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+533,"top u_RMU u1_gpr clk", false,-1);
        tracep->declQuad(c+446,"top u_RMU u1_gpr rdata1", false,-1, 63,0);
        tracep->declBus(c+18,"top u_RMU u1_gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+448,"top u_RMU u1_gpr rdata2", false,-1, 63,0);
        tracep->declBus(c+19,"top u_RMU u1_gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+444,"top u_RMU u1_gpr wdata", false,-1, 63,0);
        tracep->declBus(c+443,"top u_RMU u1_gpr waddr", false,-1, 4,0);
        tracep->declBit(c+442,"top u_RMU u1_gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+450+i*2,"top u_RMU u1_gpr rf", true,(i+0), 63,0);}}
        tracep->declBus(c+559,"top u_AXI_arbiter_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+559,"top u_AXI_arbiter_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+80,"top u_AXI_arbiter_SRAM in_channel", false,-1);
        tracep->declBit(c+533,"top u_AXI_arbiter_SRAM CLK", false,-1);
        tracep->declBit(c+534,"top u_AXI_arbiter_SRAM RESETN", false,-1);
        tracep->declQuad(c+52,"top u_AXI_arbiter_SRAM axi1_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+42,"top u_AXI_arbiter_SRAM axi1_AW_VALID", false,-1);
        tracep->declBit(c+43,"top u_AXI_arbiter_SRAM axi1_AW_READY", false,-1);
        tracep->declQuad(c+58,"top u_AXI_arbiter_SRAM axi1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+60,"top u_AXI_arbiter_SRAM axi1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+44,"top u_AXI_arbiter_SRAM axi1_W_VALID", false,-1);
        tracep->declBit(c+45,"top u_AXI_arbiter_SRAM axi1_W_READY", false,-1);
        tracep->declBit(c+46,"top u_AXI_arbiter_SRAM axi1_B_VALID", false,-1);
        tracep->declBit(c+47,"top u_AXI_arbiter_SRAM axi1_B_READY", false,-1);
        tracep->declQuad(c+54,"top u_AXI_arbiter_SRAM axi1_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+48,"top u_AXI_arbiter_SRAM axi1_AR_VALID", false,-1);
        tracep->declBit(c+49,"top u_AXI_arbiter_SRAM axi1_AR_READY", false,-1);
        tracep->declQuad(c+56,"top u_AXI_arbiter_SRAM axi1_R_DATA", false,-1, 63,0);
        tracep->declBit(c+50,"top u_AXI_arbiter_SRAM axi1_R_VALID", false,-1);
        tracep->declBit(c+51,"top u_AXI_arbiter_SRAM axi1_R_READY", false,-1);
        tracep->declQuad(c+71,"top u_AXI_arbiter_SRAM axi2_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+61,"top u_AXI_arbiter_SRAM axi2_AW_VALID", false,-1);
        tracep->declBit(c+62,"top u_AXI_arbiter_SRAM axi2_AW_READY", false,-1);
        tracep->declQuad(c+77,"top u_AXI_arbiter_SRAM axi2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+79,"top u_AXI_arbiter_SRAM axi2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+63,"top u_AXI_arbiter_SRAM axi2_W_VALID", false,-1);
        tracep->declBit(c+64,"top u_AXI_arbiter_SRAM axi2_W_READY", false,-1);
        tracep->declBit(c+65,"top u_AXI_arbiter_SRAM axi2_B_VALID", false,-1);
        tracep->declBit(c+66,"top u_AXI_arbiter_SRAM axi2_B_READY", false,-1);
        tracep->declQuad(c+73,"top u_AXI_arbiter_SRAM axi2_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+67,"top u_AXI_arbiter_SRAM axi2_AR_VALID", false,-1);
        tracep->declBit(c+68,"top u_AXI_arbiter_SRAM axi2_AR_READY", false,-1);
        tracep->declQuad(c+75,"top u_AXI_arbiter_SRAM axi2_R_DATA", false,-1, 63,0);
        tracep->declBit(c+69,"top u_AXI_arbiter_SRAM axi2_R_VALID", false,-1);
        tracep->declBit(c+70,"top u_AXI_arbiter_SRAM axi2_R_READY", false,-1);
        tracep->declBit(c+80,"top u_AXI_arbiter_SRAM channel", false,-1);
        tracep->declBit(c+514,"top u_AXI_arbiter_SRAM AW_VALID", false,-1);
        tracep->declBit(c+515,"top u_AXI_arbiter_SRAM W_VALID", false,-1);
        tracep->declBit(c+516,"top u_AXI_arbiter_SRAM B_READY", false,-1);
        tracep->declBit(c+517,"top u_AXI_arbiter_SRAM AR_VALID", false,-1);
        tracep->declBit(c+518,"top u_AXI_arbiter_SRAM R_READY", false,-1);
        tracep->declBit(c+519,"top u_AXI_arbiter_SRAM B_VALID", false,-1);
        tracep->declQuad(c+520,"top u_AXI_arbiter_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+522,"top u_AXI_arbiter_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+524,"top u_AXI_arbiter_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+526,"top u_AXI_arbiter_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+527,"top u_AXI_arbiter_SRAM AR_READY", false,-1);
        tracep->declBit(c+528,"top u_AXI_arbiter_SRAM R_VALID", false,-1);
        tracep->declBit(c+529,"top u_AXI_arbiter_SRAM AW_READY", false,-1);
        tracep->declBit(c+530,"top u_AXI_arbiter_SRAM W_READY", false,-1);
        tracep->declQuad(c+531,"top u_AXI_arbiter_SRAM R_DATA", false,-1, 63,0);
        tracep->declBus(c+559,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+559,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+533,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM CLK", false,-1);
        tracep->declBit(c+534,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM RESETN", false,-1);
        tracep->declQuad(c+520,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+514,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_VALID", false,-1);
        tracep->declBit(c+529,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_READY", false,-1);
        tracep->declQuad(c+524,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+526,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+515,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_VALID", false,-1);
        tracep->declBit(c+530,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_READY", false,-1);
        tracep->declBit(c+519,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_VALID", false,-1);
        tracep->declBit(c+516,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_READY", false,-1);
        tracep->declQuad(c+522,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+517,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_VALID", false,-1);
        tracep->declBit(c+527,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_READY", false,-1);
        tracep->declQuad(c+531,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+528,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_VALID", false,-1);
        tracep->declBit(c+518,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_READY", false,-1);
        tracep->declBus(c+569,"$unit inst_ecall", false,-1, 11,0);
        tracep->declBus(c+570,"$unit inst_mret", false,-1, 11,0);
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
    VlWide<3>/*95:0*/ __Vtemp74;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp77;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp86;
    VlWide<3>/*95:0*/ __Vtemp92;
    VlWide<3>/*95:0*/ __Vtemp94;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp101;
    VlWide<3>/*95:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp104;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->top__DOT__u_ifetch__DOT__rask));
        tracep->fullQData(oldp+2,(vlSelf->top__DOT__ifetch_inst_pc),64);
        tracep->fullQData(oldp+4,((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))),64);
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__dec_inst_vld));
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__dec_inst_pc),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__dec_inst),64);
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__exu_inst_vld));
        tracep->fullQData(oldp+12,(vlSelf->top__DOT__exu_inst_pc),64);
        tracep->fullQData(oldp+14,(vlSelf->top__DOT__exu_inst),64);
        tracep->fullBit(oldp+16,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d) 
                                  & (~ (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
                                           | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                          | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
                                         | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld))))));
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__rd),5);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__rs2),5);
        tracep->fullQData(oldp+20,(vlSelf->top__DOT__imm),64);
        tracep->fullIData(oldp+22,(vlSelf->top__DOT__op),32);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__inst_act),33);
        tracep->fullIData(oldp+25,(vlSelf->top__DOT__inst_type),18);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__src2),64);
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__alu_wb_vld));
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__alu_wb_addr),5);
        tracep->fullQData(oldp+32,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
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
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__csr_wb_vld));
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__csr_wb_data),64);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__csr_wb_addr),5);
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__lsu_wb_vld));
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r),5);
        tracep->fullQData(oldp+40,(((4U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
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
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__axis1_AW_READY));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__axis1_W_READY));
        tracep->fullBit(oldp+46,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+47,(vlSelf->top__DOT__axis1_B_READY));
        tracep->fullBit(oldp+48,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) 
                                  | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
        tracep->fullBit(oldp+49,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+50,(vlSelf->top__DOT__axis1_R_VALID));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__axis1_R_READY));
        tracep->fullQData(oldp+52,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                     ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullQData(oldp+56,(((IData)(vlSelf->top__DOT__in_channel)
                                     ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)),64);
        tracep->fullQData(oldp+58,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                     : 0ULL)),64);
        tracep->fullCData(oldp+60,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? (0xffU & (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                     : 0U)),8);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__axis2_AW_VALID));
        tracep->fullBit(oldp+62,(vlSelf->top__DOT__axis2_AW_READY));
        tracep->fullBit(oldp+63,(vlSelf->top__DOT__axis2_W_VALID));
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__axis2_W_READY));
        tracep->fullBit(oldp+65,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__axis2_B_READY));
        tracep->fullBit(oldp+67,(vlSelf->top__DOT__axis2_AR_VALID));
        tracep->fullBit(oldp+68,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__axis2_R_VALID));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__axis2_R_READY));
        tracep->fullQData(oldp+71,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__axis2_R_DATA),64);
        tracep->fullQData(oldp+77,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__src2
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                         : 0ULL))),64);
        tracep->fullCData(oldp+79,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
        tracep->fullBit(oldp+80,(vlSelf->top__DOT__in_channel));
        tracep->fullBit(oldp+81,(vlSelf->top__DOT__itrace_en));
        tracep->fullBit(oldp+82,(vlSelf->top__DOT__commit_vld));
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__commit_inst_pc),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__commit_inst),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__u_ifetch__DOT__pc_raddr),64);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__u_ifetch__DOT__pre_cnt),6);
        tracep->fullIData(oldp+90,(vlSelf->top__DOT__u_ifetch__DOT__inst),32);
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__u_ifetch__DOT__rreq));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__u_ifetch__DOT__icache_hit));
        tracep->fullBit(oldp+93,(vlSelf->top__DOT__u_ifetch__DOT__icache_inv));
        tracep->fullBit(oldp+94,(vlSelf->top__DOT__u_ifetch__DOT__icache_rep));
        tracep->fullBit(oldp+95,(vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq));
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr),64);
        tracep->fullWData(oldp+98,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA),256);
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_ASK));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ));
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK));
        tracep->fullBit(oldp+109,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
                                   & (IData)(vlSelf->top__DOT__axis1_W_READY))));
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR),64);
        tracep->fullWData(oldp+112,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry),1240);
        tracep->fullCData(oldp+151,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line),2);
        tracep->fullCData(oldp+152,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__state),2);
        tracep->fullCData(oldp+153,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state),2);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d),64);
        tracep->fullWData(oldp+156,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d),1240);
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wr));
        tracep->fullCData(oldp+196,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wadr),6);
        tracep->fullWData(oldp+197,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat),1240);
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rd));
        tracep->fullCData(oldp+237,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr),6);
        tracep->fullWData(oldp+238,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat),1240);
        tracep->fullIData(oldp+277,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+278,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+279,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__unnamedblk1__DOT__i),32);
        tracep->fullCData(oldp+280,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state),3);
        tracep->fullCData(oldp+281,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__next_state),3);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullCData(oldp+286,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+288,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullQData(oldp+289,(vlSelf->top__DOT__u_dec__DOT__inst_act_pre),33);
        tracep->fullIData(oldp+291,(vlSelf->top__DOT__u_dec__DOT__inst_type_pre),18);
        tracep->fullBit(oldp+292,(vlSelf->top__DOT__u_dec__DOT__ras_rd_link));
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__u_dec__DOT__ras_rs1_link));
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__u_dec__DOT__imm_pre),64);
        tracep->fullCData(oldp+296,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+297,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+298,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                      >> 0x14U)))),5);
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__u_EXU__DOT__bju_data_vld));
        tracep->fullBit(oldp+300,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
        tracep->fullBit(oldp+301,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
        tracep->fullBit(oldp+302,(vlSelf->top__DOT__u_EXU__DOT__st_req));
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
        tracep->fullBit(oldp+304,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
        tracep->fullQData(oldp+305,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
        tracep->fullCData(oldp+307,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
        tracep->fullQData(oldp+308,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
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
        tracep->fullCData(oldp+310,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
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
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
        tracep->fullBit(oldp+312,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d));
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out),64);
        tracep->fullQData(oldp+318,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out),64);
        tracep->fullBit(oldp+322,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d));
        tracep->fullBit(oldp+323,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d));
        tracep->fullBit(oldp+324,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req));
        tracep->fullBit(oldp+325,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir));
        tracep->fullBit(oldp+326,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xfU)))));
        tracep->fullCData(oldp+327,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt),6);
        tracep->fullQData(oldp+328,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req)
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
        __Vtemp74[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp74[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp74[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp76[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp76[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp76[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp77, __Vtemp74, __Vtemp76);
        tracep->fullQData(oldp+330,(((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x11U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__inst_act 
                                                        >> 0xdU)))
                                          ? ((1U & 
                                              ((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                  ? 
                                                 (7U 
                                                  & __Vtemp77[2U])
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
        tracep->fullQData(oldp+332,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1),64);
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
        tracep->fullBit(oldp+337,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req));
        tracep->fullQData(oldp+338,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum),64);
        __Vtemp83[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp83[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp83[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp85[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp85[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp85[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp86, __Vtemp83, __Vtemp85);
        tracep->fullBit(oldp+340,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                           ? (7U & 
                                              __Vtemp86[2U])
                                           : 0U) >> 2U))));
        __Vtemp92[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp92[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp92[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp94[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp94[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp94[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp95, __Vtemp92, __Vtemp94);
        tracep->fullBit(oldp+341,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                           ? (7U & 
                                              __Vtemp95[2U])
                                           : 0U) >> 1U))));
        tracep->fullQData(oldp+342,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)
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
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req));
        tracep->fullQData(oldp+345,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1),64);
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld));
        tracep->fullQData(oldp+348,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d)
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
        tracep->fullBit(oldp+350,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req));
        tracep->fullBit(oldp+351,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xdU)))));
        tracep->fullWData(oldp+352,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out),128);
        tracep->fullBit(oldp+356,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req));
        tracep->fullBit(oldp+357,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid));
        tracep->fullQData(oldp+358,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                      ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q)),64);
        tracep->fullQData(oldp+360,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)),64);
        tracep->fullQData(oldp+362,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d)
                                      ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                      : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                          ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))),64);
        tracep->fullBit(oldp+364,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xcU)))));
        tracep->fullQData(oldp+365,(((1U & (IData)(
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
        tracep->fullIData(oldp+367,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res),32);
        tracep->fullWData(oldp+368,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend),129);
        __Vtemp101[0U] = (((IData)((((QData)((IData)(
                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                           << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp101[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp101[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                 >> 0x1eU)) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                        >> 0x20U)) 
                                               >> 0x1fU));
        __Vtemp103[0U] = (((IData)((((QData)((IData)(
                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                           << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp103[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp103[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                 >> 0x1eU)) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                        >> 0x20U)) 
                                               >> 0x1fU));
        VL_ADD_W(3, __Vtemp104, __Vtemp101, __Vtemp103);
        tracep->fullBit(oldp+373,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                    ? (1U & __Vtemp104[0U])
                                    : 0U)));
        tracep->fullQData(oldp+374,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp),64);
        tracep->fullCData(oldp+376,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count),6);
        tracep->fullQData(oldp+377,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r),64);
        tracep->fullQData(oldp+381,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b),64);
        tracep->fullBit(oldp+383,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign));
        tracep->fullBit(oldp+384,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign));
        tracep->fullBit(oldp+385,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign));
        tracep->fullQData(oldp+386,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend),64);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor),64);
        tracep->fullWData(oldp+390,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add),65);
        tracep->fullQData(oldp+393,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2),64);
        tracep->fullBit(oldp+395,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy));
        tracep->fullBit(oldp+396,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
        tracep->fullBit(oldp+397,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+398,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+399,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+400,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 9U)))));
        tracep->fullCData(oldp+401,((7U & (IData)((vlSelf->top__DOT__inst_act 
                                                   >> 3U)))),3);
        tracep->fullBit(oldp+402,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre));
        tracep->fullQData(oldp+403,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre),64);
        tracep->fullQData(oldp+405,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1),64);
        tracep->fullQData(oldp+407,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum),64);
        tracep->fullBit(oldp+409,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 1U)))));
        tracep->fullCData(oldp+410,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d),3);
        tracep->fullBit(oldp+411,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
        tracep->fullQData(oldp+412,((vlSelf->top__DOT__src1 
                                     + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+414,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
        tracep->fullCData(oldp+416,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
        tracep->fullQData(oldp+417,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+419,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullCData(oldp+421,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+422,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+423,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+424,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+425,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullBit(oldp+426,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0xaU)))));
        tracep->fullBit(oldp+427,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 8U)))));
        tracep->fullBit(oldp+428,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 6U)))));
        tracep->fullBit(oldp+429,((1U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 7U)))));
        tracep->fullSData(oldp+430,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
        tracep->fullSData(oldp+431,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
        tracep->fullCData(oldp+432,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
        tracep->fullCData(oldp+433,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                      ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                               ? (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 8U)))
                                                   ? 3U
                                                   : 2U)
                                               : 2U))),2);
        tracep->fullQData(oldp+434,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
        tracep->fullQData(oldp+436,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
        tracep->fullQData(oldp+438,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
        tracep->fullQData(oldp+440,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
        tracep->fullBit(oldp+442,(vlSelf->top__DOT__u_RMU__DOT__wb_vld));
        tracep->fullCData(oldp+443,(vlSelf->top__DOT__u_RMU__DOT__wb_addr),5);
        tracep->fullQData(oldp+444,(vlSelf->top__DOT__u_RMU__DOT__wb_data),64);
        tracep->fullQData(oldp+446,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                    [vlSelf->top__DOT__rs1]),64);
        tracep->fullQData(oldp+448,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                    [vlSelf->top__DOT__rs2]),64);
        tracep->fullQData(oldp+450,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+452,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+454,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+456,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+458,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+460,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+462,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+464,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+466,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+468,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+470,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+472,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+474,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+476,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+478,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+480,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+482,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+484,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+486,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+488,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+490,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+492,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+494,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+496,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+498,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+500,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+502,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+504,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+506,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+508,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+510,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+512,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[31]),64);
        tracep->fullBit(oldp+514,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
        tracep->fullBit(oldp+515,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
        tracep->fullBit(oldp+516,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
        tracep->fullBit(oldp+517,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
        tracep->fullBit(oldp+518,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
        tracep->fullBit(oldp+519,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
        tracep->fullQData(oldp+520,(((IData)(vlSelf->top__DOT__in_channel)
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
        tracep->fullQData(oldp+522,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                          : 0ULL) : vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
        tracep->fullQData(oldp+524,(((IData)(vlSelf->top__DOT__in_channel)
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
        tracep->fullCData(oldp+526,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
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
        tracep->fullBit(oldp+527,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
        tracep->fullBit(oldp+528,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
        tracep->fullBit(oldp+529,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
        tracep->fullBit(oldp+530,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
        tracep->fullQData(oldp+531,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        tracep->fullBit(oldp+533,(vlSelf->clk));
        tracep->fullBit(oldp+534,(vlSelf->rst_n));
        tracep->fullCData(oldp+535,(vlSelf->jmp_type),8);
        tracep->fullBit(oldp+536,(vlSelf->ifetch_taken));
        tracep->fullQData(oldp+537,(vlSelf->ifetch_taken_pc),64);
        tracep->fullBit(oldp+539,(vlSelf->mainUpdate_valid));
        tracep->fullQData(oldp+540,(vlSelf->pc),64);
        tracep->fullBit(oldp+542,(0U));
        tracep->fullQData(oldp+543,(0ULL),64);
        tracep->fullCData(oldp+545,(0U),8);
        tracep->fullIData(oldp+546,(4U),32);
        tracep->fullIData(oldp+547,(0x40U),32);
        tracep->fullIData(oldp+548,(0x136U),32);
        tracep->fullIData(oldp+549,(5U),32);
        tracep->fullIData(oldp+550,(6U),32);
        tracep->fullIData(oldp+551,(0U),32);
        tracep->fullIData(oldp+552,(1U),32);
        tracep->fullIData(oldp+553,(2U),32);
        tracep->fullIData(oldp+554,(0x4d8U),32);
        tracep->fullIData(oldp+555,(8U),32);
        tracep->fullQData(oldp+556,(0xffffffffffffffe0ULL),64);
        tracep->fullIData(oldp+558,(3U),32);
        tracep->fullIData(oldp+559,(0x40U),32);
        tracep->fullBit(oldp+560,(1U));
        tracep->fullIData(oldp+561,(0x20U),32);
        tracep->fullSData(oldp+562,(0x342U),12);
        tracep->fullSData(oldp+563,(0x300U),12);
        tracep->fullSData(oldp+564,(0x341U),12);
        tracep->fullSData(oldp+565,(0x305U),12);
        tracep->fullCData(oldp+566,(0U),2);
        tracep->fullCData(oldp+567,(2U),2);
        tracep->fullCData(oldp+568,(3U),2);
        tracep->fullSData(oldp+569,(1U),12);
        tracep->fullSData(oldp+570,(2U),12);
    }
}
