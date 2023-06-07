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
        tracep->declBit(c+273,"clk", false,-1);
        tracep->declBit(c+274,"rst_n", false,-1);
        tracep->declBus(c+275,"jmp_type", false,-1, 7,0);
        tracep->declBit(c+276,"ifetch_taken", false,-1);
        tracep->declQuad(c+277,"ifetch_pc", false,-1, 63,0);
        tracep->declBit(c+279,"mainUpdate_valid", false,-1);
        tracep->declQuad(c+280,"inst", false,-1, 63,0);
        tracep->declQuad(c+282,"pc", false,-1, 63,0);
        tracep->declBit(c+273,"top clk", false,-1);
        tracep->declBit(c+274,"top rst_n", false,-1);
        tracep->declBus(c+275,"top jmp_type", false,-1, 7,0);
        tracep->declBit(c+276,"top ifetch_taken", false,-1);
        tracep->declQuad(c+277,"top ifetch_pc", false,-1, 63,0);
        tracep->declBit(c+279,"top mainUpdate_valid", false,-1);
        tracep->declQuad(c+280,"top inst", false,-1, 63,0);
        tracep->declQuad(c+282,"top pc", false,-1, 63,0);
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
        tracep->declBus(c+18,"top inst_act", false,-1, 23,0);
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
        tracep->declQuad(c+284,"top axis1_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+32,"top axis1_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+34,"top axis1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+36,"top axis1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+37,"top axis2_AW_VALID", false,-1);
        tracep->declBit(c+38,"top axis2_AW_READY", false,-1);
        tracep->declBit(c+39,"top axis2_W_VALID", false,-1);
        tracep->declBit(c+40,"top axis2_W_READY", false,-1);
        tracep->declBit(c+41,"top axis2_B_VALID", false,-1);
        tracep->declBit(c+42,"top axis2_B_READY", false,-1);
        tracep->declBit(c+43,"top axis2_AR_VALID", false,-1);
        tracep->declBit(c+44,"top axis2_AR_READY", false,-1);
        tracep->declBit(c+45,"top axis2_R_VALID", false,-1);
        tracep->declBit(c+46,"top axis2_R_READY", false,-1);
        tracep->declQuad(c+47,"top axis2_AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+49,"top axis2_AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+51,"top axis2_R_DATA", false,-1, 63,0);
        tracep->declQuad(c+53,"top axis2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top axis2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+56,"top in_channel", false,-1);
        tracep->declBit(c+57,"top itrace_en", false,-1);
        tracep->declBit(c+273,"top u_IFU clk", false,-1);
        tracep->declBit(c+274,"top u_IFU rst_n", false,-1);
        tracep->declBit(c+10,"top u_IFU IFU_vld", false,-1);
        tracep->declQuad(c+1,"top u_IFU IFU_pc", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_IFU IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+277,"top u_IFU ifetch_pc", false,-1, 63,0);
        tracep->declBit(c+9,"top u_IFU ifetch_req", false,-1);
        tracep->declQuad(c+30,"top u_IFU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+20,"top u_IFU axi_AW_VALID", false,-1);
        tracep->declBit(c+21,"top u_IFU axi_AW_READY", false,-1);
        tracep->declQuad(c+34,"top u_IFU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+36,"top u_IFU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+22,"top u_IFU axi_W_VALID", false,-1);
        tracep->declBit(c+23,"top u_IFU axi_W_READY", false,-1);
        tracep->declBit(c+24,"top u_IFU axi_B_VALID", false,-1);
        tracep->declBit(c+25,"top u_IFU axi_B_READY", false,-1);
        tracep->declQuad(c+284,"top u_IFU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+26,"top u_IFU axi_AR_VALID", false,-1);
        tracep->declBit(c+27,"top u_IFU axi_AR_READY", false,-1);
        tracep->declQuad(c+32,"top u_IFU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+28,"top u_IFU axi_R_VALID", false,-1);
        tracep->declBit(c+29,"top u_IFU axi_R_READY", false,-1);
        tracep->declQuad(c+277,"top u_IFU inst_addr", false,-1, 63,0);
        tracep->declBus(c+58,"top u_IFU pre_cnt", false,-1, 5,0);
        tracep->declQuad(c+59,"top u_IFU mem_inst64", false,-1, 63,0);
        tracep->declBit(c+10,"top u_IFU rask", false,-1);
        tracep->declBit(c+61,"top u_IFU rreq", false,-1);
        tracep->declBus(c+289,"top u_IFU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+289,"top u_IFU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+290,"top u_IFU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+291,"top u_IFU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+291,"top u_IFU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+293,"top u_IFU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+61,"top u_IFU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+277,"top u_IFU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+59,"top u_IFU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+273,"top u_IFU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+274,"top u_IFU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+30,"top u_IFU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+20,"top u_IFU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+21,"top u_IFU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+34,"top u_IFU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+36,"top u_IFU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+22,"top u_IFU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+23,"top u_IFU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+24,"top u_IFU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+25,"top u_IFU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+284,"top u_IFU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+26,"top u_IFU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+27,"top u_IFU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+32,"top u_IFU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+28,"top u_IFU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+29,"top u_IFU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+62,"top u_IFU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+64,"top u_IFU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+66,"top u_IFU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+68,"top u_IFU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+20,"top u_IFU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+22,"top u_IFU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+69,"top u_IFU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+70,"top u_IFU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBit(c+273,"top u_IDU clk", false,-1);
        tracep->declBit(c+274,"top u_IDU rst_n", false,-1);
        tracep->declBit(c+10,"top u_IDU IFU_vld", false,-1);
        tracep->declQuad(c+5,"top u_IDU IFU_inst", false,-1, 63,0);
        tracep->declQuad(c+1,"top u_IDU IFU_pc", false,-1, 63,0);
        tracep->declBus(c+12,"top u_IDU rd", false,-1, 4,0);
        tracep->declBus(c+13,"top u_IDU rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_IDU rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_IDU imm", false,-1, 63,0);
        tracep->declBus(c+18,"top u_IDU inst_act", false,-1, 23,0);
        tracep->declBus(c+19,"top u_IDU inst_type", false,-1, 5,0);
        tracep->declBus(c+17,"top u_IDU op", false,-1, 31,0);
        tracep->declBit(c+11,"top u_IDU IDU_vld", false,-1);
        tracep->declQuad(c+3,"top u_IDU IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_IDU IDU_inst", false,-1, 63,0);
        tracep->declQuad(c+5,"top u_IDU inst", false,-1, 63,0);
        tracep->declBus(c+71,"top u_IDU inst_act_pre", false,-1, 23,0);
        tracep->declBus(c+72,"top u_IDU inst_type_pre", false,-1, 5,0);
        tracep->declQuad(c+73,"top u_IDU imm_pre", false,-1, 63,0);
        tracep->declBus(c+75,"top u_IDU rd_pre", false,-1, 4,0);
        tracep->declBus(c+76,"top u_IDU rs1_pre", false,-1, 4,0);
        tracep->declBus(c+77,"top u_IDU rs2_pre", false,-1, 4,0);
        tracep->declBit(c+273,"top u_EXU clk", false,-1);
        tracep->declBit(c+274,"top u_EXU rst_n", false,-1);
        tracep->declBus(c+12,"top u_EXU i_rd", false,-1, 4,0);
        tracep->declBus(c+13,"top u_EXU i_rs1", false,-1, 4,0);
        tracep->declBus(c+14,"top u_EXU i_rs2", false,-1, 4,0);
        tracep->declQuad(c+15,"top u_EXU i_imm", false,-1, 63,0);
        tracep->declBus(c+17,"top u_EXU i_op", false,-1, 31,0);
        tracep->declBus(c+18,"top u_EXU i_inst_act", false,-1, 23,0);
        tracep->declBit(c+11,"top u_EXU IDU_vld", false,-1);
        tracep->declQuad(c+3,"top u_EXU IDU_pc", false,-1, 63,0);
        tracep->declQuad(c+7,"top u_EXU IDU_inst", false,-1, 63,0);
        tracep->declBit(c+276,"top u_EXU ifetch_taken", false,-1);
        tracep->declQuad(c+277,"top u_EXU ifetch_pc", false,-1, 63,0);
        tracep->declBit(c+9,"top u_EXU ifetch_req", false,-1);
        tracep->declQuad(c+47,"top u_EXU axi_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+37,"top u_EXU axi_AW_VALID", false,-1);
        tracep->declBit(c+38,"top u_EXU axi_AW_READY", false,-1);
        tracep->declQuad(c+53,"top u_EXU axi_W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top u_EXU axi_W_STRB", false,-1, 7,0);
        tracep->declBit(c+39,"top u_EXU axi_W_VALID", false,-1);
        tracep->declBit(c+40,"top u_EXU axi_W_READY", false,-1);
        tracep->declBit(c+41,"top u_EXU axi_B_VALID", false,-1);
        tracep->declBit(c+42,"top u_EXU axi_B_READY", false,-1);
        tracep->declQuad(c+49,"top u_EXU axi_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+43,"top u_EXU axi_AR_VALID", false,-1);
        tracep->declBit(c+44,"top u_EXU axi_AR_READY", false,-1);
        tracep->declQuad(c+51,"top u_EXU axi_R_DATA", false,-1, 63,0);
        tracep->declBit(c+45,"top u_EXU axi_R_VALID", false,-1);
        tracep->declBit(c+46,"top u_EXU axi_R_READY", false,-1);
        tracep->declBus(c+78,"top u_EXU rd_r", false,-1, 4,0);
        tracep->declBus(c+79,"top u_EXU rs1_r", false,-1, 4,0);
        tracep->declBus(c+80,"top u_EXU rs2_r", false,-1, 4,0);
        tracep->declQuad(c+81,"top u_EXU imm_r", false,-1, 63,0);
        tracep->declBus(c+83,"top u_EXU op_r", false,-1, 31,0);
        tracep->declBus(c+84,"top u_EXU inst_act_r", false,-1, 23,0);
        tracep->declQuad(c+85,"top u_EXU pc_r", false,-1, 63,0);
        tracep->declQuad(c+87,"top u_EXU inst_r", false,-1, 63,0);
        tracep->declBus(c+89,"top u_EXU rd", false,-1, 4,0);
        tracep->declBus(c+90,"top u_EXU rs1", false,-1, 4,0);
        tracep->declBus(c+91,"top u_EXU rs2", false,-1, 4,0);
        tracep->declQuad(c+92,"top u_EXU imm", false,-1, 63,0);
        tracep->declBus(c+94,"top u_EXU op", false,-1, 31,0);
        tracep->declBus(c+95,"top u_EXU inst_act", false,-1, 23,0);
        tracep->declQuad(c+96,"top u_EXU pc", false,-1, 63,0);
        tracep->declQuad(c+98,"top u_EXU inst", false,-1, 63,0);
        tracep->declBit(c+286,"top u_EXU exe_valid", false,-1);
        tracep->declBit(c+100,"top u_EXU exe_finish_valid", false,-1);
        tracep->declQuad(c+101,"top u_EXU src1", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_EXU src2", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_EXU dest", false,-1, 63,0);
        tracep->declBit(c+107,"top u_EXU wenR", false,-1);
        tracep->declQuad(c+108,"top u_EXU temp", false,-1, 63,0);
        tracep->declBit(c+110,"top u_EXU mul_valid", false,-1);
        tracep->declBit(c+111,"top u_EXU div_valid", false,-1);
        tracep->declBit(c+112,"top u_EXU mul_out_valid", false,-1);
        tracep->declQuad(c+113,"top u_EXU mul_result_h", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU mul_result_l", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU mul_result", false,-1, 63,0);
        tracep->declBit(c+117,"top u_EXU div_out_valid", false,-1);
        tracep->declQuad(c+118,"top u_EXU quotient", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_EXU remainder", false,-1, 63,0);
        tracep->declQuad(c+122,"top u_EXU raddrM", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_EXU rdataM", false,-1, 63,0);
        tracep->declQuad(c+126,"top u_EXU waddrM", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_EXU wdataM", false,-1, 63,0);
        tracep->declBus(c+128,"top u_EXU wmaskM", false,-1, 7,0);
        tracep->declBit(c+129,"top u_EXU wenM", false,-1);
        tracep->declBit(c+130,"top u_EXU renM", false,-1);
        tracep->declBit(c+131,"top u_EXU dataM_valid", false,-1);
        tracep->declQuad(c+132,"top u_EXU rCSR", false,-1, 63,0);
        tracep->declQuad(c+134,"top u_EXU wCSR1", false,-1, 63,0);
        tracep->declQuad(c+136,"top u_EXU wCSR2", false,-1, 63,0);
        tracep->declBus(c+138,"top u_EXU instCSR", false,-1, 11,0);
        tracep->declBus(c+139,"top u_EXU addrCSR", false,-1, 11,0);
        tracep->declBit(c+140,"top u_EXU wenC", false,-1);
        tracep->declBus(c+294,"top u_EXU u_gpr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+295,"top u_EXU u_gpr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+273,"top u_EXU u_gpr clk", false,-1);
        tracep->declQuad(c+101,"top u_EXU u_gpr rdata1", false,-1, 63,0);
        tracep->declBus(c+90,"top u_EXU u_gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+103,"top u_EXU u_gpr rdata2", false,-1, 63,0);
        tracep->declBus(c+91,"top u_EXU u_gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+105,"top u_EXU u_gpr wdata", false,-1, 63,0);
        tracep->declBus(c+89,"top u_EXU u_gpr waddr", false,-1, 4,0);
        tracep->declBit(c+107,"top u_EXU u_gpr wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+141+i*2,"top u_EXU u_gpr rf", true,(i+0), 63,0);}}
        tracep->declBit(c+273,"top u_EXU u_mul clk", false,-1);
        tracep->declBit(c+274,"top u_EXU u_mul rst_n", false,-1);
        tracep->declBit(c+110,"top u_EXU u_mul mul_valid", false,-1);
        tracep->declQuad(c+101,"top u_EXU u_mul multiplicand", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_EXU u_mul multiplier", false,-1, 63,0);
        tracep->declBit(c+112,"top u_EXU u_mul out_valid", false,-1);
        tracep->declQuad(c+113,"top u_EXU u_mul result_h", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_EXU u_mul result_l", false,-1, 63,0);
        tracep->declBus(c+205,"top u_EXU u_mul cnt", false,-1, 6,0);
        tracep->declQuad(c+206,"top u_EXU u_mul multiplicand_r", false,-1, 63,0);
        tracep->declQuad(c+208,"top u_EXU u_mul multiplier_r", false,-1, 63,0);
        tracep->declArray(c+210,"top u_EXU u_mul result_reg", false,-1, 127,0);
        tracep->declBit(c+273,"top u_EXU u_div clk", false,-1);
        tracep->declBit(c+274,"top u_EXU u_div rst_n", false,-1);
        tracep->declBit(c+214,"top u_EXU u_div sign_div", false,-1);
        tracep->declBit(c+215,"top u_EXU u_div divw", false,-1);
        tracep->declQuad(c+101,"top u_EXU u_div dividend", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_EXU u_div divisor", false,-1, 63,0);
        tracep->declBit(c+111,"top u_EXU u_div div_valid", false,-1);
        tracep->declQuad(c+118,"top u_EXU u_div quotient", false,-1, 63,0);
        tracep->declQuad(c+120,"top u_EXU u_div remainder", false,-1, 63,0);
        tracep->declBit(c+117,"top u_EXU u_div out_valid", false,-1);
        tracep->declBus(c+216,"top u_EXU u_div count", false,-1, 5,0);
        tracep->declQuad(c+217,"top u_EXU u_div reg_q", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_EXU u_div reg_r", false,-1, 63,0);
        tracep->declQuad(c+221,"top u_EXU u_div reg_b", false,-1, 63,0);
        tracep->declBit(c+223,"top u_EXU u_div r_sign", false,-1);
        tracep->declBit(c+224,"top u_EXU u_div dividend_sign", false,-1);
        tracep->declBit(c+225,"top u_EXU u_div divisor_sign", false,-1);
        tracep->declQuad(c+226,"top u_EXU u_div op_dividend", false,-1, 63,0);
        tracep->declQuad(c+228,"top u_EXU u_div op_divisor", false,-1, 63,0);
        tracep->declArray(c+230,"top u_EXU u_div sub_add", false,-1, 64,0);
        tracep->declQuad(c+233,"top u_EXU u_div reg_r2", false,-1, 63,0);
        tracep->declBit(c+235,"top u_EXU u_div busy", false,-1);
        tracep->declBit(c+236,"top u_EXU u_div busy_r", false,-1);
        tracep->declBus(c+289,"top u_EXU u1_AXI_master_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+289,"top u_EXU u1_AXI_master_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+129,"top u_EXU u1_AXI_master_SRAM WREQ", false,-1);
        tracep->declQuad(c+126,"top u_EXU u1_AXI_master_SRAM IN_WADDR", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_EXU u1_AXI_master_SRAM IN_WDATA", false,-1, 63,0);
        tracep->declBus(c+128,"top u_EXU u1_AXI_master_SRAM IN_WMASK", false,-1, 7,0);
        tracep->declBit(c+130,"top u_EXU u1_AXI_master_SRAM RREQ", false,-1);
        tracep->declQuad(c+122,"top u_EXU u1_AXI_master_SRAM IN_RADDR", false,-1, 63,0);
        tracep->declQuad(c+124,"top u_EXU u1_AXI_master_SRAM DATA_OUT", false,-1, 63,0);
        tracep->declBit(c+273,"top u_EXU u1_AXI_master_SRAM CLK", false,-1);
        tracep->declBit(c+274,"top u_EXU u1_AXI_master_SRAM RESETN", false,-1);
        tracep->declQuad(c+47,"top u_EXU u1_AXI_master_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+37,"top u_EXU u1_AXI_master_SRAM AW_VALID", false,-1);
        tracep->declBit(c+38,"top u_EXU u1_AXI_master_SRAM AW_READY", false,-1);
        tracep->declQuad(c+53,"top u_EXU u1_AXI_master_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top u_EXU u1_AXI_master_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+39,"top u_EXU u1_AXI_master_SRAM W_VALID", false,-1);
        tracep->declBit(c+40,"top u_EXU u1_AXI_master_SRAM W_READY", false,-1);
        tracep->declBit(c+41,"top u_EXU u1_AXI_master_SRAM B_VALID", false,-1);
        tracep->declBit(c+42,"top u_EXU u1_AXI_master_SRAM B_READY", false,-1);
        tracep->declQuad(c+49,"top u_EXU u1_AXI_master_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+43,"top u_EXU u1_AXI_master_SRAM AR_VALID", false,-1);
        tracep->declBit(c+44,"top u_EXU u1_AXI_master_SRAM AR_READY", false,-1);
        tracep->declQuad(c+51,"top u_EXU u1_AXI_master_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+45,"top u_EXU u1_AXI_master_SRAM R_VALID", false,-1);
        tracep->declBit(c+46,"top u_EXU u1_AXI_master_SRAM R_READY", false,-1);
        tracep->declQuad(c+237,"top u_EXU u1_AXI_master_SRAM w_addr_reg", false,-1, 63,0);
        tracep->declQuad(c+239,"top u_EXU u1_AXI_master_SRAM w_data_reg", false,-1, 63,0);
        tracep->declQuad(c+241,"top u_EXU u1_AXI_master_SRAM r_addr_reg", false,-1, 63,0);
        tracep->declBus(c+243,"top u_EXU u1_AXI_master_SRAM w_strb_reg", false,-1, 7,0);
        tracep->declBit(c+244,"top u_EXU u1_AXI_master_SRAM aw_valid_reg", false,-1);
        tracep->declBit(c+245,"top u_EXU u1_AXI_master_SRAM w_valid_reg", false,-1);
        tracep->declBit(c+246,"top u_EXU u1_AXI_master_SRAM ar_valid_reg", false,-1);
        tracep->declBit(c+247,"top u_EXU u1_AXI_master_SRAM r_ready_reg", false,-1);
        tracep->declBus(c+296,"top u_EXU u_csr ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+295,"top u_EXU u_csr DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+273,"top u_EXU u_csr clk", false,-1);
        tracep->declBus(c+139,"top u_EXU u_csr op_addr", false,-1, 11,0);
        tracep->declBus(c+138,"top u_EXU u_csr op_inst", false,-1, 11,0);
        tracep->declQuad(c+132,"top u_EXU u_csr rdata", false,-1, 63,0);
        tracep->declQuad(c+134,"top u_EXU u_csr wdata1", false,-1, 63,0);
        tracep->declQuad(c+136,"top u_EXU u_csr wdata2", false,-1, 63,0);
        tracep->declBit(c+140,"top u_EXU u_csr wen", false,-1);
        tracep->declQuad(c+248,"top u_EXU u_csr mcause", false,-1, 63,0);
        tracep->declQuad(c+250,"top u_EXU u_csr mstatus", false,-1, 63,0);
        tracep->declQuad(c+252,"top u_EXU u_csr mepc", false,-1, 63,0);
        tracep->declQuad(c+254,"top u_EXU u_csr mtvec", false,-1, 63,0);
        tracep->declBus(c+297,"top u_EXU u_csr addr_mcause", false,-1, 11,0);
        tracep->declBus(c+298,"top u_EXU u_csr addr_mstatus", false,-1, 11,0);
        tracep->declBus(c+299,"top u_EXU u_csr addr_mepc", false,-1, 11,0);
        tracep->declBus(c+300,"top u_EXU u_csr addr_mtvec", false,-1, 11,0);
        tracep->declBus(c+289,"top u_AXI_arbiter_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+289,"top u_AXI_arbiter_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+56,"top u_AXI_arbiter_SRAM in_channel", false,-1);
        tracep->declBit(c+273,"top u_AXI_arbiter_SRAM CLK", false,-1);
        tracep->declBit(c+274,"top u_AXI_arbiter_SRAM RESETN", false,-1);
        tracep->declQuad(c+30,"top u_AXI_arbiter_SRAM axi1_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+20,"top u_AXI_arbiter_SRAM axi1_AW_VALID", false,-1);
        tracep->declBit(c+21,"top u_AXI_arbiter_SRAM axi1_AW_READY", false,-1);
        tracep->declQuad(c+34,"top u_AXI_arbiter_SRAM axi1_W_DATA", false,-1, 63,0);
        tracep->declBus(c+36,"top u_AXI_arbiter_SRAM axi1_W_STRB", false,-1, 7,0);
        tracep->declBit(c+22,"top u_AXI_arbiter_SRAM axi1_W_VALID", false,-1);
        tracep->declBit(c+23,"top u_AXI_arbiter_SRAM axi1_W_READY", false,-1);
        tracep->declBit(c+24,"top u_AXI_arbiter_SRAM axi1_B_VALID", false,-1);
        tracep->declBit(c+25,"top u_AXI_arbiter_SRAM axi1_B_READY", false,-1);
        tracep->declQuad(c+284,"top u_AXI_arbiter_SRAM axi1_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+26,"top u_AXI_arbiter_SRAM axi1_AR_VALID", false,-1);
        tracep->declBit(c+27,"top u_AXI_arbiter_SRAM axi1_AR_READY", false,-1);
        tracep->declQuad(c+32,"top u_AXI_arbiter_SRAM axi1_R_DATA", false,-1, 63,0);
        tracep->declBit(c+28,"top u_AXI_arbiter_SRAM axi1_R_VALID", false,-1);
        tracep->declBit(c+29,"top u_AXI_arbiter_SRAM axi1_R_READY", false,-1);
        tracep->declQuad(c+47,"top u_AXI_arbiter_SRAM axi2_AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+37,"top u_AXI_arbiter_SRAM axi2_AW_VALID", false,-1);
        tracep->declBit(c+38,"top u_AXI_arbiter_SRAM axi2_AW_READY", false,-1);
        tracep->declQuad(c+53,"top u_AXI_arbiter_SRAM axi2_W_DATA", false,-1, 63,0);
        tracep->declBus(c+55,"top u_AXI_arbiter_SRAM axi2_W_STRB", false,-1, 7,0);
        tracep->declBit(c+39,"top u_AXI_arbiter_SRAM axi2_W_VALID", false,-1);
        tracep->declBit(c+40,"top u_AXI_arbiter_SRAM axi2_W_READY", false,-1);
        tracep->declBit(c+41,"top u_AXI_arbiter_SRAM axi2_B_VALID", false,-1);
        tracep->declBit(c+42,"top u_AXI_arbiter_SRAM axi2_B_READY", false,-1);
        tracep->declQuad(c+49,"top u_AXI_arbiter_SRAM axi2_AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+43,"top u_AXI_arbiter_SRAM axi2_AR_VALID", false,-1);
        tracep->declBit(c+44,"top u_AXI_arbiter_SRAM axi2_AR_READY", false,-1);
        tracep->declQuad(c+51,"top u_AXI_arbiter_SRAM axi2_R_DATA", false,-1, 63,0);
        tracep->declBit(c+45,"top u_AXI_arbiter_SRAM axi2_R_VALID", false,-1);
        tracep->declBit(c+46,"top u_AXI_arbiter_SRAM axi2_R_READY", false,-1);
        tracep->declBit(c+56,"top u_AXI_arbiter_SRAM channel", false,-1);
        tracep->declBit(c+256,"top u_AXI_arbiter_SRAM AW_VALID", false,-1);
        tracep->declBit(c+257,"top u_AXI_arbiter_SRAM W_VALID", false,-1);
        tracep->declBit(c+258,"top u_AXI_arbiter_SRAM B_READY", false,-1);
        tracep->declBit(c+259,"top u_AXI_arbiter_SRAM AR_VALID", false,-1);
        tracep->declBit(c+260,"top u_AXI_arbiter_SRAM R_READY", false,-1);
        tracep->declBit(c+261,"top u_AXI_arbiter_SRAM B_VALID", false,-1);
        tracep->declQuad(c+262,"top u_AXI_arbiter_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declQuad(c+287,"top u_AXI_arbiter_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declQuad(c+264,"top u_AXI_arbiter_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+266,"top u_AXI_arbiter_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+267,"top u_AXI_arbiter_SRAM AR_READY", false,-1);
        tracep->declBit(c+268,"top u_AXI_arbiter_SRAM R_VALID", false,-1);
        tracep->declBit(c+269,"top u_AXI_arbiter_SRAM AW_READY", false,-1);
        tracep->declBit(c+270,"top u_AXI_arbiter_SRAM W_READY", false,-1);
        tracep->declQuad(c+271,"top u_AXI_arbiter_SRAM R_DATA", false,-1, 63,0);
        tracep->declBus(c+289,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+289,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+273,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM CLK", false,-1);
        tracep->declBit(c+274,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM RESETN", false,-1);
        tracep->declQuad(c+262,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_ADDR", false,-1, 63,0);
        tracep->declBit(c+256,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_VALID", false,-1);
        tracep->declBit(c+269,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AW_READY", false,-1);
        tracep->declQuad(c+264,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_DATA", false,-1, 63,0);
        tracep->declBus(c+266,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_STRB", false,-1, 7,0);
        tracep->declBit(c+257,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_VALID", false,-1);
        tracep->declBit(c+270,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM W_READY", false,-1);
        tracep->declBit(c+261,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_VALID", false,-1);
        tracep->declBit(c+258,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM B_READY", false,-1);
        tracep->declQuad(c+287,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_ADDR", false,-1, 63,0);
        tracep->declBit(c+259,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_VALID", false,-1);
        tracep->declBit(c+267,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM AR_READY", false,-1);
        tracep->declQuad(c+271,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_DATA", false,-1, 63,0);
        tracep->declBit(c+268,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_VALID", false,-1);
        tracep->declBit(c+260,"top u_AXI_arbiter_SRAM u_AXI_slave_SRAM R_READY", false,-1);
        tracep->declBus(c+301,"$unit inst_ecall", false,-1, 11,0);
        tracep->declBus(c+302,"$unit inst_mret", false,-1, 11,0);
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
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__IFU_inst),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__IDU_inst),64);
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__ifetch_req));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__u_IFU__DOT__rask));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__IDU_vld));
        tracep->fullCData(oldp+12,(vlSelf->top__DOT__rd),5);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+14,(vlSelf->top__DOT__rs2),5);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__imm),64);
        tracep->fullIData(oldp+17,(vlSelf->top__DOT__op),32);
        tracep->fullIData(oldp+18,(vlSelf->top__DOT__inst_act),24);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__inst_type),6);
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__axis1_AW_READY));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+23,(vlSelf->top__DOT__axis1_W_READY));
        tracep->fullBit(oldp+24,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+25,(vlSelf->top__DOT__axis1_B_READY));
        tracep->fullBit(oldp+26,(vlSelf->top__DOT__axis1_AR_VALID));
        tracep->fullBit(oldp+27,(vlSelf->top__DOT__axis1_AR_READY));
        tracep->fullBit(oldp+28,(vlSelf->top__DOT__axis1_R_VALID));
        tracep->fullBit(oldp+29,(vlSelf->top__DOT__axis1_R_READY));
        tracep->fullQData(oldp+30,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                     : 0ULL)),64);
        tracep->fullQData(oldp+32,(((IData)(vlSelf->top__DOT__in_channel)
                                     ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)),64);
        tracep->fullQData(oldp+34,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                     : 0ULL)),64);
        tracep->fullCData(oldp+36,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                     ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                     : 0U)),8);
        tracep->fullBit(oldp+37,(vlSelf->top__DOT__axis2_AW_VALID));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__axis2_AW_READY));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__axis2_W_VALID));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__axis2_W_READY));
        tracep->fullBit(oldp+41,(((IData)(vlSelf->top__DOT__in_channel) 
                                  & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
        tracep->fullBit(oldp+42,(vlSelf->top__DOT__axis2_B_READY));
        tracep->fullBit(oldp+43,(vlSelf->top__DOT__axis2_AR_VALID));
        tracep->fullBit(oldp+44,(vlSelf->top__DOT__axis2_AR_READY));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__axis2_R_VALID));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__axis2_R_READY));
        tracep->fullQData(oldp+47,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                     ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+49,(((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                     ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                         : 0ULL))),64);
        tracep->fullQData(oldp+51,(((IData)(vlSelf->top__DOT__in_channel)
                                     ? ((IData)(vlSelf->top__DOT__in_channel)
                                         ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                         : 0ULL) : 0ULL)),64);
        tracep->fullQData(oldp+53,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                     ? vlSelf->top__DOT__u_EXU__DOT__src2
                                     : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                         ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                         : 0ULL))),64);
        tracep->fullCData(oldp+55,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                              ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmaskM)
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
        tracep->fullBit(oldp+56,(vlSelf->top__DOT__in_channel));
        tracep->fullBit(oldp+57,(vlSelf->top__DOT__itrace_en));
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
        tracep->fullQData(oldp+59,((((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                     & (IData)(vlSelf->top__DOT__axis1_R_READY))
                                     ? ((IData)(vlSelf->top__DOT__in_channel)
                                         ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)
                                     : 0ULL)),64);
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__u_IFU__DOT__rreq));
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+70,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullIData(oldp+71,(vlSelf->top__DOT__u_IDU__DOT__inst_act_pre),24);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre),6);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__u_IDU__DOT__imm_pre),64);
        tracep->fullCData(oldp+75,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__IFU_inst 
                                                     >> 7U)))),5);
        tracep->fullCData(oldp+76,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__IFU_inst 
                                                     >> 0xfU)))),5);
        tracep->fullCData(oldp+77,((0x1fU & (IData)(
                                                    (vlSelf->top__DOT__IFU_inst 
                                                     >> 0x14U)))),5);
        tracep->fullCData(oldp+78,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
        tracep->fullIData(oldp+83,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
        tracep->fullIData(oldp+84,(vlSelf->top__DOT__u_EXU__DOT__inst_act_r),24);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
        tracep->fullCData(oldp+89,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
        tracep->fullCData(oldp+90,(vlSelf->top__DOT__u_EXU__DOT__rs1),5);
        tracep->fullCData(oldp+91,(vlSelf->top__DOT__u_EXU__DOT__rs2),5);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
        tracep->fullIData(oldp+94,(vlSelf->top__DOT__u_EXU__DOT__op),32);
        tracep->fullIData(oldp+95,(vlSelf->top__DOT__u_EXU__DOT__inst_act),24);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid));
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
        tracep->fullQData(oldp+105,(((8U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                      : vlSelf->top__DOT__u_EXU__DOT__temp)),64);
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__wenR));
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__u_EXU__DOT__temp),64);
        tracep->fullBit(oldp+110,(vlSelf->top__DOT__u_EXU__DOT__mul_valid));
        tracep->fullBit(oldp+111,(vlSelf->top__DOT__u_EXU__DOT__div_valid));
        tracep->fullBit(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid));
        tracep->fullQData(oldp+113,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U])))),64);
        tracep->fullQData(oldp+115,((((QData)((IData)(
                                                      vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))),64);
        tracep->fullBit(oldp+117,(vlSelf->top__DOT__u_EXU__DOT__div_out_valid));
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__u_EXU__DOT__quotient),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__u_EXU__DOT__remainder),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__raddrM),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__rdataM),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__u_EXU__DOT__waddrM),64);
        tracep->fullCData(oldp+128,(vlSelf->top__DOT__u_EXU__DOT__wmaskM),8);
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__u_EXU__DOT__wenM));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__u_EXU__DOT__renM));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__u_EXU__DOT__dataM_valid));
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__u_EXU__DOT__rCSR),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__u_EXU__DOT__wCSR1),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__u_EXU__DOT__wCSR2),64);
        tracep->fullSData(oldp+138,(vlSelf->top__DOT__u_EXU__DOT__instCSR),12);
        tracep->fullSData(oldp+139,((0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm))),12);
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__u_EXU__DOT__wenC));
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
        tracep->fullQData(oldp+187,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
        tracep->fullQData(oldp+189,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
        tracep->fullQData(oldp+191,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
        tracep->fullCData(oldp+205,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt),7);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r),64);
        tracep->fullWData(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg),128);
        tracep->fullBit(oldp+214,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 4U))));
        tracep->fullBit(oldp+215,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 3U))));
        tracep->fullCData(oldp+216,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count),6);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b),64);
        tracep->fullBit(oldp+223,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign));
        tracep->fullBit(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign));
        tracep->fullBit(oldp+225,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign));
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor),64);
        tracep->fullWData(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add),65);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2),64);
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy));
        tracep->fullBit(oldp+236,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
        tracep->fullCData(oldp+243,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        tracep->fullBit(oldp+247,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec),64);
        tracep->fullBit(oldp+256,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
        tracep->fullBit(oldp+257,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
        tracep->fullBit(oldp+259,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
        tracep->fullBit(oldp+261,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
        tracep->fullQData(oldp+262,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                              ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                       ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                       : 0ULL))),64);
        tracep->fullQData(oldp+264,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                              ? vlSelf->top__DOT__u_EXU__DOT__src2
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                       ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                       : 0ULL))),64);
        tracep->fullCData(oldp+266,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
                                               ? ((IData)(vlSelf->top__DOT__in_channel)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmaskM)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                     : 0U))
                                                   : 0U)
                                               : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                   ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                   : 0U)))),8);
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
        tracep->fullBit(oldp+268,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
        tracep->fullBit(oldp+270,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
        tracep->fullQData(oldp+271,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        tracep->fullBit(oldp+273,(vlSelf->clk));
        tracep->fullBit(oldp+274,(vlSelf->rst_n));
        tracep->fullCData(oldp+275,(vlSelf->jmp_type),8);
        tracep->fullBit(oldp+276,(vlSelf->ifetch_taken));
        tracep->fullQData(oldp+277,(vlSelf->ifetch_pc),64);
        tracep->fullBit(oldp+279,(vlSelf->mainUpdate_valid));
        tracep->fullQData(oldp+280,(vlSelf->inst),64);
        tracep->fullQData(oldp+282,(vlSelf->pc),64);
        tracep->fullQData(oldp+284,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                      ? vlSelf->ifetch_pc
                                      : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                          ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                          : 0ULL))),64);
        tracep->fullBit(oldp+286,(vlSelf->top__DOT__u_EXU__DOT__exe_valid));
        tracep->fullQData(oldp+287,(((IData)(vlSelf->top__DOT__in_channel)
                                      ? ((IData)(vlSelf->top__DOT__in_channel)
                                          ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                              ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                  : 0ULL))
                                          : 0ULL) : 
                                     ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                       ? vlSelf->ifetch_pc
                                       : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                           ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                           : 0ULL)))),64);
        tracep->fullIData(oldp+289,(0x40U),32);
        tracep->fullBit(oldp+290,(0U));
        tracep->fullQData(oldp+291,(0ULL),64);
        tracep->fullCData(oldp+293,(0U),8);
        tracep->fullIData(oldp+294,(5U),32);
        tracep->fullIData(oldp+295,(0x40U),32);
        tracep->fullIData(oldp+296,(0xcU),32);
        tracep->fullSData(oldp+297,(0x342U),12);
        tracep->fullSData(oldp+298,(0x300U),12);
        tracep->fullSData(oldp+299,(0x341U),12);
        tracep->fullSData(oldp+300,(0x305U),12);
        tracep->fullSData(oldp+301,(1U),12);
        tracep->fullSData(oldp+302,(2U),12);
    }
}
