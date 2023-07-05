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
    VlWide<3>/*95:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp106;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp124;
    VlWide<3>/*95:0*/ __Vtemp130;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp133;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__u_ifetch__DOT__rask));
            tracep->chgQData(oldp+1,(vlSelf->top__DOT__ifetch_inst_pc),64);
            tracep->chgQData(oldp+3,((0xffffffffULL 
                                      & vlSelf->top__DOT__axis1_R_DATA)),64);
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__dec_inst_vld));
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__dec_inst_pc),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__dec_inst),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__ifetch_req));
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__rd),5);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__rs2),5);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__op),32);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__inst_act),33);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__inst_type),18);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__src2),64);
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__alu_wb_vld));
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__alu_wb_addr),5);
            tracep->chgQData(oldp+26,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
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
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__csr_wb_vld));
            tracep->chgQData(oldp+29,(vlSelf->top__DOT__csr_wb_data),64);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__csr_wb_addr),5);
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__lsu_wb_vld));
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r),5);
            tracep->chgQData(oldp+34,(((4U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                        ? ((2U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? 0ULL
                                                : (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA)))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                                : (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))
                                        : ((2U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? vlSelf->top__DOT__axis2_R_DATA
                                                : (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__axis2_R_DATA)))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))))),64);
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__axis1_AW_READY));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__axis1_W_READY));
            tracep->chgBit(oldp+40,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__axis1_B_READY));
            tracep->chgBit(oldp+42,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__rreq) 
                                     | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
            tracep->chgBit(oldp+43,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__axis1_R_VALID));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__axis1_R_READY));
            tracep->chgQData(oldp+46,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                        ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__axis1_R_DATA),64);
            tracep->chgQData(oldp+52,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                        : 0ULL)),64);
            tracep->chgCData(oldp+54,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? (0xffU & (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                        : 0U)),8);
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__axis2_AW_VALID));
            tracep->chgBit(oldp+56,(vlSelf->top__DOT__axis2_AW_READY));
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__axis2_W_VALID));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__axis2_W_READY));
            tracep->chgBit(oldp+59,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__axis2_B_READY));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__axis2_AR_VALID));
            tracep->chgBit(oldp+62,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__axis2_R_VALID));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__axis2_R_READY));
            tracep->chgQData(oldp+65,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__axis2_R_DATA),64);
            tracep->chgQData(oldp+71,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__src2
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                            : 0ULL))),64);
            tracep->chgCData(oldp+73,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__in_channel));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__itrace_en));
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__u_ifetch__DOT__pc_raddr),64);
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__u_ifetch__DOT__pre_cnt),6);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__u_ifetch__DOT__rreq));
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__u_dec__DOT__inst_act_pre),33);
            tracep->chgIData(oldp+89,(vlSelf->top__DOT__u_dec__DOT__inst_type_pre),18);
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__u_dec__DOT__ras_rd_link));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__u_dec__DOT__ras_rs1_link));
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__u_dec__DOT__imm_pre),64);
            tracep->chgCData(oldp+94,((0x1fU & (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 7U))))),5);
            tracep->chgCData(oldp+95,((0x1fU & (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0xfU))))),5);
            tracep->chgCData(oldp+96,((0x1fU & (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0x14U))))),5);
            tracep->chgBit(oldp+97,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d) 
                                     & (~ (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
                                              | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                             | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
                                            | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
                                           | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld))))));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__bmu_vld));
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__st_req));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
            tracep->chgCData(oldp+106,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
            tracep->chgQData(oldp+107,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 0xa00001800ULL
                                         : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 8U)))
                                                 ? vlSelf->top__DOT__dec_inst_pc
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
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                                 ? 0xbULL
                                                 : 0ULL)))),64);
            tracep->chgCData(oldp+109,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
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
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d));
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out),64);
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir));
            tracep->chgBit(oldp+125,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xfU)))));
            tracep->chgCData(oldp+126,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt),6);
            tracep->chgQData(oldp+127,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req)
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
            __Vtemp103[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp103[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp103[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp105[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp105[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp105[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp106, __Vtemp103, __Vtemp105);
            tracep->chgQData(oldp+129,(((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0x11U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0xdU)))
                                             ? ((1U 
                                                 & ((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                       ? 
                                                      (7U 
                                                       & __Vtemp106[2U])
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
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1),64);
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req));
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum),64);
            __Vtemp112[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp112[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp112[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp114[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp114[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp114[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp115, __Vtemp112, __Vtemp114);
            tracep->chgBit(oldp+139,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp115[2U])
                                              : 0U) 
                                            >> 2U))));
            __Vtemp121[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp121[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp121[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp123[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp123[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp123[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp124, __Vtemp121, __Vtemp123);
            tracep->chgBit(oldp+140,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp124[2U])
                                              : 0U) 
                                            >> 1U))));
            tracep->chgQData(oldp+141,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)
                                         ? ((7U == 
                                             (7U & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 3U))))
                                             ? (vlSelf->top__DOT__src1 
                                                & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U))))
                                                 ? 
                                                (vlSelf->top__DOT__src1 
                                                 | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                                 : 
                                                ((4U 
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
            tracep->chgBit(oldp+143,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req));
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1),64);
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld));
            tracep->chgQData(oldp+147,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d)
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
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req));
            tracep->chgBit(oldp+150,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xdU)))));
            tracep->chgWData(oldp+151,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out),128);
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid));
            tracep->chgQData(oldp+157,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                         ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q)),64);
            tracep->chgQData(oldp+159,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)),64);
            tracep->chgQData(oldp+161,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d)
                                         ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                         : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                             ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))),64);
            tracep->chgBit(oldp+163,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xcU)))));
            tracep->chgQData(oldp+164,(((1U & (IData)(
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
            tracep->chgIData(oldp+166,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res),32);
            tracep->chgWData(oldp+167,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend),129);
            __Vtemp130[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp130[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp130[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp132[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp132[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp132[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp133, __Vtemp130, __Vtemp132);
            tracep->chgBit(oldp+172,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                       ? (1U & __Vtemp133[0U])
                                       : 0U)));
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp),64);
            tracep->chgCData(oldp+175,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count),6);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b),64);
            tracep->chgBit(oldp+182,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign));
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign));
            tracep->chgBit(oldp+184,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign));
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor),64);
            tracep->chgWData(oldp+189,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add),65);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2),64);
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy));
            tracep->chgBit(oldp+195,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
            tracep->chgBit(oldp+196,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+197,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 9U)))));
            tracep->chgCData(oldp+200,((7U & (IData)(
                                                     (vlSelf->top__DOT__inst_act 
                                                      >> 3U)))),3);
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre));
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre),64);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum),64);
            tracep->chgBit(oldp+208,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 1U)))));
            tracep->chgCData(oldp+209,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d),3);
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
            tracep->chgQData(oldp+211,((vlSelf->top__DOT__src1 
                                        + vlSelf->top__DOT__imm)),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
            tracep->chgCData(oldp+215,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
            tracep->chgQData(oldp+216,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgCData(oldp+220,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgBit(oldp+225,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+226,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 8U)))));
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 6U)))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 7U)))));
            tracep->chgSData(oldp+229,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
            tracep->chgSData(oldp+230,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
            tracep->chgCData(oldp+231,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
            tracep->chgCData(oldp+232,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
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
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__u_RMU__DOT__wb_vld));
            tracep->chgCData(oldp+242,(vlSelf->top__DOT__u_RMU__DOT__wb_addr),5);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__u_RMU__DOT__wb_data),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                       [vlSelf->top__DOT__rs1]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                       [vlSelf->top__DOT__rs2]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[31]),64);
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
            tracep->chgBit(oldp+314,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
            tracep->chgBit(oldp+315,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
            tracep->chgBit(oldp+316,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
            tracep->chgBit(oldp+317,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
            tracep->chgBit(oldp+318,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
            tracep->chgQData(oldp+319,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                             ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                             : 0ULL))),64);
            tracep->chgQData(oldp+321,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                             : 0ULL)
                                         : vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
            tracep->chgQData(oldp+323,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__src2
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                             ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                             : 0ULL))),64);
            tracep->chgCData(oldp+325,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
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
                                                 ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                   ? (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                   : 0U)))),8);
            tracep->chgBit(oldp+326,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
            tracep->chgBit(oldp+327,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
            tracep->chgBit(oldp+328,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
            tracep->chgBit(oldp+329,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
            tracep->chgQData(oldp+330,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        }
        tracep->chgBit(oldp+332,(vlSelf->clk));
        tracep->chgBit(oldp+333,(vlSelf->rst_n));
        tracep->chgCData(oldp+334,(vlSelf->jmp_type),8);
        tracep->chgBit(oldp+335,(vlSelf->ifetch_taken));
        tracep->chgQData(oldp+336,(vlSelf->ifetch_taken_pc),64);
        tracep->chgBit(oldp+338,(vlSelf->mainUpdate_valid));
        tracep->chgQData(oldp+339,(vlSelf->inst),64);
        tracep->chgQData(oldp+341,(vlSelf->pc),64);
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
