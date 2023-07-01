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
            tracep->chgQData(oldp+4,((0xffffffffULL 
                                      & vlSelf->top__DOT__u_IFU__DOT__mem_inst64)),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__IDU_inst),64);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__ifetch_req));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__u_IFU__DOT__rask));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__IDU_vld));
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__rd),5);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__rs2),5);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__op),32);
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__inst_act),31);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__inst_type),6);
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__axis1_AW_READY));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__axis1_W_READY));
            tracep->chgBit(oldp+23,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__axis1_B_READY));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__axis1_AR_VALID));
            tracep->chgBit(oldp+26,(vlSelf->top__DOT__axis1_AR_READY));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__axis1_R_VALID));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__axis1_R_READY));
            tracep->chgQData(oldp+29,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+31,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                        ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                        : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                            ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+33,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)),64);
            tracep->chgQData(oldp+35,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                        : 0ULL)),64);
            tracep->chgCData(oldp+37,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                        : 0U)),8);
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__axis2_AW_VALID));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__axis2_AW_READY));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__axis2_W_VALID));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__axis2_W_READY));
            tracep->chgBit(oldp+42,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__axis2_B_READY));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__axis2_AR_VALID));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__axis2_AR_READY));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__axis2_R_VALID));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__axis2_R_READY));
            tracep->chgQData(oldp+48,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+50,(((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+52,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? ((IData)(vlSelf->top__DOT__in_channel)
                                            ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                            : 0ULL)
                                        : 0ULL)),64);
            tracep->chgQData(oldp+54,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__src2
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                            : 0ULL))),64);
            tracep->chgCData(oldp+56,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__in_channel));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__itrace_en));
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__u_IFU__DOT__ifetch_pc),64);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__u_IFU__DOT__mem_inst64),64);
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__u_IFU__DOT__rreq));
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgIData(oldp+74,(vlSelf->top__DOT__u_IDU__DOT__inst_act_pre),31);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre),6);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link));
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__u_IDU__DOT__imm_pre),64);
            tracep->chgCData(oldp+80,((0x1fU & (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->top__DOT__u_IFU__DOT__mem_inst64 
                                                           >> 7U))))),5);
            tracep->chgCData(oldp+81,((0x1fU & (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->top__DOT__u_IFU__DOT__mem_inst64 
                                                           >> 0xfU))))),5);
            tracep->chgCData(oldp+82,((0x1fU & (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->top__DOT__u_IFU__DOT__mem_inst64 
                                                           >> 0x14U))))),5);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
            tracep->chgIData(oldp+88,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
            tracep->chgIData(oldp+89,(vlSelf->top__DOT__u_EXU__DOT__inst_act_r),31);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
            tracep->chgCData(oldp+94,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_EXU__DOT__rs1),5);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__rs2),5);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
            tracep->chgIData(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__op),32);
            tracep->chgIData(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__inst_act),31);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__u_EXU__DOT__mul_valid));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__u_EXU__DOT__div_valid));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid));
            tracep->chgQData(oldp+108,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[2U])))),64);
            tracep->chgQData(oldp+110,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg[0U])))),64);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__div_out_valid));
            tracep->chgQData(oldp+113,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                         ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q)),64);
            tracep->chgQData(oldp+115,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2)),64);
            tracep->chgQData(oldp+117,(((0x1000U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                         ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2)
                                         : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                             ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))),64);
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__alu_vld));
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__u_EXU__DOT__alu_data),64);
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__mini_alu_vld));
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__u_EXU__DOT__mini_alu_data),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__u_EXU__DOT__dest),64);
            tracep->chgBit(oldp+131,(((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                       >> 9U) & (((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_vld) 
                                                  | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid)) 
                                                 | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_rdata_vld)))));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__u_EXU__DOT__bmu_vld));
            tracep->chgQData(oldp+133,(((8U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                         ? ((4U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                             ? ((2U 
                                                 & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM)))
                                             : ((2U 
                                                 & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                                 ? (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM))))
                                                 : (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM))))))
                                         : ((4U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                             ? ((2U 
                                                 & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM
                                                 : 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM))))
                                             : ((2U 
                                                 & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM)))))
                                                 : 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM))))))))),64);
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__st_req));
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__u_EXU__DOT__rCSR),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__u_EXU__DOT__wCSR1),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__u_EXU__DOT__wCSR2),64);
            tracep->chgSData(oldp+144,(vlSelf->top__DOT__u_EXU__DOT__instCSR),12);
            tracep->chgSData(oldp+145,((0xfffU & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm))),12);
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__u_EXU__DOT__wenC));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__u_EXU__DOT__csr_rdata_vld));
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__u_EXU__DOT__csr_rdata),64);
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt),7);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r),64);
            tracep->chgWData(oldp+155,(vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg),128);
            tracep->chgBit(oldp+159,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                            >> 0xbU))));
            tracep->chgBit(oldp+160,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                            >> 0xaU))));
            tracep->chgCData(oldp+161,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count),6);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b),64);
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign));
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign));
            tracep->chgBit(oldp+170,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign));
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor),64);
            tracep->chgWData(oldp+175,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add),65);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2),64);
            tracep->chgBit(oldp+180,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy));
            tracep->chgBit(oldp+181,(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+186,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+188,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+194,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+212,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+226,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+232,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
            tracep->chgBit(oldp+246,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                            >> 0x16U))));
            tracep->chgBit(oldp+247,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+248,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                            >> 0x13U))));
            tracep->chgBit(oldp+249,((1U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                            >> 7U))));
            tracep->chgCData(oldp+250,((7U & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                              >> 1U))),3);
            tracep->chgBit(oldp+251,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pre));
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pc_pre),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_src1),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_sum),64);
            tracep->chgQData(oldp+258,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM),64);
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__rdataM),64);
            tracep->chgQData(oldp+262,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
            tracep->chgCData(oldp+264,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+271,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+274,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+275,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgQData(oldp+276,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause),64);
            tracep->chgQData(oldp+278,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus),64);
            tracep->chgQData(oldp+280,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec),64);
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
            tracep->chgBit(oldp+289,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
            tracep->chgQData(oldp+290,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                             ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                             : 0ULL))),64);
            tracep->chgQData(oldp+292,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                             ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                             : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+294,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__src2
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                             ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                             : 0ULL))),64);
            tracep->chgCData(oldp+296,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__in_channel)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                     : 0U))
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                   ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                   : 0U)))),8);
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
            tracep->chgBit(oldp+299,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
            tracep->chgBit(oldp+300,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        }
        tracep->chgBit(oldp+303,(vlSelf->clk));
        tracep->chgBit(oldp+304,(vlSelf->rst_n));
        tracep->chgCData(oldp+305,(vlSelf->jmp_type),8);
        tracep->chgBit(oldp+306,(vlSelf->ifetch_taken));
        tracep->chgQData(oldp+307,(vlSelf->ifetch_taken_pc),64);
        tracep->chgBit(oldp+309,(vlSelf->mainUpdate_valid));
        tracep->chgQData(oldp+310,(vlSelf->inst),64);
        tracep->chgQData(oldp+312,(vlSelf->pc),64);
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
