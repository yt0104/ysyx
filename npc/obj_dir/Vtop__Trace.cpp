// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__IFU_pc),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__IDU_pc),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__IFU_inst),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__IDU_inst),64);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__IFU_valid));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__IFU_ready));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__IDU_valid));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__IDU_ready));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__EXU_valid));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__EXU_ready));
            tracep->chgCData(oldp+14,((0x1fU & (IData)(
                                                       (vlSelf->top__DOT__IDU_inst 
                                                        >> 7U)))),5);
            tracep->chgCData(oldp+15,((0x1fU & (IData)(
                                                       (vlSelf->top__DOT__IDU_inst 
                                                        >> 0xfU)))),5);
            tracep->chgCData(oldp+16,((0x1fU & (IData)(
                                                       (vlSelf->top__DOT__IDU_inst 
                                                        >> 0x14U)))),5);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__op),32);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__flags),7);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__npc),64);
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__axis1_AW_READY));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__axis1_W_READY));
            tracep->chgBit(oldp+27,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__axis1_B_READY));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__axis1_AR_VALID));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__axis1_AR_READY));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__axis1_R_VALID));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__axis1_R_READY));
            tracep->chgQData(oldp+33,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+35,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                        ? vlSelf->top__DOT__IFU_pc
                                        : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                            ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+37,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)),64);
            tracep->chgQData(oldp+39,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                        : 0ULL)),64);
            tracep->chgCData(oldp+41,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                        : 0U)),8);
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__axis2_AW_VALID));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__axis2_AW_READY));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__axis2_W_VALID));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__axis2_W_READY));
            tracep->chgBit(oldp+46,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__axis2_B_READY));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__axis2_AR_VALID));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__axis2_AR_READY));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__axis2_R_VALID));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__axis2_R_READY));
            tracep->chgQData(oldp+52,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                        ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+54,(((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                        ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+56,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? ((IData)(vlSelf->top__DOT__in_channel)
                                            ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                            : 0ULL)
                                        : 0ULL)),64);
            tracep->chgQData(oldp+58,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                        ? vlSelf->top__DOT__u_EXU__DOT__src2
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                            : 0ULL))),64);
            tracep->chgCData(oldp+60,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmaskM)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__in_channel));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__itrace_en));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__main_valid));
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
            tracep->chgQData(oldp+69,((((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                        & (IData)(vlSelf->top__DOT__axis1_R_READY))
                                        ? ((IData)(vlSelf->top__DOT__in_channel)
                                            ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)
                                        : 0ULL)),64);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__u_IFU__DOT__rask));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__u_IFU__DOT__rreq));
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgBit(oldp+82,(((((((0x13U == 
                                          (0x7fU & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                         | (0x67U == 
                                            (0x7fU 
                                             & (IData)(vlSelf->top__DOT__IDU_inst)))) 
                                        | (3U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst)))) 
                                       | (0x13U == 
                                          (0x7fU & (IData)(vlSelf->top__DOT__IDU_inst)))) 
                                      | (0x1bU == (0x7fU 
                                                   & (IData)(vlSelf->top__DOT__IDU_inst)))) 
                                     | (0x73U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst))))));
            tracep->chgBit(oldp+83,(((0x17U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                     | (0x37U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst))))));
            tracep->chgBit(oldp+84,((0x23U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+85,((0x6fU == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__u_IDU__DOT__instR_flag));
            tracep->chgBit(oldp+87,((0x63U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+88,((0x73U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+89,(((0x3bU == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                     | (0x1bU == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst))))));
            tracep->chgBit(oldp+90,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag))) 
                                             & (0x2000000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->top__DOT__IDU_inst))))));
            tracep->chgBit(oldp+91,((((IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag) 
                                      & (1U == (0x7fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__IDU_inst 
                                                           >> 0x19U))))) 
                                     & ((2U == (3U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__IDU_inst 
                                                           >> 0xdU)))) 
                                        | (3U == (3U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__IDU_inst 
                                                             >> 0xdU))))))));
            tracep->chgBit(oldp+92,((3U == (0x7fU & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgCData(oldp+93,(((0x23U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst)))
                                        ? (3U & (IData)(
                                                        (vlSelf->top__DOT__IDU_inst 
                                                         >> 0xcU)))
                                        : 0U)),2);
            tracep->chgCData(oldp+94,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
            tracep->chgIData(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
            tracep->chgCData(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__flags_r),7);
            tracep->chgCData(oldp+105,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
            tracep->chgCData(oldp+106,((0x1fU & (((IData)(vlSelf->top__DOT__EXU_valid) 
                                                  & (IData)(vlSelf->top__DOT__EXU_ready))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__IDU_inst 
                                                             >> 0xfU))
                                                  : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs1_r)))),5);
            tracep->chgCData(oldp+107,((0x1fU & (((IData)(vlSelf->top__DOT__EXU_valid) 
                                                  & (IData)(vlSelf->top__DOT__EXU_ready))
                                                  ? (IData)(
                                                            (vlSelf->top__DOT__IDU_inst 
                                                             >> 0x14U))
                                                  : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs2_r)))),5);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
            tracep->chgIData(oldp+110,(vlSelf->top__DOT__u_EXU__DOT__op),32);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__u_EXU__DOT__flags),7);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid));
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
            tracep->chgQData(oldp+117,(((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                         : vlSelf->top__DOT__u_EXU__DOT__temp)),64);
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__wenR));
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__u_EXU__DOT__temp),64);
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__mul_valid));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__u_EXU__DOT__div_valid));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid));
            tracep->chgQData(oldp+125,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U])))),64);
            tracep->chgQData(oldp+127,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))),64);
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__u_EXU__DOT__div_out_valid));
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__u_EXU__DOT__quotient),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__u_EXU__DOT__remainder),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__u_EXU__DOT__raddrM),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__u_EXU__DOT__rdataM),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__u_EXU__DOT__waddrM),64);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__u_EXU__DOT__wmaskM),8);
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__u_EXU__DOT__wenM));
            tracep->chgBit(oldp+142,(vlSelf->top__DOT__u_EXU__DOT__renM));
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__u_EXU__DOT__dataM_valid));
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__u_EXU__DOT__rCSR),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__u_EXU__DOT__wCSR1),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__u_EXU__DOT__wCSR2),64);
            tracep->chgSData(oldp+150,(vlSelf->top__DOT__u_EXU__DOT__instCSR),12);
            tracep->chgSData(oldp+151,((0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm))),12);
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__u_EXU__DOT__wenC));
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+169,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
            tracep->chgCData(oldp+217,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt),7);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r),64);
            tracep->chgWData(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg),128);
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div));
            tracep->chgBit(oldp+227,((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))));
            tracep->chgCData(oldp+228,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count),6);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b),64);
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign));
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign));
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor),64);
            tracep->chgWData(oldp+242,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add),65);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2),64);
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+255,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+256,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+257,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus),64);
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec),64);
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
            tracep->chgBit(oldp+269,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
            tracep->chgBit(oldp+270,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
            tracep->chgBit(oldp+271,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
            tracep->chgQData(oldp+274,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                             ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                             : 0ULL))),64);
            tracep->chgQData(oldp+276,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                             ? vlSelf->top__DOT__IFU_pc
                                             : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+278,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__src2
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                             ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                             : 0ULL))),64);
            tracep->chgCData(oldp+280,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__in_channel)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmaskM)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                     : 0U))
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                   ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                   : 0U)))),8);
            tracep->chgBit(oldp+281,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
            tracep->chgBit(oldp+282,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
            tracep->chgBit(oldp+283,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        }
        tracep->chgBit(oldp+287,(vlSelf->clk));
        tracep->chgBit(oldp+288,(vlSelf->rst_n));
        tracep->chgQData(oldp+289,(vlSelf->inst),64);
        tracep->chgQData(oldp+291,(vlSelf->pc),64);
        tracep->chgBit(oldp+293,(vlSelf->mainUpdate_valid));
        tracep->chgBit(oldp+294,(vlSelf->top__DOT__u_EXU__DOT__exe_valid));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
