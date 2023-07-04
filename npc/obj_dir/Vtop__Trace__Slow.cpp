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
        tracep->declBit(c+350,"clk", false,-1);
        tracep->declBit(c+351,"rst_n", false,-1);
        tracep->declBus(c+352,"jmp_type", false,-1, 7,0);
        tracep->declBit(c+353,"ifetch_taken", false,-1);
        tracep->declQuad(c+354,"ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+356,"mainUpdate_valid", false,-1);
        tracep->declQuad(c+357,"inst", false,-1, 63,0);
        tracep->declQuad(c+359,"pc", false,-1, 63,0);
        tracep->declBit(c+350,"top clk", false,-1);
        tracep->declBit(c+351,"top rst_n", false,-1);
        tracep->declBus(c+352,"top jmp_type", false,-1, 7,0);
        tracep->declBit(c+353,"top ifetch_taken", false,-1);
        tracep->declQuad(c+354,"top ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+356,"top mainUpdate_valid", false,-1);
        tracep->declQuad(c+357,"top inst", false,-1, 63,0);
        tracep->declQuad(c+359,"top pc", false,-1, 63,0);
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
        tracep->declQuad(c+18,"top inst_act", false,-1, 32,0);
        tracep->declBus(c+20,"top inst_type", false,-1, 17,0);
        tracep->declBit(c+21,"top axis1_AW_VALID", false,-1);
        tracep->declBit(c+22,"top axis1_AW_READY", false,-1);
        tracep->declBit(c+23,"top axis1_W_VALID", false,-1);
        tracep->declBit(c+24,"top axis1_W_READY", false,-1);
        tracep->declBit(c+25,"top axis1_B_VALID", false,-1);
        tracep->declBit(c+26,"top axis1_B_READY", false,-1);
        tracep->declBit(c+27,"top axis1_AR_VALID", false,-1);
        tracep->declBit(c+28,"top axis1_AR_READY", false,-1);
        tracep->declBit(c+29,"top axis1_R_VALID", false,-1);
        tracep->declBit(c+30,"top axis1_R_READY", false,-1);
        tracep->declQuad(c+31,"top axis1_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+33,"top axis1_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+35,"top axis1_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+37,"top axis1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+39,"top axis1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+40,"top axis2_AW_VALID", false,-1);
        tracep->declBit(c+41,"top axis2_AW_READY", false,-1);
        tracep->declBit(c+42,"top axis2_W_VALID", false,-1);
        tracep->declBit(c+43,"top axis2_W_READY", false,-1);
        tracep->declBit(c+44,"top axis2_B_VALID", false,-1);
        tracep->declBit(c+45,"top axis2_B_READY", false,-1);
        tracep->declBit(c+46,"top axis2_AR_VALID", false,-1);
        tracep->declBit(c+47,"top axis2_AR_READY", false,-1);
        tracep->declBit(c+48,"top axis2_R_VALID", false,-1);
        tracep->declBit(c+49,"top axis2_R_READY", false,-1);
        tracep->declQuad(c+50,"top axis2_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+52,"top axis2_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+54,"top axis2_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+56,"top axis2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+58,"top axis2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+59,"top in_channel", false,-1);
        tracep->declBit(c+60,"top itrace_en", false,-1);
        tracep->declBit(c+350,"top u_IFU clk", false,-1);
        tracep->declBit(c+351,"top u_IFU rst_n", false,-1);
        tracep->declBit(c+10,"top u_IFU IFU_vld", false,-1);
        tracep->declQuad(c+1,"top u_IFU IFU_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_IFU IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+354,"top u_IFU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+353,"top u_IFU ifetch_taken", false,-1);
        tracep->declBit(c+9,"top u_IFU ifetch_req", false,-1);
        tracep->declQuad(c+31,"top u_IFU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+21,"top u_IFU axi_AW_VALID", false,-1);
        tracep->declBit(c+22,"top u_IFU axi_AW_READY", false,-1);
        tracep->declQuad(c+37,"top u_IFU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+39,"top u_IFU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+23,"top u_IFU axi_W_VALID", false,-1);
        tracep->declBit(c+24,"top u_IFU axi_W_READY", false,-1);
        tracep->declBit(c+25,"top u_IFU axi_B_VALID", false,-1);
        tracep->declBit(c+26,"top u_IFU axi_B_READY", false,-1);
        tracep->declQuad(c+33,"top u_IFU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+27,"top u_IFU axi_AR_VALID", false,-1);
        tracep->declBit(c+28,"top u_IFU axi_AR_READY", false,-1);
        tracep->declQuad(c+35,"top u_IFU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+29,"top u_IFU axi_R_VALID", false,-1);
        tracep->declBit(c+30,"top u_IFU axi_R_READY", false,-1);
        tracep->declQuad(c+61,"top u_IFU ifetch_pc", false,-1, 63,0);
        tracep->declBus(c+63,"top u_IFU pre_cnt", false,-1, 5,0);
        tracep->declQuad(c+35,"top u_IFU mem_inst64", false,-1, 63,0);
        tracep->declBit(c+10,"top u_IFU rask", false,-1);
        tracep->declBit(c+64,"top u_IFU rreq", false,-1);
        tracep->declBus(c+361,"top u_IFU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+361,"top u_IFU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+362,"top u_IFU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+363,"top u_IFU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+363,"top u_IFU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+365,"top u_IFU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+64,"top u_IFU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+61,"top u_IFU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+35,"top u_IFU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+350,"top u_IFU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+351,"top u_IFU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+31,"top u_IFU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+21,"top u_IFU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+22,"top u_IFU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+37,"top u_IFU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+39,"top u_IFU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+23,"top u_IFU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+24,"top u_IFU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+25,"top u_IFU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+26,"top u_IFU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+33,"top u_IFU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+27,"top u_IFU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+28,"top u_IFU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+35,"top u_IFU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+29,"top u_IFU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+30,"top u_IFU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+65,"top u_IFU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+67,"top u_IFU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+69,"top u_IFU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+71,"top u_IFU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+21,"top u_IFU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+23,"top u_IFU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+72,"top u_IFU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+73,"top u_IFU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBit(c+350,"top u_IDU clk", false,-1);
        tracep->declBit(c+351,"top u_IDU rst_n", false,-1);
        tracep->declBit(c+10,"top u_IDU IFU_vld", false,-1);
        tracep->declQuad(c+5,"top u_IDU IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_IDU IFU_pc", false,-1, 63,0);
        tracep->declBus(c+12,"top u_IDU rd", false,-1, 4,0);
        tracep->declBus(c+13,"top u_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_IDU rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_IDU imm", false,-1, 63,0);
        tracep->declQuad(c+18,"top u_IDU inst_act", false,-1, 32,0);
        tracep->declBus(c+20,"top u_IDU inst_type", false,-1, 17,0);
        tracep->declBus(c+17,"top u_IDU op", false,-1, 31,0);
        tracep->declBit(c+11,"top u_IDU IDU_vld", false,-1);
        tracep->declQuad(c+3,"top u_IDU IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_IDU IDU_inst", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_IDU inst", false,-1, 63,0);
        tracep->declQuad(c+74,"top u_IDU inst_act_pre", false,-1, 32,0);
        tracep->declBus(c+76,"top u_IDU inst_type_pre", false,-1, 17,0);
        tracep->declBit(c+77,"top u_IDU ras_rd_link", false,-1);
        tracep->declBit(c+78,"top u_IDU ras_rs1_link", false,-1);
        tracep->declQuad(c+79,"top u_IDU imm_pre", false,-1, 63,0);
        tracep->declBus(c+81,"top u_IDU rd_pre", false,-1, 4,0);
        tracep->declBus(c+82,"top u_IDU rs1_pre", false,-1, 4,0);
        tracep->declBus(c+83,"top u_IDU rs2_pre", false,-1, 4,0);
        tracep->declBit(c+350,"top u_EXU clk", false,-1);
        tracep->declBit(c+351,"top u_EXU rst_n", false,-1);
        tracep->declBus(c+12,"top u_EXU i_rd", false,-1, 4,0);
        tracep->declBus(c+13,"top u_EXU i_rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_EXU i_rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_EXU i_imm", false,-1, 63,0);
        tracep->declBus(c+17,"top u_EXU i_op", false,-1, 31,0);
        tracep->declQuad(c+18,"top u_EXU i_inst_act", false,-1, 32,0);
        tracep->declBit(c+11,"top u_EXU IDU_vld", false,-1);
        tracep->declQuad(c+3,"top u_EXU IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_EXU IDU_inst", false,-1, 63,0);
        tracep->declBit(c+353,"top u_EXU ifetch_taken", false,-1);
        tracep->declQuad(c+354,"top u_EXU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+9,"top u_EXU ifetch_req", false,-1);
        tracep->declQuad(c+50,"top u_EXU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+40,"top u_EXU axi_AW_VALID", false,-1);
        tracep->declBit(c+41,"top u_EXU axi_AW_READY", false,-1);
        tracep->declQuad(c+56,"top u_EXU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+58,"top u_EXU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+42,"top u_EXU axi_W_VALID", false,-1);
        tracep->declBit(c+43,"top u_EXU axi_W_READY", false,-1);
        tracep->declBit(c+44,"top u_EXU axi_B_VALID", false,-1);
        tracep->declBit(c+45,"top u_EXU axi_B_READY", false,-1);
        tracep->declQuad(c+52,"top u_EXU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+46,"top u_EXU axi_AR_VALID", false,-1);
        tracep->declBit(c+47,"top u_EXU axi_AR_READY", false,-1);
        tracep->declQuad(c+54,"top u_EXU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+48,"top u_EXU axi_R_VALID", false,-1);
        tracep->declBit(c+49,"top u_EXU axi_R_READY", false,-1);
        tracep->declBus(c+84,"top u_EXU rd_r", false,-1, 4,0);
        tracep->declBus(c+85,"top u_EXU rs1_r", false,-1, 4,0);
        tracep->declBus(c+86,"top u_EXU rs2_r", false,-1, 4,0);
        tracep->declQuad(c+87,"top u_EXU imm_r", false,-1, 63,0);
        tracep->declBus(c+89,"top u_EXU op_r", false,-1, 31,0);
        tracep->declQuad(c+90,"top u_EXU inst_act_r", false,-1, 32,0);
        tracep->declQuad(c+92,"top u_EXU pc_r", false,-1, 63,0);
        tracep->declQuad(c+94,"top u_EXU inst_r", false,-1, 63,0);
        tracep->declBus(c+96,"top u_EXU rd", false,-1, 4,0);
        tracep->declBus(c+97,"top u_EXU rs1", false,-1, 4,0);
        tracep->declBus(c+98,"top u_EXU rs2", false,-1, 4,0);
        tracep->declQuad(c+99,"top u_EXU imm", false,-1, 63,0);
        tracep->declBus(c+101,"top u_EXU op", false,-1, 31,0);
        tracep->declQuad(c+102,"top u_EXU inst_act", false,-1, 32,0);
        tracep->declQuad(c+104,"top u_EXU pc", false,-1, 63,0);
        tracep->declQuad(c+106,"top u_EXU inst", false,-1, 63,0);
        tracep->declBit(c+108,"top u_EXU alu_wb_vld", false,-1);
        tracep->declBus(c+109,"top u_EXU alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"top u_EXU alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+112,"top u_EXU alu_req", false,-1);
        tracep->declQuad(c+113,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU src2", false,-1, 63,0);
        tracep->declBit(c+117,"top u_EXU wb_vld", false,-1);
        tracep->declBus(c+118,"top u_EXU wb_addr", false,-1, 4,0);
        tracep->declQuad(c+119,"top u_EXU wb_data", false,-1, 63,0);
        tracep->declBit(c+121,"top u_EXU bmu_vld", false,-1);
        tracep->declBit(c+122,"top u_EXU lsu_wb_vld", false,-1);
        tracep->declBus(c+123,"top u_EXU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"top u_EXU lsu_wb_data", false,-1, 63,0);
        tracep->declBit(c+126,"top u_EXU lsu_data_vld", false,-1);
        tracep->declBit(c+127,"top u_EXU ld_req", false,-1);
        tracep->declBit(c+128,"top u_EXU st_req", false,-1);
        tracep->declBit(c+129,"top u_EXU sys_req", false,-1);
        tracep->declBit(c+130,"top u_EXU csr_data_vld", false,-1);
        tracep->declQuad(c+131,"top u_EXU csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+133,"top u_EXU csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+134,"top u_EXU csr_wb_vld", false,-1);
        tracep->declQuad(c+135,"top u_EXU csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+137,"top u_EXU csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+138,"top u_EXU csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+140,"top u_EXU csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+141,"top u_EXU csrf_wen", false,-1);
        tracep->declBit(c+350,"top u_EXU u_alu clk", false,-1);
        tracep->declBit(c+351,"top u_EXU u_alu rst_n", false,-1);
        tracep->declBit(c+112,"top u_EXU u_alu alu_req", false,-1);
        tracep->declBus(c+101,"top u_EXU u_alu op", false,-1, 31,0);
        tracep->declQuad(c+102,"top u_EXU u_alu inst_act", false,-1, 32,0);
        tracep->declBus(c+96,"top u_EXU u_alu dst_id", false,-1, 4,0);
        tracep->declQuad(c+113,"top u_EXU u_alu src1", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_alu src2", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_EXU u_alu imm", false,-1, 63,0);
        tracep->declQuad(c+104,"top u_EXU u_alu pc", false,-1, 63,0);
        tracep->declBit(c+108,"top u_EXU u_alu alu_wb_vld", false,-1);
        tracep->declBus(c+109,"top u_EXU u_alu alu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"top u_EXU u_alu alu_wb_data", false,-1, 63,0);
        tracep->declBit(c+142,"top u_EXU u_alu mul_valid", false,-1);
        tracep->declBit(c+143,"top u_EXU u_alu div_valid", false,-1);
        tracep->declBit(c+144,"top u_EXU u_alu mini_alu_valid", false,-1);
        tracep->declBit(c+145,"top u_EXU u_alu mul_out_valid", false,-1);
        tracep->declQuad(c+146,"top u_EXU u_alu mul_result_h", false,-1, 63,0);
        tracep->declQuad(c+148,"top u_EXU u_alu mul_result_l", false,-1, 63,0);
        tracep->declQuad(c+148,"top u_EXU u_alu mul_result", false,-1, 63,0);
        tracep->declBit(c+150,"top u_EXU u_alu div_out_valid", false,-1);
        tracep->declQuad(c+151,"top u_EXU u_alu quotient", false,-1, 63,0);
        tracep->declQuad(c+153,"top u_EXU u_alu remainder", false,-1, 63,0);
        tracep->declQuad(c+155,"top u_EXU u_alu div_result", false,-1, 63,0);
        tracep->declBit(c+366,"top u_EXU u_alu alu_vld", false,-1);
        tracep->declQuad(c+367,"top u_EXU u_alu alu_data", false,-1, 63,0);
        tracep->declBit(c+157,"top u_EXU u_alu mini_alu_out_vld", false,-1);
        tracep->declQuad(c+158,"top u_EXU u_alu mini_alu_result", false,-1, 63,0);
        tracep->declBit(c+160,"top u_EXU u_alu shift_dir", false,-1);
        tracep->declBit(c+161,"top u_EXU u_alu shift_mode", false,-1);
        tracep->declBus(c+162,"top u_EXU u_alu shift_shamt", false,-1, 5,0);
        tracep->declQuad(c+163,"top u_EXU u_alu shift_result", false,-1, 63,0);
        tracep->declQuad(c+165,"top u_EXU u_alu add_result", false,-1, 63,0);
        tracep->declQuad(c+167,"top u_EXU u_alu adder_src0", false,-1, 63,0);
        tracep->declQuad(c+169,"top u_EXU u_alu adder_src1", false,-1, 63,0);
        tracep->declBit(c+171,"top u_EXU u_alu adder_AorS", false,-1);
        tracep->declBit(c+172,"top u_EXU u_alu exe_add", false,-1);
        tracep->declQuad(c+173,"top u_EXU u_alu adder_sum", false,-1, 63,0);
        tracep->declBit(c+175,"top u_EXU u_alu adder_co", false,-1);
        tracep->declBit(c+176,"top u_EXU u_alu adder_sign", false,-1);
        tracep->declBit(c+350,"top u_EXU u_alu u_mul clk", false,-1);
        tracep->declBit(c+351,"top u_EXU u_alu u_mul rst_n", false,-1);
        tracep->declBit(c+142,"top u_EXU u_alu u_mul mul_valid", false,-1);
        tracep->declQuad(c+113,"top u_EXU u_alu u_mul multiplicand", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_alu u_mul multiplier", false,-1, 63,0);
        tracep->declBit(c+145,"top u_EXU u_alu u_mul out_valid", false,-1);
        tracep->declQuad(c+146,"top u_EXU u_alu u_mul result_h", false,-1, 63,0);
        tracep->declQuad(c+148,"top u_EXU u_alu u_mul result_l", false,-1, 63,0);
        tracep->declBus(c+177,"top u_EXU u_alu u_mul cnt", false,-1, 6,0);
        tracep->declQuad(c+178,"top u_EXU u_alu u_mul multiplicand_r", false,-1, 63,0);
        tracep->declQuad(c+180,"top u_EXU u_alu u_mul multiplier_r", false,-1, 63,0);
        tracep->declArray(c+182,"top u_EXU u_alu u_mul result_reg", false,-1, 127,0);
        tracep->declBit(c+350,"top u_EXU u_alu u_div clk", false,-1);
        tracep->declBit(c+351,"top u_EXU u_alu u_div rst_n", false,-1);
        tracep->declBit(c+186,"top u_EXU u_alu u_div sign_div", false,-1);
        tracep->declBit(c+187,"top u_EXU u_alu u_div divw", false,-1);
        tracep->declQuad(c+113,"top u_EXU u_alu u_div dividend", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_alu u_div divisor", false,-1, 63,0);
        tracep->declBit(c+143,"top u_EXU u_alu u_div div_valid", false,-1);
        tracep->declQuad(c+151,"top u_EXU u_alu u_div quotient", false,-1, 63,0);
        tracep->declQuad(c+153,"top u_EXU u_alu u_div remainder", false,-1, 63,0);
        tracep->declBit(c+150,"top u_EXU u_alu u_div out_valid", false,-1);
        tracep->declBus(c+188,"top u_EXU u_alu u_div count", false,-1, 5,0);
        tracep->declQuad(c+189,"top u_EXU u_alu u_div reg_q", false,-1, 63,0);
        tracep->declQuad(c+191,"top u_EXU u_alu u_div reg_r", false,-1, 63,0);
        tracep->declQuad(c+193,"top u_EXU u_alu u_div reg_b", false,-1, 63,0);
        tracep->declBit(c+195,"top u_EXU u_alu u_div r_sign", false,-1);
        tracep->declBit(c+196,"top u_EXU u_alu u_div dividend_sign", false,-1);
        tracep->declBit(c+197,"top u_EXU u_alu u_div divisor_sign", false,-1);
        tracep->declQuad(c+198,"top u_EXU u_alu u_div op_dividend", false,-1, 63,0);
        tracep->declQuad(c+200,"top u_EXU u_alu u_div op_divisor", false,-1, 63,0);
        tracep->declArray(c+202,"top u_EXU u_alu u_div sub_add", false,-1, 64,0);
        tracep->declQuad(c+205,"top u_EXU u_alu u_div reg_r2", false,-1, 63,0);
        tracep->declBit(c+207,"top u_EXU u_alu u_div busy", false,-1);
        tracep->declBit(c+208,"top u_EXU u_alu u_div busy_r", false,-1);
        tracep->declQuad(c+113,"top u_EXU u_alu alu_shift shift_data_in", false,-1, 63,0);
        tracep->declBit(c+369,"top u_EXU u_alu alu_shift shift_data_tc", false,-1);
        tracep->declBus(c+162,"top u_EXU u_alu alu_shift shift_sh", false,-1, 5,0);
        tracep->declBit(c+161,"top u_EXU u_alu alu_shift shift_sh_mode", false,-1);
        tracep->declBit(c+160,"top u_EXU u_alu alu_shift shift_dir", false,-1);
        tracep->declBit(c+187,"top u_EXU u_alu alu_shift w_inst", false,-1);
        tracep->declQuad(c+163,"top u_EXU u_alu alu_shift shift_data_out", false,-1, 63,0);
        tracep->declQuad(c+209,"top u_EXU u_alu alu_shift shift_res", false,-1, 63,0);
        tracep->declBus(c+211,"top u_EXU u_alu alu_shift w_inst_shift_res", false,-1, 31,0);
        tracep->declBus(c+370,"top u_EXU u_alu alu_add WIDTH", false,-1, 31,0);
        tracep->declQuad(c+169,"top u_EXU u_alu alu_add adder_src1", false,-1, 63,0);
        tracep->declQuad(c+167,"top u_EXU u_alu alu_add adder_src0", false,-1, 63,0);
        tracep->declBit(c+369,"top u_EXU u_alu alu_add adder_src1_vld", false,-1);
        tracep->declBit(c+369,"top u_EXU u_alu alu_add adder_src0_vld", false,-1);
        tracep->declBit(c+186,"top u_EXU u_alu alu_add sign", false,-1);
        tracep->declBit(c+187,"top u_EXU u_alu alu_add w_inst", false,-1);
        tracep->declBit(c+171,"top u_EXU u_alu alu_add adder_AorS", false,-1);
        tracep->declBit(c+172,"top u_EXU u_alu alu_add exe_add", false,-1);
        tracep->declQuad(c+173,"top u_EXU u_alu alu_add adder_sum", false,-1, 63,0);
        tracep->declBit(c+175,"top u_EXU u_alu alu_add adder_co", false,-1);
        tracep->declBit(c+176,"top u_EXU u_alu alu_add adder_sign", false,-1);
        tracep->declBus(c+371,"top u_EXU u_alu alu_add H_WIDTH", false,-1, 31,0);
        tracep->declArray(c+212,"top u_EXU u_alu alu_add addend", false,-1, 128,0);
        tracep->declBit(c+217,"top u_EXU u_alu alu_add s0", false,-1);
        tracep->declQuad(c+218,"top u_EXU u_alu alu_add adder_sum_temp", false,-1, 63,0);
        tracep->declBus(c+372,"top u_EXU u_gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_EXU u_gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+350,"top u_EXU u_gpr clk", false,-1);
        tracep->declQuad(c+113,"top u_EXU u_gpr rdata1", false,-1, 63,0);
        tracep->declBus(c+97,"top u_EXU u_gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+115,"top u_EXU u_gpr rdata2", false,-1, 63,0);
        tracep->declBus(c+98,"top u_EXU u_gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+119,"top u_EXU u_gpr wdata", false,-1, 63,0);
        tracep->declBus(c+118,"top u_EXU u_gpr waddr", false,-1, 4,0);
        tracep->declBit(c+117,"top u_EXU u_gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+220+i*2,"top u_EXU u_gpr rf", true,(i+0), 63,0);}}
        tracep->declBit(c+350,"top u_EXU u_BMU clk", false,-1);
        tracep->declBit(c+351,"top u_EXU u_BMU rst_n", false,-1);
        tracep->declBit(c+11,"top u_EXU u_BMU IDU_vld", false,-1);
        tracep->declBit(c+284,"top u_EXU u_BMU jal", false,-1);
        tracep->declBit(c+285,"top u_EXU u_BMU jalr", false,-1);
        tracep->declBit(c+286,"top u_EXU u_BMU br", false,-1);
        tracep->declBit(c+287,"top u_EXU u_BMU syscall", false,-1);
        tracep->declBus(c+288,"top u_EXU u_BMU func3", false,-1, 2,0);
        tracep->declQuad(c+104,"top u_EXU u_BMU pc", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_EXU u_BMU src1", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_BMU src2", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_EXU u_BMU imm", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_EXU u_BMU rCSR", false,-1, 63,0);
        tracep->declBit(c+353,"top u_EXU u_BMU ifetch_taken", false,-1);
        tracep->declQuad(c+354,"top u_EXU u_BMU ifetch_taken_pc", false,-1, 63,0);
        tracep->declBit(c+121,"top u_EXU u_BMU bmu_vld", false,-1);
        tracep->declBit(c+289,"top u_EXU u_BMU ifetch_taken_pre", false,-1);
        tracep->declQuad(c+290,"top u_EXU u_BMU ifetch_taken_pc_pre", false,-1, 63,0);
        tracep->declQuad(c+292,"top u_EXU u_BMU add_src1", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_EXU u_BMU add_src2", false,-1, 63,0);
        tracep->declQuad(c+294,"top u_EXU u_BMU add_sum", false,-1, 63,0);
        tracep->declBit(c+350,"top u_EXU u_LSU clk", false,-1);
        tracep->declBit(c+351,"top u_EXU u_LSU rst_n", false,-1);
        tracep->declBit(c+127,"top u_EXU u_LSU ld_req", false,-1);
        tracep->declBit(c+128,"top u_EXU u_LSU st_req", false,-1);
        tracep->declBus(c+288,"top u_EXU u_LSU func3", false,-1, 2,0);
        tracep->declQuad(c+113,"top u_EXU u_LSU src1", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_LSU src2", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_EXU u_LSU imm", false,-1, 63,0);
        tracep->declBus(c+96,"top u_EXU u_LSU dst_id", false,-1, 4,0);
        tracep->declBit(c+126,"top u_EXU u_LSU lsu_data_vld", false,-1);
        tracep->declBit(c+122,"top u_EXU u_LSU lsu_wb_vld", false,-1);
        tracep->declBus(c+123,"top u_EXU u_LSU lsu_wb_addr", false,-1, 4,0);
        tracep->declQuad(c+124,"top u_EXU u_LSU lsu_wb_data", false,-1, 63,0);
        tracep->declQuad(c+50,"top u_EXU u_LSU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+40,"top u_EXU u_LSU axi_AW_VALID", false,-1);
        tracep->declBit(c+41,"top u_EXU u_LSU axi_AW_READY", false,-1);
        tracep->declQuad(c+56,"top u_EXU u_LSU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+58,"top u_EXU u_LSU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+42,"top u_EXU u_LSU axi_W_VALID", false,-1);
        tracep->declBit(c+43,"top u_EXU u_LSU axi_W_READY", false,-1);
        tracep->declBit(c+44,"top u_EXU u_LSU axi_B_VALID", false,-1);
        tracep->declBit(c+45,"top u_EXU u_LSU axi_B_READY", false,-1);
        tracep->declQuad(c+52,"top u_EXU u_LSU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+46,"top u_EXU u_LSU axi_AR_VALID", false,-1);
        tracep->declBit(c+47,"top u_EXU u_LSU axi_AR_READY", false,-1);
        tracep->declQuad(c+54,"top u_EXU u_LSU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+48,"top u_EXU u_LSU axi_R_VALID", false,-1);
        tracep->declBit(c+49,"top u_EXU u_LSU axi_R_READY", false,-1);
        tracep->declBit(c+296,"top u_EXU u_LSU ld_req_r", false,-1);
        tracep->declBit(c+297,"top u_EXU u_LSU st_req_r", false,-1);
        tracep->declBus(c+123,"top u_EXU u_LSU dst_id_r", false,-1, 4,0);
        tracep->declQuad(c+298,"top u_EXU u_LSU raddrM", false,-1, 63,0);
        tracep->declQuad(c+54,"top u_EXU u_LSU rdataM", false,-1, 63,0);
        tracep->declQuad(c+300,"top u_EXU u_LSU waddrM", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_LSU wdataM", false,-1, 63,0);
        tracep->declBus(c+302,"top u_EXU u_LSU wmaskM", false,-1, 7,0);
        tracep->declBit(c+128,"top u_EXU u_LSU wenM", false,-1);
        tracep->declBit(c+127,"top u_EXU u_LSU renM", false,-1);
        tracep->declBit(c+303,"top u_EXU u_LSU dataM_valid", false,-1);
        tracep->declBus(c+361,"top u_EXU u_LSU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+361,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+128,"top u_EXU u_LSU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+300,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+302,"top u_EXU u_LSU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+127,"top u_EXU u_LSU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+298,"top u_EXU u_LSU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+54,"top u_EXU u_LSU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+350,"top u_EXU u_LSU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+351,"top u_EXU u_LSU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+50,"top u_EXU u_LSU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+40,"top u_EXU u_LSU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+41,"top u_EXU u_LSU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+56,"top u_EXU u_LSU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+58,"top u_EXU u_LSU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+42,"top u_EXU u_LSU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+43,"top u_EXU u_LSU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+44,"top u_EXU u_LSU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+45,"top u_EXU u_LSU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+52,"top u_EXU u_LSU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+46,"top u_EXU u_LSU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+47,"top u_EXU u_LSU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+54,"top u_EXU u_LSU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+48,"top u_EXU u_LSU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+49,"top u_EXU u_LSU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+304,"top u_EXU u_LSU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+306,"top u_EXU u_LSU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+308,"top u_EXU u_LSU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+310,"top u_EXU u_LSU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+311,"top u_EXU u_LSU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+312,"top u_EXU u_LSU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+313,"top u_EXU u_LSU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+314,"top u_EXU u_LSU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBus(c+373,"top u_EXU u_sysc ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_EXU u_sysc DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+350,"top u_EXU u_sysc clk", false,-1);
        tracep->declBit(c+351,"top u_EXU u_sysc rst_n", false,-1);
        tracep->declBit(c+129,"top u_EXU u_sysc sys_req", false,-1);
        tracep->declBit(c+315,"top u_EXU u_sysc csr", false,-1);
        tracep->declBit(c+316,"top u_EXU u_sysc ecall", false,-1);
        tracep->declBit(c+317,"top u_EXU u_sysc ebreak", false,-1);
        tracep->declBit(c+318,"top u_EXU u_sysc mret", false,-1);
        tracep->declBus(c+288,"top u_EXU u_sysc func3", false,-1, 2,0);
        tracep->declQuad(c+104,"top u_EXU u_sysc pc", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_EXU u_sysc src1", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_EXU u_sysc imm", false,-1, 63,0);
        tracep->declBus(c+96,"top u_EXU u_sysc dst_id", false,-1, 4,0);
        tracep->declBit(c+130,"top u_EXU u_sysc csr_vld", false,-1);
        tracep->declQuad(c+131,"top u_EXU u_sysc csr_wb_data", false,-1, 63,0);
        tracep->declBus(c+133,"top u_EXU u_sysc csr_wb_addr", false,-1, 4,0);
        tracep->declBit(c+134,"top u_EXU u_sysc csr_wb_vld", false,-1);
        tracep->declQuad(c+135,"top u_EXU u_sysc csrf_rdata", false,-1, 63,0);
        tracep->declBus(c+137,"top u_EXU u_sysc csrf_raddr", false,-1, 1,0);
        tracep->declQuad(c+138,"top u_EXU u_sysc csrf_wdata", false,-1, 63,0);
        tracep->declBus(c+140,"top u_EXU u_sysc csrf_waddr", false,-1, 1,0);
        tracep->declBit(c+141,"top u_EXU u_sysc csrf_wen", false,-1);
        tracep->declBus(c+374,"top u_EXU u_sysc addr_mcause", false,-1, 11,0);
        tracep->declBus(c+375,"top u_EXU u_sysc addr_mstatus", false,-1, 11,0);
        tracep->declBus(c+376,"top u_EXU u_sysc addr_mepc", false,-1, 11,0);
        tracep->declBus(c+377,"top u_EXU u_sysc addr_mtvec", false,-1, 11,0);
        tracep->declBus(c+319,"top u_EXU u_sysc raddr", false,-1, 11,0);
        tracep->declQuad(c+138,"top u_EXU u_sysc wdata", false,-1, 63,0);
        tracep->declBus(c+320,"top u_EXU u_sysc waddr", false,-1, 11,0);
        tracep->declBit(c+141,"top u_EXU u_sysc wen", false,-1);
        tracep->declBus(c+378,"top u_EXU u_sysc INIT", false,-1, 1,0);
        tracep->declBus(c+379,"top u_EXU u_sysc WR1", false,-1, 1,0);
        tracep->declBus(c+380,"top u_EXU u_sysc WR2", false,-1, 1,0);
        tracep->declBus(c+321,"top u_EXU u_sysc state", false,-1, 1,0);
        tracep->declBus(c+322,"top u_EXU u_sysc nstate", false,-1, 1,0);
        tracep->declBus(c+373,"top u_EXU u_csrf ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+370,"top u_EXU u_csrf DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+350,"top u_EXU u_csrf clk", false,-1);
        tracep->declQuad(c+135,"top u_EXU u_csrf rdata", false,-1, 63,0);
        tracep->declBus(c+137,"top u_EXU u_csrf raddr", false,-1, 1,0);
        tracep->declQuad(c+138,"top u_EXU u_csrf wdata", false,-1, 63,0);
        tracep->declBus(c+140,"top u_EXU u_csrf waddr", false,-1, 1,0);
        tracep->declBit(c+141,"top u_EXU u_csrf wen", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+323+i*2,"top u_EXU u_csrf csrf", true,(i+0), 63,0);}}
        tracep->declBus(c+361,"top u_AXI_arbiter_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+361,"top u_AXI_arbiter_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+59,"top u_AXI_arbiter_SRAM in_channel", false,-1);
        tracep->declBit(c+350,"top u_AXI_arbiter_SRAM CLK", false,-1);
        tracep->declBit(c+351,"top u_AXI_arbiter_SRAM RESETN", false,-1);
        tracep->declQuad(c+31,"top u_AXI_arbiter_SRAM axi1_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+21,"top u_AXI_arbiter_SRAM axi1_AW_VALID", false,-1);
        tracep->declBit(c+22,"top u_AXI_arbiter_SRAM axi1_AW_READY", false,-1);
        tracep->declQuad(c+37,"top u_AXI_arbiter_SRAM axi1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+39,"top u_AXI_arbiter_SRAM axi1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+23,"top u_AXI_arbiter_SRAM axi1_W_VALID", false,-1);
        tracep->declBit(c+24,"top u_AXI_arbiter_SRAM axi1_W_READY", false,-1);
        tracep->declBit(c+25,"top u_AXI_arbiter_SRAM axi1_B_VALID", false,-1);
        tracep->declBit(c+26,"top u_AXI_arbiter_SRAM axi1_B_READY", false,-1);
        tracep->declQuad(c+33,"top u_AXI_arbiter_SRAM axi1_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+27,"top u_AXI_arbiter_SRAM axi1_AR_VALID", false,-1);
        tracep->declBit(c+28,"top u_AXI_arbiter_SRAM axi1_AR_READY", false,-1);
        tracep->declQuad(c+35,"top u_AXI_arbiter_SRAM axi1_R_DATA", false,-1, 63,0);
        tracep->declBit(c+29,"top u_AXI_arbiter_SRAM axi1_R_VALID", false,-1);
        tracep->declBit(c+30,"top u_AXI_arbiter_SRAM axi1_R_READY", false,-1);
        tracep->declQuad(c+50,"top u_AXI_arbiter_SRAM axi2_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+40,"top u_AXI_arbiter_SRAM axi2_AW_VALID", false,-1);
        tracep->declBit(c+41,"top u_AXI_arbiter_SRAM axi2_AW_READY", false,-1);
        tracep->declQuad(c+56,"top u_AXI_arbiter_SRAM axi2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+58,"top u_AXI_arbiter_SRAM axi2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+42,"top u_AXI_arbiter_SRAM axi2_W_VALID", false,-1);
        tracep->declBit(c+43,"top u_AXI_arbiter_SRAM axi2_W_READY", false,-1);
        tracep->declBit(c+44,"top u_AXI_arbiter_SRAM axi2_B_VALID", false,-1);
        tracep->declBit(c+45,"top u_AXI_arbiter_SRAM axi2_B_READY", false,-1);
        tracep->declQuad(c+52,"top u_AXI_arbiter_SRAM axi2_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+46,"top u_AXI_arbiter_SRAM axi2_AR_VALID", false,-1);
        tracep->declBit(c+47,"top u_AXI_arbiter_SRAM axi2_AR_READY", false,-1);
        tracep->declQuad(c+54,"top u_AXI_arbiter_SRAM axi2_R_DATA", false,-1, 63,0);
        tracep->declBit(c+48,"top u_AXI_arbiter_SRAM axi2_R_VALID", false,-1);
        tracep->declBit(c+49,"top u_AXI_arbiter_SRAM axi2_R_READY", false,-1);
        tracep->declBit(c+59,"top u_AXI_arbiter_SRAM channel", false,-1);
        tracep->declBit(c+331,"top u_AXI_arbiter_SRAM AW_VALID", false,-1);
        tracep->declBit(c+332,"top u_AXI_arbiter_SRAM W_VALID", false,-1);
        tracep->declBit(c+333,"top u_AXI_arbiter_SRAM B_READY", false,-1);
        tracep->declBit(c+334,"top u_AXI_arbiter_SRAM AR_VALID", false,-1);
        tracep->declBit(c+335,"top u_AXI_arbiter_SRAM R_READY", false,-1);
        tracep->declBit(c+336,"top u_AXI_arbiter_SRAM B_VALID", false,-1);
        tracep->declQuad(c+337,"top u_AXI_arbiter_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+339,"top u_AXI_arbiter_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+341,"top u_AXI_arbiter_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+343,"top u_AXI_arbiter_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+344,"top u_AXI_arbiter_SRAM AR_READY", false,-1);
        tracep->declBit(c+345,"top u_AXI_arbiter_SRAM R_VALID", false,-1);
        tracep->declBit(c+346,"top u_AXI_arbiter_SRAM AW_READY", false,-1);
        tracep->declBit(c+347,"top u_AXI_arbiter_SRAM W_READY", false,-1);
        tracep->declQuad(c+348,"top u_AXI_arbiter_SRAM R_DATA", false,-1, 63,0);
        tracep->declBus(c+361,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+361,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+350,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM CLK", false,-1);
        tracep->declBit(c+351,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM RESETN", false,-1);
        tracep->declQuad(c+337,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+331,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_VALID", false,-1);
        tracep->declBit(c+346,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_READY", false,-1);
        tracep->declQuad(c+341,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+343,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+332,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_VALID", false,-1);
        tracep->declBit(c+347,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_READY", false,-1);
        tracep->declBit(c+336,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_VALID", false,-1);
        tracep->declBit(c+333,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_READY", false,-1);
        tracep->declQuad(c+339,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+334,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_VALID", false,-1);
        tracep->declBit(c+344,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_READY", false,-1);
        tracep->declQuad(c+348,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+345,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_VALID", false,-1);
        tracep->declBit(c+335,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_READY", false,-1);
        tracep->declBus(c+381,"$unit inst_ecall", false,-1, 11,0);
        tracep->declBus(c+382,"$unit inst_mret", false,-1, 11,0);
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
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp88;
    VlWide<3>/*95:0*/ __Vtemp90;
    VlWide<3>/*95:0*/ __Vtemp91;
    VlWide<3>/*95:0*/ __Vtemp98;
    VlWide<3>/*95:0*/ __Vtemp100;
    VlWide<3>/*95:0*/ __Vtemp101;
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
        tracep->fullQData(oldp+18,(vlSelf->top__DOT__inst_act),33);
        tracep->fullIData(oldp+20,(vlSelf->top__DOT__inst_type),18);
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__axis1_AW_READY));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+24,(vlSelf->top__DOT__axis1_W_READY));
        tracep->fullBit(oldp+25,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__axis1_B_READY));
        tracep->fullBit(oldp+27,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                  | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
        tracep->fullBit(oldp+28,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__axis1_R_VALID));
        tracep->fullBit(oldp+30,(vlSelf->top__DOT__axis1_R_READY));
        tracep->fullQData(oldp+31,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+33,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                     ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                     : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__axis1_R_DATA),64);
        tracep->fullQData(oldp+37,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                     : 0ULL)),64);
        tracep->fullCData(oldp+39,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                     : 0U)),8);
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__axis2_AW_VALID));
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__axis2_AW_READY));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__axis2_W_VALID));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__axis2_W_READY));
        tracep->fullBit(oldp+44,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__axis2_B_READY));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__axis2_AR_VALID));
        tracep->fullBit(oldp+47,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__axis2_R_VALID));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__axis2_R_READY));
        tracep->fullQData(oldp+50,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+52,(((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                     : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
        tracep->fullQData(oldp+54,(((IData)(vlSelf->top__DOT__in_channel)
                                     ? ((IData)(vlSelf->top__DOT__in_channel)
                                         ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                         : 0ULL) : 0ULL)),64);
        tracep->fullQData(oldp+56,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                     ? vlSelf->top__DOT__u_EXU__DOT__src2
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                         : 0ULL))),64);
        tracep->fullCData(oldp+58,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                              ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__in_channel));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__itrace_en));
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__u_IFU__DOT__ifetch_pc),64);
        tracep->fullCData(oldp+63,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__u_IFU__DOT__rreq));
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+72,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+73,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__u_IDU__DOT__inst_act_pre),33);
        tracep->fullIData(oldp+76,(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre),18);
        tracep->fullBit(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link));
        tracep->fullBit(oldp+78,(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link));
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__u_IDU__DOT__imm_pre),64);
        tracep->fullCData(oldp+81,((0x1fU & (IData)(
                                                    (0x1ffffffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 7U))))),5);
        tracep->fullCData(oldp+82,((0x1fU & (IData)(
                                                    (0x1ffffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 0xfU))))),5);
        tracep->fullCData(oldp+83,((0x1fU & (IData)(
                                                    (0xfffULL 
                                                     & (vlSelf->top__DOT__axis1_R_DATA 
                                                        >> 0x14U))))),5);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
        tracep->fullCData(oldp+86,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
        tracep->fullIData(oldp+89,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__u_EXU__DOT__inst_act_r),33);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
        tracep->fullCData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
        tracep->fullCData(oldp+97,(vlSelf->top__DOT__u_EXU__DOT__rs1),5);
        tracep->fullCData(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__rs2),5);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
        tracep->fullIData(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__op),32);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__inst_act),33);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
        tracep->fullBit(oldp+108,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld));
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr),5);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_data),64);
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__alu_req));
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
        tracep->fullBit(oldp+117,((((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld) 
                                    | (IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)) 
                                   | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld))));
        tracep->fullCData(oldp+118,(((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld)
                                      ? (IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr)
                                      : ((IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)
                                          ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r)
                                          : ((IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld)
                                              ? (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr)
                                              : 0U)))),5);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__wb_data),64);
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__u_EXU__DOT__bmu_vld));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld));
        tracep->fullCData(oldp+123,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r),5);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data),64);
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__u_EXU__DOT__lsu_data_vld));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
        tracep->fullBit(oldp+128,(vlSelf->top__DOT__u_EXU__DOT__st_req));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_data),64);
        tracep->fullCData(oldp+133,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr),5);
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld));
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
        tracep->fullCData(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
        tracep->fullQData(oldp+138,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                      ? 0xa00001800ULL
                                      : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                          ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                            >> 7U)))
                                              ? vlSelf->top__DOT__u_EXU__DOT__pc
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 9U)))
                                                  ? 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 2U))))
                                                   ? vlSelf->top__DOT__u_EXU__DOT__src1
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                >> 2U))))
                                                    ? 
                                                   (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    | vlSelf->top__DOT__u_EXU__DOT__csrf_rdata)
                                                    : 0ULL))
                                                  : 0ULL))
                                          : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                              ? 0xbULL
                                              : 0ULL)))),64);
        tracep->fullCData(oldp+140,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
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
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_valid));
        tracep->fullBit(oldp+143,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_valid));
        tracep->fullBit(oldp+144,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_valid));
        tracep->fullBit(oldp+145,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_out_valid));
        tracep->fullQData(oldp+146,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[2U])))),64);
        tracep->fullQData(oldp+148,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[0U])))),64);
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid));
        tracep->fullQData(oldp+151,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                      ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q)),64);
        tracep->fullQData(oldp+153,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                      ? (1ULL + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)),64);
        tracep->fullQData(oldp+155,(((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0x13U)))
                                      ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                      : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                          ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                          ? (1ULL + 
                                             (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                          : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))),64);
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_out_vld));
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_result),64);
        tracep->fullBit(oldp+160,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir));
        tracep->fullBit(oldp+161,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 0xbU)))));
        tracep->fullCData(oldp+162,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt),6);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_result),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_result),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1),64);
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
        tracep->fullBit(oldp+172,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 0x11U)))));
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum),64);
        __Vtemp78[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp78[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp78[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp80[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp80[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp80[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp81, __Vtemp78, __Vtemp80);
        tracep->fullBit(oldp+175,((1U & (((1U & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 0x11U)))
                                           ? (7U & 
                                              __Vtemp81[2U])
                                           : 0U) >> 2U))));
        __Vtemp88[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp88[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp88[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp90[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp90[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp90[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp91, __Vtemp88, __Vtemp90);
        tracep->fullBit(oldp+176,((1U & (((1U & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 0x11U)))
                                           ? (7U & 
                                              __Vtemp91[2U])
                                           : 0U) >> 1U))));
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt),7);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplicand_r),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplier_r),64);
        tracep->fullWData(oldp+182,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg),128);
        tracep->fullBit(oldp+186,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+187,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 0xeU)))));
        tracep->fullCData(oldp+188,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count),6);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b),64);
        tracep->fullBit(oldp+195,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign));
        tracep->fullBit(oldp+196,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign));
        tracep->fullBit(oldp+197,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign));
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor),64);
        tracep->fullWData(oldp+202,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add),65);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2),64);
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
        tracep->fullQData(oldp+209,(((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0xeU)))
                                      ? 0ULL : ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                            >> 0xbU)))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                  ? 
                                                 VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_EXU__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                  : 
                                                 (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                  ? 
                                                 (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                  : 
                                                 (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))))),64);
        tracep->fullIData(oldp+211,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res),32);
        tracep->fullWData(oldp+212,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend),129);
        __Vtemp98[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp98[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp98[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp100[0U] = (((IData)((((QData)((IData)(
                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                           << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp100[1U] = (((IData)((((QData)((IData)(
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
        __Vtemp100[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                 >> 0x1eU)) | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                        >> 0x20U)) 
                                               >> 0x1fU));
        VL_ADD_W(3, __Vtemp101, __Vtemp98, __Vtemp100);
        tracep->fullBit(oldp+217,(((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                  >> 0x11U)))
                                    ? (1U & __Vtemp101[0U])
                                    : 0U)));
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
        tracep->fullBit(oldp+284,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+285,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+286,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+287,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 8U)))));
        tracep->fullCData(oldp+288,((7U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                   >> 2U)))),3);
        tracep->fullBit(oldp+289,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pre));
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pc_pre),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_src1),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_sum),64);
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__ld_req_r));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__st_req_r));
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
        tracep->fullCData(oldp+302,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
        tracep->fullBit(oldp+303,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+310,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+311,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+312,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullBit(oldp+315,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 9U)))));
        tracep->fullBit(oldp+316,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 7U)))));
        tracep->fullBit(oldp+317,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 5U)))));
        tracep->fullBit(oldp+318,((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                 >> 6U)))));
        tracep->fullSData(oldp+319,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
        tracep->fullSData(oldp+320,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
        tracep->fullCData(oldp+321,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
        tracep->fullCData(oldp+322,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                      ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                               ? (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                              >> 7U)))
                                                   ? 3U
                                                   : 2U)
                                               : 2U))),2);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
        tracep->fullQData(oldp+329,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
        tracep->fullBit(oldp+331,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
        tracep->fullBit(oldp+332,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
        tracep->fullBit(oldp+333,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
        tracep->fullQData(oldp+337,(((IData)(vlSelf->top__DOT__in_channel)
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
        tracep->fullQData(oldp+339,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                              ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                              : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                       ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                       : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg))),64);
        tracep->fullQData(oldp+341,(((IData)(vlSelf->top__DOT__in_channel)
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
        tracep->fullCData(oldp+343,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
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
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
        tracep->fullBit(oldp+345,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
        tracep->fullBit(oldp+346,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
        tracep->fullBit(oldp+347,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
        tracep->fullQData(oldp+348,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        tracep->fullBit(oldp+350,(vlSelf->clk));
        tracep->fullBit(oldp+351,(vlSelf->rst_n));
        tracep->fullCData(oldp+352,(vlSelf->jmp_type),8);
        tracep->fullBit(oldp+353,(vlSelf->ifetch_taken));
        tracep->fullQData(oldp+354,(vlSelf->ifetch_taken_pc),64);
        tracep->fullBit(oldp+356,(vlSelf->mainUpdate_valid));
        tracep->fullQData(oldp+357,(vlSelf->inst),64);
        tracep->fullQData(oldp+359,(vlSelf->pc),64);
        tracep->fullIData(oldp+361,(0x40U),32);
        tracep->fullBit(oldp+362,(0U));
        tracep->fullQData(oldp+363,(0ULL),64);
        tracep->fullCData(oldp+365,(0U),8);
        tracep->fullBit(oldp+366,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_vld));
        tracep->fullQData(oldp+367,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_data),64);
        tracep->fullBit(oldp+369,(1U));
        tracep->fullIData(oldp+370,(0x40U),32);
        tracep->fullIData(oldp+371,(0x20U),32);
        tracep->fullIData(oldp+372,(5U),32);
        tracep->fullIData(oldp+373,(2U),32);
        tracep->fullSData(oldp+374,(0x342U),12);
        tracep->fullSData(oldp+375,(0x300U),12);
        tracep->fullSData(oldp+376,(0x341U),12);
        tracep->fullSData(oldp+377,(0x305U),12);
        tracep->fullCData(oldp+378,(0U),2);
        tracep->fullCData(oldp+379,(2U),2);
        tracep->fullCData(oldp+380,(3U),2);
        tracep->fullSData(oldp+381,(1U),12);
        tracep->fullSData(oldp+382,(2U),12);
    }
}
