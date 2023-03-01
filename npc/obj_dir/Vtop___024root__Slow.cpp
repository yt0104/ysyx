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
    vlSelf->top__DOT__IDU_npc = 0x80000000ULL;
    vlSelf->top__DOT__EXU_npc = 0x80000000ULL;
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus = 0xa00001800ULL;
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf);
    vlSelf->top__DOT__IFU_ready = 1U;
    vlSelf->top__DOT__IDU_ready = 1U;
    vlSelf->top__DOT__IFU_pc = 0x80000000ULL;
    vlSelf->top__DOT__EXU_ready = 1U;
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp24;
    // Body
    vlSelf->top__DOT__u_EXU__DOT__quotient = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                               ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                               : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q);
    __Vtemp19[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp19[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp19[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
    __Vtemp22[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp22[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp22[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp23, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp24, __Vtemp22, __Vtemp23);
    if (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp21[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp21[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp21[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp24[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp24[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp24[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__div_out_valid = (
                                                   (~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy)) 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
    vlSelf->top__DOT__axis2_W_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg));
    vlSelf->top__DOT__axis1_AR_VALID = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                        | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__axis2_R_READY = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__axis2_AW_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__aw_valid_reg));
    vlSelf->top__DOT__axis2_AR_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__axis1_R_READY = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                       | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__IDU_npc_valid = ((IData)(vlSelf->rst_n) 
                                       & ((~ ((((((
                                                   ((0x67ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst)) 
                                                    | (0x2067ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__IFU_inst))) 
                                                   | (0x6fULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->top__DOT__IFU_inst))) 
                                                  | (0x63ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__IFU_inst))) 
                                                 | (0x1063ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__IFU_inst))) 
                                                | (0x5063ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__IFU_inst))) 
                                               | (0x4063ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__IFU_inst))) 
                                              | (0x6063ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst)))) 
                                          & ((0x7063ULL 
                                              != (0x707fULL 
                                                  & vlSelf->top__DOT__IFU_inst)) 
                                             & ((0x30200073ULL 
                                                 != 
                                                 (0xffffffffULL 
                                                  & vlSelf->top__DOT__IFU_inst)) 
                                                & ((0x73ULL 
                                                    != 
                                                    (0xffffffffULL 
                                                     & vlSelf->top__DOT__IFU_inst)) 
                                                   & ((0x100073ULL 
                                                       != 
                                                       (0xffffffffULL 
                                                        & vlSelf->top__DOT__IFU_inst)) 
                                                      & ((IData)(vlSelf->top__DOT__IDU_valid) 
                                                         & (IData)(vlSelf->top__DOT__IDU_ready))))))));
    if (((IData)(vlSelf->top__DOT__EXU_valid) & (IData)(vlSelf->top__DOT__EXU_ready))) {
        vlSelf->top__DOT__u_EXU__DOT__rd = vlSelf->top__DOT__rd;
        vlSelf->top__DOT__main_valid = 1U;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__IDU_pc;
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__IDU_inst;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__imm;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__rs1;
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__rs2;
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__op;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rd = vlSelf->top__DOT__u_EXU__DOT__rd_r;
        vlSelf->top__DOT__main_valid = 0U;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__u_EXU__DOT__pc_r;
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__u_EXU__DOT__inst_r;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__u_EXU__DOT__imm_r;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__u_EXU__DOT__rs1_r;
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__u_EXU__DOT__rs2_r;
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__u_EXU__DOT__op_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__remainder = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                                : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2);
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
    vlSelf->mainUpdate_valid = ((IData)(vlSelf->top__DOT__itrace_en)
                                 ? (1U & (IData)(vlSelf->top__DOT__main_valid))
                                 : 0U);
    vlSelf->pc = vlSelf->top__DOT__u_EXU__DOT__pc;
    vlSelf->inst = vlSelf->top__DOT__u_EXU__DOT__inst;
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs1];
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs2];
    vlSelf->top__DOT__u_EXU__DOT__dest = (((((((((0x11U 
                                                  == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                 | (0x12U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                | (0x13U 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                               | (0x14U 
                                                  == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                              | (0x27U 
                                                 == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                             | (0x28U 
                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                            | (0x29U 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                           | (0x2aU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op))
                                           ? ((0x11U 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                               : ((0x12U 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                   : 
                                                  ((0x13U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                    : 
                                                   ((0x14U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                     : 
                                                    ((0x27U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                      : 
                                                     ((0x28U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                       : 
                                                      ((0x29U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                        : 
                                                       (((QData)((IData)(
                                                                         (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp))))))))))
                                           : ((0x2bU 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                               : ((0x2cU 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                   : 
                                                  ((0x2dU 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                    : 
                                                   ((0x2eU 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                     : 
                                                    ((0x2fU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                      : 
                                                     ((0x30U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)))
                                                       : vlSelf->top__DOT__u_EXU__DOT__temp)))))));
    vlSelf->top__DOT__u_EXU__DOT__div_valid = ((IData)(vlSelf->rst_n) 
                                               & (((IData)(vlSelf->top__DOT__EXU_valid) 
                                                   & (IData)(vlSelf->top__DOT__EXU_ready)) 
                                                  & (((((((((0x25U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                            | (0x2bU 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x2dU 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x2eU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x2fU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x30U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x31U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0x32U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op))
                                                      ? 
                                                     ((0x25U 
                                                       != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                      & (0x2bU 
                                                         != vlSelf->top__DOT__u_EXU__DOT__op))
                                                      : 
                                                     ((0x35U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                      | (0x36U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)))));
    vlSelf->top__DOT__u_EXU__DOT__mul_valid = ((IData)(vlSelf->rst_n) 
                                               & (((IData)(vlSelf->top__DOT__EXU_valid) 
                                                   & (IData)(vlSelf->top__DOT__EXU_ready)) 
                                                  & (((((((((0x25U 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                            | (0x2bU 
                                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                           | (0x2dU 
                                                              == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                          | (0x2eU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x2fU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x30U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x31U 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0x32U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     & ((0x25U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                        | (0x2bU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)))));
    vlSelf->top__DOT__EXU_npc_valid = ((IData)(vlSelf->rst_n) 
                                       & (((((((((2U 
                                                  == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                 | (3U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                | (0x1eU 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                               | (0x37U 
                                                  == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                              | (0x38U 
                                                 == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                             | (0x39U 
                                                == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                            | (0x3aU 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                           | (0x3bU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op))
                                           ? ((2U == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                  & (IData)(vlSelf->top__DOT__EXU_ready))
                                               : ((3U 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                   & (IData)(vlSelf->top__DOT__EXU_ready))
                                                   : 
                                                  ((0x1eU 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                    & (IData)(vlSelf->top__DOT__EXU_ready))
                                                    : 
                                                   ((0x37U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                     & (IData)(vlSelf->top__DOT__EXU_ready))
                                                     : 
                                                    ((0x38U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                      & (IData)(vlSelf->top__DOT__EXU_ready))
                                                      : 
                                                     ((0x39U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                       & (IData)(vlSelf->top__DOT__EXU_ready))
                                                       : 
                                                      ((0x3aU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                        & (IData)(vlSelf->top__DOT__EXU_ready))
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                        & (IData)(vlSelf->top__DOT__EXU_ready)))))))))
                                           : ((0x3cU 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                  & (IData)(vlSelf->top__DOT__EXU_ready))
                                               : ((0x3dU 
                                                   == vlSelf->top__DOT__u_EXU__DOT__op)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                   & (IData)(vlSelf->top__DOT__EXU_ready))
                                                   : 
                                                  ((0x3eU 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                    & (IData)(vlSelf->top__DOT__EXU_ready))
                                                    : 
                                                   ((0x3fU 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                     & (IData)(vlSelf->top__DOT__EXU_ready))
                                                     : 
                                                    ((0U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                     & ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                        & (IData)(vlSelf->top__DOT__EXU_ready)))))))));
    vlSelf->top__DOT__u_EXU__DOT__instCSR = ((0x3dU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                              ? 2U : 
                                             ((0x3eU 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? 1U
                                               : 0U));
    vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__divw 
        = ((((0x2dU == vlSelf->top__DOT__u_EXU__DOT__op) 
             | (0x2eU == vlSelf->top__DOT__u_EXU__DOT__op)) 
            | (0x2fU == vlSelf->top__DOT__u_EXU__DOT__op)) 
           | (0x30U == vlSelf->top__DOT__u_EXU__DOT__op));
    vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div 
        = ((((0x36U == vlSelf->top__DOT__u_EXU__DOT__op) 
             | (0x2dU == vlSelf->top__DOT__u_EXU__DOT__op)) 
            | (0x35U == vlSelf->top__DOT__u_EXU__DOT__op)) 
           | (0x2eU == vlSelf->top__DOT__u_EXU__DOT__op));
    vlSelf->top__DOT__axis1_AR_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
    vlSelf->top__DOT__axis1_R_VALID = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
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
        vlSelf->top__DOT__axis2_W_READY = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY) 
                                           & 1U);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AW_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_W_VALID));
        vlSelf->top__DOT__axis2_R_VALID = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID) 
                                           & 1U);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AR_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_R_READY));
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY 
            = vlSelf->top__DOT__axis1_B_READY;
        vlSelf->top__DOT__axis2_W_READY = 0U;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        vlSelf->top__DOT__axis2_R_VALID = 0U;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = vlSelf->top__DOT__axis1_AR_VALID;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = vlSelf->top__DOT__axis1_R_READY;
    }
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
    if (vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__divw) {
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
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__waddr
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_addr_reg
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
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__wdata
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_data_reg
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
                                                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmask)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_strb_reg)
                                                                                 : 0U))
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                                                 : 0U))));
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
                                                   ? 
                                                  ((4U 
                                                    == vlSelf->top__DOT__u_EXU__DOT__op)
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                    & (IData)(vlSelf->top__DOT__axis2_R_VALID))
                                                    : 
                                                   ((5U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                     & (IData)(vlSelf->top__DOT__axis2_R_VALID))
                                                     : 
                                                    ((6U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                      & (IData)(vlSelf->top__DOT__axis2_R_VALID))
                                                      : 
                                                     ((7U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                       & (IData)(vlSelf->top__DOT__axis2_R_VALID))
                                                       : 
                                                      ((8U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? 
                                                       ((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                        & (IData)(vlSelf->top__DOT__axis2_R_VALID))
                                                        : 
                                                       ((9U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? 
                                                        ((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                         & (IData)(vlSelf->top__DOT__axis2_R_VALID))
                                                         : 
                                                        ((0xaU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)
                                                          ? 
                                                         ((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                          & (IData)(vlSelf->top__DOT__axis2_R_VALID))
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__axis2_W_READY) 
                                                          & (IData)(vlSelf->top__DOT__axis2_W_VALID)))))))))
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
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__axis2_W_READY) 
                                                     & (IData)(vlSelf->top__DOT__axis2_W_VALID))
                                                     : 
                                                    ((0x1cU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__axis2_W_READY) 
                                                      & (IData)(vlSelf->top__DOT__axis2_W_VALID))
                                                      : 
                                                     ((0x1dU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__axis2_W_READY) 
                                                       & (IData)(vlSelf->top__DOT__axis2_W_VALID))
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
                                                         & ((IData)(vlSelf->top__DOT__EXU_valid) 
                                                            & (IData)(vlSelf->top__DOT__EXU_ready)))))))))));
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
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__raddr
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                                                                 ? vlSelf->top__DOT__IFU_pc
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))), vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA 
            = vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__rdata = (((IData)(vlSelf->top__DOT__axis2_R_VALID) 
                                            & (IData)(vlSelf->top__DOT__axis2_R_READY))
                                            ? ((IData)(vlSelf->top__DOT__in_channel)
                                                ? ((IData)(vlSelf->top__DOT__in_channel)
                                                    ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                    : 0ULL)
                                                : 0ULL)
                                            : 0ULL);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->top__DOT__IDU_npc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__EXU_npc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__EXU_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__op = 0;
    vlSelf->top__DOT__EXU_npc_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_npc_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__npc_channel = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__main_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__pre_cnt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_IFU__DOT__rreq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs1_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs2_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op_r = 0;
    vlSelf->top__DOT__u_EXU__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op = 0;
    vlSelf->top__DOT__u_EXU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__exe_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wenR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__rCSR = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wCSR1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wCSR2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__instCSR = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__u_EXU__DOT__wenC = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__raddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__waddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__wenM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__renM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__div_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__remainder = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT____Vcellinp__u_div__sign_div = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_strb_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__aw_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__w_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__ar_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u0_AXI_master_SRAM__DOT__r_ready_reg = VL_RAND_RESET_I(1);
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
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
