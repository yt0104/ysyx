// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__u_EXU__DOT__pc_r = 0x80000000ULL;
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus = 0xa00001800ULL;
    vlSelf->top__DOT__IDU_pc = 0x80000000ULL;
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf);
    vlSelf->top__DOT__IFU_pc = 0x80000000ULL;
    vlSelf->top__DOT__ifetch_pc = 0x80000000ULL;
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp25;
    // Body
    __Vtemp20[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp20[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp20[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp21, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
    __Vtemp23[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp23[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp23[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp24, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp25, __Vtemp23, __Vtemp24);
    if (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp22[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp22[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp22[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp25[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp25[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp25[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__div_out_valid = (
                                                   (~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy)) 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
    vlSelf->top__DOT__u_EXU__DOT__quotient = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                               ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                               : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q);
    vlSelf->inst = vlSelf->top__DOT__IDU_inst;
    vlSelf->top__DOT__u_IDU__DOT__instR_flag = ((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                | (0x3bU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->top__DOT__IDU_inst))));
    vlSelf->top__DOT__u_IFU__DOT__rreq = ((IData)(vlSelf->top__DOT__ifetch_req) 
                                          | (9U == (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt)));
    vlSelf->mainUpdate_valid = ((IData)(vlSelf->top__DOT__itrace_en)
                                 ? (1U & (IData)(vlSelf->top__DOT__IDU_vld))
                                 : 0U);
    if (vlSelf->top__DOT__IDU_vld) {
        vlSelf->top__DOT__u_EXU__DOT__rd = (0x1fU & (IData)(
                                                            (vlSelf->top__DOT__IDU_inst 
                                                             >> 7U)));
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__IDU_inst;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rd = (0x1fU & (IData)(vlSelf->top__DOT__u_EXU__DOT__rd_r));
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__u_EXU__DOT__inst_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [(0x1fU & ((IData)(vlSelf->top__DOT__IDU_vld)
                    ? (IData)((vlSelf->top__DOT__IDU_inst 
                               >> 0x14U)) : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs2_r)))];
    vlSelf->top__DOT__u_EXU__DOT__op = ((IData)(vlSelf->top__DOT__IDU_vld)
                                         ? vlSelf->top__DOT__op
                                         : vlSelf->top__DOT__u_EXU__DOT__op_r);
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [(0x1fU & ((IData)(vlSelf->top__DOT__IDU_vld)
                    ? (IData)((vlSelf->top__DOT__IDU_inst 
                               >> 0xfU)) : (IData)(vlSelf->top__DOT__u_EXU__DOT__rs1_r)))];
    vlSelf->top__DOT__u_EXU__DOT__imm = ((IData)(vlSelf->top__DOT__IDU_vld)
                                          ? vlSelf->top__DOT__imm
                                          : vlSelf->top__DOT__u_EXU__DOT__imm_r);
    vlSelf->pc = vlSelf->top__DOT__IDU_pc;
    vlSelf->top__DOT__u_EXU__DOT__pc = ((IData)(vlSelf->top__DOT__IDU_vld)
                                         ? vlSelf->top__DOT__IDU_pc
                                         : vlSelf->top__DOT__u_EXU__DOT__pc_r);
    vlSelf->top__DOT__u_EXU__DOT__remainder = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                                : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2);
    vlSelf->top__DOT__flags = ((((0x23U == (0x7fU & (IData)(vlSelf->top__DOT__IDU_inst)))
                                  ? (3U & (IData)((vlSelf->top__DOT__IDU_inst 
                                                   >> 0xcU)))
                                  : 0U) << 5U) | ((
                                                   (0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                   << 4U) 
                                                  | (((3U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                      << 3U) 
                                                     | (((((IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag) 
                                                           & (1U 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__IDU_inst 
                                                                          >> 0x19U))))) 
                                                          & ((2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__IDU_inst 
                                                                          >> 0xdU)))) 
                                                             | (3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__IDU_inst 
                                                                            >> 0xdU)))))) 
                                                         << 2U) 
                                                        | (((IData)(
                                                                    ((1U 
                                                                      == 
                                                                      (1U 
                                                                       & (IData)(vlSelf->top__DOT__u_IDU__DOT__instR_flag))) 
                                                                     & (0x2000000ULL 
                                                                        == 
                                                                        (0xfe007000ULL 
                                                                         & vlSelf->top__DOT__IDU_inst)))) 
                                                            << 1U) 
                                                           | ((0x3bU 
                                                               == 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->top__DOT__IDU_inst))) 
                                                              | (0x1bU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->top__DOT__IDU_inst)))))))));
    vlSelf->top__DOT__axis1_AR_VALID = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                        | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__axis1_R_READY = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                       | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__u_EXU__DOT__instCSR = ((0x3dU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                              ? 2U : 
                                             ((0x3eU 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? 1U
                                               : 0U));
    vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div 
        = ((((0x36U == vlSelf->top__DOT__u_EXU__DOT__op) 
             | (0x2dU == vlSelf->top__DOT__u_EXU__DOT__op)) 
            | (0x35U == vlSelf->top__DOT__u_EXU__DOT__op)) 
           | (0x2eU == vlSelf->top__DOT__u_EXU__DOT__op));
    vlSelf->top__DOT__u_EXU__DOT__waddrM = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                            + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__raddrM = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                            + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__flags = ((IData)(vlSelf->top__DOT__IDU_vld)
                                            ? (IData)(vlSelf->top__DOT__flags)
                                            : (IData)(vlSelf->top__DOT__u_EXU__DOT__flags_r));
    vlSelf->top__DOT__u_EXU__DOT__rCSR = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                                           ? ((0x342U 
                                               == (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                               ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause
                                               : ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                   ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus
                                                   : 
                                                  ((0x305U 
                                                    == 
                                                    (0xfffU 
                                                     & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                    ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)))
                                                     ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc
                                                     : 0ULL))))
                                           : ((1U == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                                               ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__u_EXU__DOT__instCSR))
                                                   ? vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc
                                                   : 0ULL)));
    vlSelf->top__DOT__u_EXU__DOT__mul_valid = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                               & ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                                  >> 1U));
    vlSelf->top__DOT__u_EXU__DOT__div_valid = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                               & ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                                  >> 2U));
    vlSelf->top__DOT__u_EXU__DOT__wmaskM = ((0x40U 
                                             & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                                 ? 0xffU
                                                 : 0xfU)
                                             : ((0x20U 
                                                 & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))
                                                 ? 3U
                                                 : 1U));
    vlSelf->top__DOT__u_EXU__DOT__wenM = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                          & ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                             >> 4U));
    vlSelf->top__DOT__u_EXU__DOT__renM = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                          & ((IData)(vlSelf->top__DOT__u_EXU__DOT__flags) 
                                             >> 3U));
    if ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__flags))) {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
            = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)));
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
            = ((IData)(vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__src2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)));
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
            = vlSelf->top__DOT__u_EXU__DOT__src1;
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
            = vlSelf->top__DOT__u_EXU__DOT__src2;
    }
    vlSelf->top__DOT__axis2_W_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
    vlSelf->top__DOT__axis2_AW_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
    vlSelf->top__DOT__axis2_R_READY = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__axis2_AR_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
    vlSelf->top__DOT__axis1_AR_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
    vlSelf->top__DOT__axis1_AW_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
    vlSelf->top__DOT__axis1_W_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
    vlSelf->top__DOT__axis2_AR_READY = ((IData)(vlSelf->top__DOT__in_channel) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
    vlSelf->top__DOT__axis2_AW_READY = ((IData)(vlSelf->top__DOT__in_channel) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
    if (vlSelf->top__DOT__in_channel) {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_B_READY));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AW_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_W_VALID));
        vlSelf->top__DOT__axis2_W_READY = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY) 
                                           & 1U);
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY 
            = vlSelf->top__DOT__axis1_B_READY;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        vlSelf->top__DOT__axis2_W_READY = 0U;
    }
    vlSelf->top__DOT__axis1_R_VALID = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
    vlSelf->top__DOT__axis2_R_VALID = ((IData)(vlSelf->top__DOT__in_channel) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
    if (vlSelf->top__DOT__in_channel) {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AR_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_R_READY));
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = vlSelf->top__DOT__axis1_AR_VALID;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = vlSelf->top__DOT__axis1_R_READY;
    }
    if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID) 
           & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID)) 
          & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                                                 : 0ULL)), 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__src2
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                                                 : 0ULL)), 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->top__DOT__in_channel)
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
                                                                                 : 0U))));
    }
    vlSelf->top__DOT__u_IFU__DOT__rask = ((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                          & (IData)(vlSelf->top__DOT__axis1_R_READY));
    vlSelf->top__DOT__u_EXU__DOT__dataM_valid = (((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                  & (IData)(vlSelf->top__DOT__axis2_R_VALID)) 
                                                 | ((IData)(vlSelf->top__DOT__axis2_W_READY) 
                                                    & (IData)(vlSelf->top__DOT__axis2_W_VALID)));
    if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID) 
           & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID)) 
          & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)) 
         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                                                                 ? vlSelf->top__DOT__ifetch_pc
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))), vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA 
            = vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__exe_valid = ((IData)(vlSelf->rst_n) 
                                               & (((((((((4U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                         | (5U 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (6U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (7U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (8U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (9U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (0xaU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                   | (0x1aU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op))
                                                   ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                   : 
                                                  (((((((((0x1bU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                          | (0x1cU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x1dU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x25U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x2bU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0x2dU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (0x2eU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (0x2fU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op))
                                                    ? 
                                                   ((0x1bU 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                     : 
                                                    ((0x1cU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                      : 
                                                     ((0x1dU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                       : 
                                                      ((0x25U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (IData)(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid)
                                                        : 
                                                       ((0x2bU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid)
                                                         : (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid))))))
                                                    : 
                                                   ((0x30U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                     : 
                                                    ((0x31U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                      : 
                                                     ((0x32U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                       : 
                                                      ((0x35U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                        : 
                                                       ((0x36U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                         : 
                                                        ((0U 
                                                          != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                         & (IData)(vlSelf->top__DOT__IDU_vld))))))))));
    vlSelf->top__DOT__u_EXU__DOT__rdataM = (((IData)(vlSelf->top__DOT__axis2_R_VALID) 
                                             & (IData)(vlSelf->top__DOT__axis2_R_READY))
                                             ? ((IData)(vlSelf->top__DOT__in_channel)
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                  ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                  : 0ULL)
                                                 : 0ULL)
                                             : 0ULL);
    vlSelf->top__DOT__IFU_inst = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rask)
                                   ? (((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                       & (IData)(vlSelf->top__DOT__axis1_R_READY))
                                       ? ((IData)(vlSelf->top__DOT__in_channel)
                                           ? 0ULL : 
                                          (0xffffffffULL 
                                           & vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA))
                                       : 0ULL) : 0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_Q(64);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->mainUpdate_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ifetch_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__op = 0;
    vlSelf->top__DOT__flags = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__ifetch_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axis1_AW_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_W_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_B_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_AR_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_AR_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AW_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AW_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_W_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_W_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_B_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AR_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AR_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__in_channel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__itrace_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__pre_cnt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_IFU__DOT__rask = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__rreq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IDU__DOT__instR_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs1_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs2_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op_r = 0;
    vlSelf->top__DOT__u_EXU__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__flags_r = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__u_EXU__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op = 0;
    vlSelf->top__DOT__u_EXU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__flags = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__u_EXU__DOT__exe_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wenR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__div_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__remainder = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__raddrM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__rdataM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__waddrM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wmaskM = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__wenM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__renM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__dataM_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__rCSR = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wCSR1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wCSR2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__instCSR = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__u_EXU__DOT__wenC = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__cnt = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplicand_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__multiplier_r = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__u_EXU__DOT__u_mul__DOT__result_reg);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
