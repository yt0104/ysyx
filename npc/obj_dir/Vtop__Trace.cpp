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
    VlWide<3>/*95:0*/ __Vtemp803;
    VlWide<3>/*95:0*/ __Vtemp805;
    VlWide<3>/*95:0*/ __Vtemp806;
    VlWide<3>/*95:0*/ __Vtemp812;
    VlWide<3>/*95:0*/ __Vtemp814;
    VlWide<3>/*95:0*/ __Vtemp815;
    VlWide<3>/*95:0*/ __Vtemp821;
    VlWide<3>/*95:0*/ __Vtemp823;
    VlWide<3>/*95:0*/ __Vtemp824;
    VlWide<4>/*127:0*/ __Vtemp828;
    VlWide<3>/*95:0*/ __Vtemp831;
    VlWide<3>/*95:0*/ __Vtemp833;
    VlWide<3>/*95:0*/ __Vtemp834;
    VlWide<5>/*159:0*/ __Vtemp840;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__IFU_pc),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__IDU_pc),64);
            tracep->chgQData(oldp+4,((0xffffffffULL 
                                      & vlSelf->top__DOT__axis1_R_DATA)),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__IDU_inst),64);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__ifetch_req));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__u_IFU__DOT__rask));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__IDU_vld));
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__rd),5);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__rs2),5);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__op),32);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__inst_act),33);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__inst_type),18);
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__axis1_AW_READY));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__axis1_W_READY));
            tracep->chgBit(oldp+24,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__axis1_B_READY));
            tracep->chgBit(oldp+26,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                     | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
            tracep->chgBit(oldp+27,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__axis1_R_VALID));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__axis1_R_READY));
            tracep->chgQData(oldp+30,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+32,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                        ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                        : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__axis1_R_DATA),64);
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
            tracep->chgBit(oldp+46,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__axis2_R_VALID));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__axis2_R_READY));
            tracep->chgQData(oldp+49,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+51,(((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                        : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
            tracep->chgQData(oldp+53,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? ((IData)(vlSelf->top__DOT__in_channel)
                                            ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                            : 0ULL)
                                        : 0ULL)),64);
            tracep->chgQData(oldp+55,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__src2
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                            : 0ULL))),64);
            tracep->chgCData(oldp+57,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__in_channel));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__itrace_en));
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__u_IFU__DOT__ifetch_pc),64);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__u_IFU__DOT__rreq));
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__u_IDU__DOT__inst_act_pre),33);
            tracep->chgIData(oldp+75,(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre),18);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link));
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__u_IDU__DOT__imm_pre),64);
            tracep->chgCData(oldp+80,((0x1fU & (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 7U))))),5);
            tracep->chgCData(oldp+81,((0x1fU & (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0xfU))))),5);
            tracep->chgCData(oldp+82,((0x1fU & (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0x14U))))),5);
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld));
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr),5);
            tracep->chgQData(oldp+85,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
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
                                                                                (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U] 
                                                                                >> 0x1fU))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U])))
                                                     : 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U]))))
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
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
            tracep->chgBit(oldp+91,((((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld) 
                                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)) 
                                     | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld))));
            tracep->chgCData(oldp+92,(vlSelf->top__DOT__u_EXU__DOT__wb_addr),5);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__u_EXU__DOT__wb_data),64);
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__u_EXU__DOT__bmu_vld));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld));
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r),5);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data),64);
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__st_req));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_data),64);
            tracep->chgCData(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr),5);
            tracep->chgBit(oldp+108,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld));
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
            tracep->chgQData(oldp+112,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 0xa00001800ULL
                                         : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 8U)))
                                                 ? vlSelf->top__DOT__IDU_pc
                                                 : 
                                                ((1U 
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
                                                   ? vlSelf->top__DOT__u_EXU__DOT__src1
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__inst_act 
                                                                >> 3U))))
                                                    ? 
                                                   (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    | vlSelf->top__DOT__u_EXU__DOT__csrf_rdata)
                                                    : 0ULL))
                                                  : 0ULL))
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                                 ? 0xbULL
                                                 : 0ULL)))),64);
            tracep->chgCData(oldp+114,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                         ? 0U : ((0x300U 
                                                  == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                  ? 1U
                                                  : 
                                                 ((0x341U 
                                                   == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                   ? 2U
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out),64);
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir));
            tracep->chgBit(oldp+129,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xfU)))));
            tracep->chgCData(oldp+130,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt),6);
            tracep->chgQData(oldp+131,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0xcU)))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res)))
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 0xcU)))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 0xfU)))
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
                                                   << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))))))
                                         : 0ULL)),64);
            __Vtemp803[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp803[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp803[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp805[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp805[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp805[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp806, __Vtemp803, __Vtemp805);
            tracep->chgQData(oldp+133,(((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0x11U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0xdU)))
                                             ? ((1U 
                                                 & ((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                       ? 
                                                      (7U 
                                                       & __Vtemp806[2U])
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
                                             : ((1U 
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
                                                 ? 1ULL
                                                 : 
                                                ((2U 
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
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1),64);
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req));
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum),64);
            __Vtemp812[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp812[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp812[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp814[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp814[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp814[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp815, __Vtemp812, __Vtemp814);
            tracep->chgBit(oldp+143,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp815[2U])
                                              : 0U) 
                                            >> 2U))));
            __Vtemp821[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp821[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp821[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp823[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp823[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp823[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp824, __Vtemp821, __Vtemp823);
            tracep->chgBit(oldp+144,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp824[2U])
                                              : 0U) 
                                            >> 1U))));
            tracep->chgQData(oldp+145,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)
                                         ? ((7U == 
                                             (7U & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 3U))))
                                             ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U))))
                                                 ? 
                                                (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                 | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 3U))))
                                                  ? 
                                                 (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  ^ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                                  : 0ULL)))
                                         : 0ULL)),64);
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req));
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1),64);
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld));
            tracep->chgQData(oldp+151,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U])))
                                         : (((QData)((IData)(
                                                             vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U]))))),64);
            tracep->chgBit(oldp+153,(((IData)(vlSelf->top__DOT__IDU_vld) 
                                      & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 0x16U)))));
            tracep->chgBit(oldp+154,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xdU)))));
            __Vtemp828[0U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U];
            __Vtemp828[1U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[1U];
            __Vtemp828[2U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[2U];
            __Vtemp828[3U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[3U];
            tracep->chgWData(oldp+155,(__Vtemp828),128);
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req));
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid));
            tracep->chgQData(oldp+161,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                         ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q)),64);
            tracep->chgQData(oldp+163,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)),64);
            tracep->chgQData(oldp+165,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d)
                                         ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                         : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                             ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))),64);
            tracep->chgBit(oldp+167,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xcU)))));
            tracep->chgQData(oldp+168,(((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0xcU)))
                                         ? 0ULL : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__inst_act 
                                                               >> 0xfU)))
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
            tracep->chgIData(oldp+170,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res),32);
            tracep->chgWData(oldp+171,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend),129);
            __Vtemp831[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp831[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp831[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp833[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp833[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp833[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp834, __Vtemp831, __Vtemp833);
            tracep->chgBit(oldp+176,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                       ? (1U & __Vtemp834[0U])
                                       : 0U)));
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp),64);
            tracep->chgWData(oldp+179,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext),133);
            __Vtemp840[0U] = (IData)(vlSelf->top__DOT__u_EXU__DOT__src2);
            __Vtemp840[1U] = (IData)((vlSelf->top__DOT__u_EXU__DOT__src2 
                                      >> 0x20U));
            __Vtemp840[2U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                               << 2U) | (3U & (- (IData)(
                                                         (1U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__inst_act 
                                                                      >> 0xdU)) 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__u_EXU__DOT__src2 
                                                                        >> 0x3fU))))))));
            __Vtemp840[3U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                               >> 0x1eU) | ((IData)(
                                                    (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     >> 0x20U)) 
                                            << 2U));
            __Vtemp840[4U] = (((IData)((vlSelf->top__DOT__u_EXU__DOT__src1 
                                        >> 0x20U)) 
                               >> 0x1eU) | (0xcU & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__inst_act 
                                                                     >> 0xdU)) 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                                       >> 0x3fU)))))) 
                                             << 2U)));
            tracep->chgWData(oldp+184,(__Vtemp840),132);
            tracep->chgWData(oldp+189,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res),264);
            tracep->chgCData(oldp+198,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count),6);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b),64);
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign));
            tracep->chgBit(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign));
            tracep->chgQData(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend),64);
            tracep->chgQData(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor),64);
            tracep->chgWData(oldp+212,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add),65);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2),64);
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy));
            tracep->chgBit(oldp+218,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
            tracep->chgBit(oldp+283,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+286,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 9U)))));
            tracep->chgCData(oldp+287,((7U & (IData)(
                                                     (vlSelf->top__DOT__inst_act 
                                                      >> 3U)))),3);
            tracep->chgBit(oldp+288,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre));
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum),64);
            tracep->chgBit(oldp+295,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 1U)))));
            tracep->chgCData(oldp+296,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d),3);
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
            tracep->chgQData(oldp+298,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM),64);
            tracep->chgQData(oldp+300,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
            tracep->chgCData(oldp+302,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+309,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+310,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+311,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+312,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgBit(oldp+314,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+315,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 8U)))));
            tracep->chgBit(oldp+316,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 6U)))));
            tracep->chgBit(oldp+317,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 7U)))));
            tracep->chgSData(oldp+318,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
            tracep->chgSData(oldp+319,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
            tracep->chgCData(oldp+320,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
            tracep->chgCData(oldp+321,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 8U)))
                                                   ? 3U
                                                   : 2U)
                                                  : 2U))),2);
            tracep->chgQData(oldp+322,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
            tracep->chgQData(oldp+324,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
            tracep->chgQData(oldp+326,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
            tracep->chgQData(oldp+328,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
            tracep->chgBit(oldp+330,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
            tracep->chgBit(oldp+331,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
            tracep->chgBit(oldp+332,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
            tracep->chgBit(oldp+333,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
            tracep->chgBit(oldp+334,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
            tracep->chgBit(oldp+335,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
            tracep->chgQData(oldp+336,(((IData)(vlSelf->top__DOT__in_channel)
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
            tracep->chgQData(oldp+338,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                                 : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                             ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                             : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg))),64);
            tracep->chgQData(oldp+340,(((IData)(vlSelf->top__DOT__in_channel)
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
            tracep->chgCData(oldp+342,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
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
            tracep->chgBit(oldp+343,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
            tracep->chgBit(oldp+344,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
            tracep->chgBit(oldp+345,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
            tracep->chgBit(oldp+346,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
            tracep->chgQData(oldp+347,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        }
        tracep->chgBit(oldp+349,(vlSelf->clk));
        tracep->chgBit(oldp+350,(vlSelf->rst_n));
        tracep->chgCData(oldp+351,(vlSelf->jmp_type),8);
        tracep->chgBit(oldp+352,(vlSelf->ifetch_taken));
        tracep->chgQData(oldp+353,(vlSelf->ifetch_taken_pc),64);
        tracep->chgBit(oldp+355,(vlSelf->mainUpdate_valid));
        tracep->chgQData(oldp+356,(vlSelf->inst),64);
        tracep->chgQData(oldp+358,(vlSelf->pc),64);
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
