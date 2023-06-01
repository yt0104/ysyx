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
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__ifetch_req));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__u_IFU__DOT__rask));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__IDU_vld));
            tracep->chgCData(oldp+11,((0x1fU & (IData)(
                                                       (vlSelf->top__DOT__IDU_inst 
                                                        >> 7U)))),5);
            tracep->chgCData(oldp+12,((0x1fU & (IData)(
                                                       (vlSelf->top__DOT__IDU_inst 
                                                        >> 0xfU)))),5);
            tracep->chgCData(oldp+13,((0x1fU & (IData)(
                                                       (vlSelf->top__DOT__IDU_inst 
                                                        >> 0x14U)))),5);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__op),32);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__flags),7);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__ifetch_pc),64);
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__axis1_AW_READY));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__axis1_W_READY));
            tracep->chgBit(oldp+24,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__axis1_B_READY));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__axis1_AR_VALID));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__axis1_AR_READY));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__axis1_R_VALID));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__axis1_R_READY));
            tracep->chgQData(oldp+30,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+32,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                        ? vlSelf->top__DOT__ifetch_pc
                                        : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                            ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+34,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)),64);
            tracep->chgQData(oldp+36,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                        : 0ULL)),64);
            tracep->chgCData(oldp+38,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                        : 0U)),8);
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__axis2_AW_VALID));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__axis2_AW_READY));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__axis2_W_VALID));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__axis2_W_READY));
            tracep->chgBit(oldp+43,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__axis2_B_READY));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__axis2_AR_VALID));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__axis2_AR_READY));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__axis2_R_VALID));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__axis2_R_READY));
            tracep->chgQData(oldp+49,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                        ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+51,(((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                        ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+53,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? ((IData)(vlSelf->top__DOT__in_channel)
                                            ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                            : 0ULL)
                                        : 0ULL)),64);
            tracep->chgQData(oldp+55,(((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                        ? vlSelf->top__DOT__u_EXU__DOT__src2
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                            : 0ULL))),64);
            tracep->chgCData(oldp+57,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmaskM)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__in_channel));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__itrace_en));
            tracep->chgCData(oldp+60,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
            tracep->chgQData(oldp+61,((((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                        & (IData)(vlSelf->top__DOT__axis1_R_READY))
                                        ? ((IData)(vlSelf->top__DOT__in_channel)
                                            ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)
                                        : 0ULL)),64);
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__u_IFU__DOT__rreq));
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgBit(oldp+73,(((((((0x13U == 
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
            tracep->chgBit(oldp+74,(((0x17U == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                     | (0x37U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst))))));
            tracep->chgBit(oldp+75,((0x23U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+76,((0x6fU == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__instR_flag));
            tracep->chgBit(oldp+78,((0x63U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+79,((0x73U == (0x7fU 
                                               & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgBit(oldp+80,(((0x3bU == (0x7fU 
                                                & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                     | (0x1bU == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst))))));
            tracep->chgBit(oldp+81,((IData)(((1U == 
                                              (1U & (IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag))) 
                                             & (0x2000000ULL 
                                                == 
                                                (0xfe007000ULL 
                                                 & vlSelf->top__DOT__IDU_inst))))));
            tracep->chgBit(oldp+82,((((IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag) 
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
            tracep->chgBit(oldp+83,((3U == (0x7fU & (IData)(vlSelf->top__DOT__IDU_inst)))));
            tracep->chgCData(oldp+84,(((0x23U == (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst)))
                                        ? (3U & (IData)(
                                                        (vlSelf->top__DOT__IDU_inst 
                                                         >> 0xcU)))
                                        : 0U)),2);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
            tracep->chgIData(oldp+90,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_EXU__DOT__flags_r),7);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
            tracep->chgCData(oldp+97,((0x1fU & ((IData)(vlSelf->top__DOT__IDU_vld)
                                                 ? (IData)(
                                                           (vlSelf->top__DOT__IDU_inst 
                                                            >> 0xfU))
                                                 : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs1_r)))),5);
            tracep->chgCData(oldp+98,((0x1fU & ((IData)(vlSelf->top__DOT__IDU_vld)
                                                 ? (IData)(
                                                           (vlSelf->top__DOT__IDU_inst 
                                                            >> 0x14U))
                                                 : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs2_r)))),5);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
            tracep->chgIData(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__op),32);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
            tracep->chgCData(oldp+106,(vlSelf->top__DOT__u_EXU__DOT__flags),7);
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid));
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
            tracep->chgQData(oldp+112,(((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                         : vlSelf->top__DOT__u_EXU__DOT__temp)),64);
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__u_EXU__DOT__wenR));
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__u_EXU__DOT__temp),64);
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__u_EXU__DOT__mul_valid));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__u_EXU__DOT__div_valid));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid));
            tracep->chgQData(oldp+120,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U])))),64);
            tracep->chgQData(oldp+122,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))),64);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__div_out_valid));
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__u_EXU__DOT__quotient),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__u_EXU__DOT__remainder),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__u_EXU__DOT__raddrM),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__u_EXU__DOT__rdataM),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__u_EXU__DOT__waddrM),64);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__u_EXU__DOT__wmaskM),8);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__u_EXU__DOT__wenM));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__renM));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__u_EXU__DOT__dataM_valid));
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__u_EXU__DOT__rCSR),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__u_EXU__DOT__wCSR1),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__u_EXU__DOT__wCSR2),64);
            tracep->chgSData(oldp+145,(vlSelf->top__DOT__u_EXU__DOT__instCSR),12);
            tracep->chgSData(oldp+146,((0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm))),12);
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__u_EXU__DOT__wenC));
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
            tracep->chgCData(oldp+212,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt),7);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r),64);
            tracep->chgWData(oldp+217,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg),128);
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div));
            tracep->chgBit(oldp+222,((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))));
            tracep->chgCData(oldp+223,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count),6);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b),64);
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign));
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor),64);
            tracep->chgWData(oldp+237,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add),65);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2),64);
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+246,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+248,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+250,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+252,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+253,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+254,(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec),64);
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
            tracep->chgQData(oldp+269,(((IData)(vlSelf->top__DOT__in_channel)
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
            tracep->chgQData(oldp+271,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                             ? vlSelf->top__DOT__ifetch_pc
                                             : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+273,(((IData)(vlSelf->top__DOT__in_channel)
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
            tracep->chgCData(oldp+275,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
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
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        }
        tracep->chgBit(oldp+282,(vlSelf->clk));
        tracep->chgBit(oldp+283,(vlSelf->rst_n));
        tracep->chgQData(oldp+284,(vlSelf->inst),64);
        tracep->chgQData(oldp+286,(vlSelf->pc),64);
        tracep->chgBit(oldp+288,(vlSelf->mainUpdate_valid));
        tracep->chgBit(oldp+289,(vlSelf->top__DOT__u_EXU__DOT__exe_valid));
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
