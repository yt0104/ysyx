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

void Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP();

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__rs2 = 0U;
    if ((0x13U == (0x707fU & vlSelf->inst))) {
        vlSelf->top__DOT__imm = (((- (QData)((IData)(
                                                     (vlSelf->inst 
                                                      >> 0x1fU)))) 
                                  << 0xcU) | (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x14U))));
        vlSelf->top__DOT__op = 1U;
        vlSelf->top__DOT__rs1 = (0x1fU & (vlSelf->inst 
                                          >> 0xfU));
        vlSelf->top__DOT__rd = (0x1fU & (vlSelf->inst 
                                         >> 7U));
    } else {
        vlSelf->top__DOT__imm = 0ULL;
        vlSelf->top__DOT__op = ((0x100073U == vlSelf->inst)
                                 ? 0x32U : 0U);
        vlSelf->top__DOT__rs1 = 0U;
        vlSelf->top__DOT__rd = 0U;
    }
    if (((((((((1U == vlSelf->top__DOT__op) | (2U == vlSelf->top__DOT__op)) 
              | (3U == vlSelf->top__DOT__op)) | (4U 
                                                 == vlSelf->top__DOT__op)) 
            | (5U == vlSelf->top__DOT__op)) | (6U == vlSelf->top__DOT__op)) 
          | (7U == vlSelf->top__DOT__op)) | (8U == vlSelf->top__DOT__op))) {
        vlSelf->top__DOT__u_EXU__DOT__wenR = ((1U == vlSelf->top__DOT__op) 
                                              | ((2U 
                                                  != vlSelf->top__DOT__op) 
                                                 & (3U 
                                                    == vlSelf->top__DOT__op)));
        vlSelf->top__DOT__exit_flag = (1U & ((1U != vlSelf->top__DOT__op) 
                                             & ((2U 
                                                 == vlSelf->top__DOT__op) 
                                                | (3U 
                                                   != vlSelf->top__DOT__op))));
    } else {
        vlSelf->top__DOT__u_EXU__DOT__wenR = ((~ ((
                                                   ((((((9U 
                                                         == vlSelf->top__DOT__op) 
                                                        | (0xaU 
                                                           == vlSelf->top__DOT__op)) 
                                                       | (0xbU 
                                                          == vlSelf->top__DOT__op)) 
                                                      | (0xcU 
                                                         == vlSelf->top__DOT__op)) 
                                                     | (0xdU 
                                                        == vlSelf->top__DOT__op)) 
                                                    | (0xeU 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0xfU 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (0x10U 
                                                     == vlSelf->top__DOT__op))) 
                                              & (((((((((0x11U 
                                                         == vlSelf->top__DOT__op) 
                                                        | (0x12U 
                                                           == vlSelf->top__DOT__op)) 
                                                       | (0x13U 
                                                          == vlSelf->top__DOT__op)) 
                                                      | (0x14U 
                                                         == vlSelf->top__DOT__op)) 
                                                     | (0x15U 
                                                        == vlSelf->top__DOT__op)) 
                                                    | (0x16U 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0x17U 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (0x18U 
                                                     == vlSelf->top__DOT__op))
                                                  ? 
                                                 ((0x11U 
                                                   != vlSelf->top__DOT__op) 
                                                  & ((0x12U 
                                                      != vlSelf->top__DOT__op) 
                                                     & ((0x13U 
                                                         == vlSelf->top__DOT__op) 
                                                        | (0x14U 
                                                           == vlSelf->top__DOT__op))))
                                                  : 
                                                 (((((((((0x19U 
                                                          == vlSelf->top__DOT__op) 
                                                         | (0x1aU 
                                                            == vlSelf->top__DOT__op)) 
                                                        | (0x1bU 
                                                           == vlSelf->top__DOT__op)) 
                                                       | (0x1cU 
                                                          == vlSelf->top__DOT__op)) 
                                                      | (0x1dU 
                                                         == vlSelf->top__DOT__op)) 
                                                     | (0x1eU 
                                                        == vlSelf->top__DOT__op)) 
                                                    | (0x1fU 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0x20U 
                                                      == vlSelf->top__DOT__op)) 
                                                  & (0x19U 
                                                     == vlSelf->top__DOT__op))));
        vlSelf->top__DOT__exit_flag = (1U & (((((((
                                                   ((9U 
                                                     == vlSelf->top__DOT__op) 
                                                    | (0xaU 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0xbU 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (0xcU 
                                                     == vlSelf->top__DOT__op)) 
                                                 | (0xdU 
                                                    == vlSelf->top__DOT__op)) 
                                                | (0xeU 
                                                   == vlSelf->top__DOT__op)) 
                                               | (0xfU 
                                                  == vlSelf->top__DOT__op)) 
                                              | (0x10U 
                                                 == vlSelf->top__DOT__op)) 
                                             | (((((((((0x11U 
                                                        == vlSelf->top__DOT__op) 
                                                       | (0x12U 
                                                          == vlSelf->top__DOT__op)) 
                                                      | (0x13U 
                                                         == vlSelf->top__DOT__op)) 
                                                     | (0x14U 
                                                        == vlSelf->top__DOT__op)) 
                                                    | (0x15U 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0x16U 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (0x17U 
                                                     == vlSelf->top__DOT__op)) 
                                                 | (0x18U 
                                                    == vlSelf->top__DOT__op))
                                                 ? 
                                                ((0x11U 
                                                  == vlSelf->top__DOT__op) 
                                                 | ((0x12U 
                                                     == vlSelf->top__DOT__op) 
                                                    | ((0x13U 
                                                        != vlSelf->top__DOT__op) 
                                                       & (0x14U 
                                                          != vlSelf->top__DOT__op))))
                                                 : 
                                                ((~ 
                                                  ((((((((0x19U 
                                                          == vlSelf->top__DOT__op) 
                                                         | (0x1aU 
                                                            == vlSelf->top__DOT__op)) 
                                                        | (0x1bU 
                                                           == vlSelf->top__DOT__op)) 
                                                       | (0x1cU 
                                                          == vlSelf->top__DOT__op)) 
                                                      | (0x1dU 
                                                         == vlSelf->top__DOT__op)) 
                                                     | (0x1eU 
                                                        == vlSelf->top__DOT__op)) 
                                                    | (0x1fU 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0x20U 
                                                      == vlSelf->top__DOT__op))) 
                                                 | (0x19U 
                                                    != vlSelf->top__DOT__op)))));
    }
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
        [vlSelf->top__DOT__rs1];
    if (vlSelf->top__DOT__exit_flag) {
        Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP();
    }
    vlSelf->top__DOT__npc = (((((((((1U == vlSelf->top__DOT__op) 
                                    | (2U == vlSelf->top__DOT__op)) 
                                   | (3U == vlSelf->top__DOT__op)) 
                                  | (4U == vlSelf->top__DOT__op)) 
                                 | (5U == vlSelf->top__DOT__op)) 
                                | (6U == vlSelf->top__DOT__op)) 
                               | (7U == vlSelf->top__DOT__op)) 
                              | (8U == vlSelf->top__DOT__op))
                              ? ((1U == vlSelf->top__DOT__op)
                                  ? (4ULL + vlSelf->pc)
                                  : ((2U == vlSelf->top__DOT__op)
                                      ? (4ULL + vlSelf->pc)
                                      : ((3U == vlSelf->top__DOT__op)
                                          ? (0xfffffffffffffffeULL 
                                             & (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                + vlSelf->top__DOT__imm))
                                          : ((4U == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((5U 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((6U 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->pc)
                                                   : 
                                                  ((7U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->pc))))))))
                              : (((((((((9U == vlSelf->top__DOT__op) 
                                        | (0xaU == vlSelf->top__DOT__op)) 
                                       | (0xbU == vlSelf->top__DOT__op)) 
                                      | (0xcU == vlSelf->top__DOT__op)) 
                                     | (0xdU == vlSelf->top__DOT__op)) 
                                    | (0xeU == vlSelf->top__DOT__op)) 
                                   | (0xfU == vlSelf->top__DOT__op)) 
                                  | (0x10U == vlSelf->top__DOT__op))
                                  ? ((9U == vlSelf->top__DOT__op)
                                      ? (4ULL + vlSelf->pc)
                                      : ((0xaU == vlSelf->top__DOT__op)
                                          ? (4ULL + vlSelf->pc)
                                          : ((0xbU 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0xcU 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((0xdU 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->pc)
                                                   : 
                                                  ((0xeU 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((0xfU 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->pc))))))))
                                  : (((((((((0x11U 
                                             == vlSelf->top__DOT__op) 
                                            | (0x12U 
                                               == vlSelf->top__DOT__op)) 
                                           | (0x13U 
                                              == vlSelf->top__DOT__op)) 
                                          | (0x14U 
                                             == vlSelf->top__DOT__op)) 
                                         | (0x15U == vlSelf->top__DOT__op)) 
                                        | (0x16U == vlSelf->top__DOT__op)) 
                                       | (0x17U == vlSelf->top__DOT__op)) 
                                      | (0x18U == vlSelf->top__DOT__op))
                                      ? ((0x11U == vlSelf->top__DOT__op)
                                          ? (4ULL + vlSelf->pc)
                                          : ((0x12U 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0x13U 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((0x14U 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->pc)
                                                   : 
                                                  ((0x15U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((0x16U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((0x17U 
                                                      == vlSelf->top__DOT__op)
                                                      ? 
                                                     (4ULL 
                                                      + vlSelf->pc)
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->pc))))))))
                                      : (((((((((0x19U 
                                                 == vlSelf->top__DOT__op) 
                                                | (0x1aU 
                                                   == vlSelf->top__DOT__op)) 
                                               | (0x1bU 
                                                  == vlSelf->top__DOT__op)) 
                                              | (0x1cU 
                                                 == vlSelf->top__DOT__op)) 
                                             | (0x1dU 
                                                == vlSelf->top__DOT__op)) 
                                            | (0x1eU 
                                               == vlSelf->top__DOT__op)) 
                                           | (0x1fU 
                                              == vlSelf->top__DOT__op)) 
                                          | (0x20U 
                                             == vlSelf->top__DOT__op))
                                          ? ((0x19U 
                                              == vlSelf->top__DOT__op)
                                              ? (vlSelf->pc 
                                                 + vlSelf->top__DOT__imm)
                                              : ((0x1aU 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((0x1bU 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->pc)
                                                   : 
                                                  ((0x1cU 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((0x1dU 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((0x1eU 
                                                      == vlSelf->top__DOT__op)
                                                      ? 
                                                     (4ULL 
                                                      + vlSelf->pc)
                                                      : 
                                                     ((0x1fU 
                                                       == vlSelf->top__DOT__op)
                                                       ? 
                                                      (4ULL 
                                                       + vlSelf->pc)
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->pc))))))))
                                          : (((((((
                                                   ((0x21U 
                                                     == vlSelf->top__DOT__op) 
                                                    | (0x22U 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0x23U 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (0x24U 
                                                     == vlSelf->top__DOT__op)) 
                                                 | (0x25U 
                                                    == vlSelf->top__DOT__op)) 
                                                | (0x26U 
                                                   == vlSelf->top__DOT__op)) 
                                               | (0x27U 
                                                  == vlSelf->top__DOT__op)) 
                                              | (0x28U 
                                                 == vlSelf->top__DOT__op))
                                              ? ((0x21U 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((0x22U 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->pc)
                                                   : 
                                                  ((0x23U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((0x24U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((0x25U 
                                                      == vlSelf->top__DOT__op)
                                                      ? 
                                                     (4ULL 
                                                      + vlSelf->pc)
                                                      : 
                                                     ((0x26U 
                                                       == vlSelf->top__DOT__op)
                                                       ? 
                                                      (4ULL 
                                                       + vlSelf->pc)
                                                       : 
                                                      ((0x27U 
                                                        == vlSelf->top__DOT__op)
                                                        ? 
                                                       (4ULL 
                                                        + vlSelf->pc)
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->pc))))))))
                                              : (((
                                                   ((((((0x29U 
                                                         == vlSelf->top__DOT__op) 
                                                        | (0x2aU 
                                                           == vlSelf->top__DOT__op)) 
                                                       | (0x2bU 
                                                          == vlSelf->top__DOT__op)) 
                                                      | (0x2cU 
                                                         == vlSelf->top__DOT__op)) 
                                                     | (0x2dU 
                                                        == vlSelf->top__DOT__op)) 
                                                    | (0x2eU 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (0x2fU 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (0x30U 
                                                     == vlSelf->top__DOT__op))
                                                  ? 
                                                 ((0x29U 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->pc)
                                                   : 
                                                  ((0x2aU 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((0x2bU 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((0x2cU 
                                                      == vlSelf->top__DOT__op)
                                                      ? 
                                                     (4ULL 
                                                      + vlSelf->pc)
                                                      : 
                                                     ((0x2dU 
                                                       == vlSelf->top__DOT__op)
                                                       ? 
                                                      (4ULL 
                                                       + vlSelf->pc)
                                                       : 
                                                      ((0x2eU 
                                                        == vlSelf->top__DOT__op)
                                                        ? 
                                                       (4ULL 
                                                        + vlSelf->pc)
                                                        : 
                                                       ((0x2fU 
                                                         == vlSelf->top__DOT__op)
                                                         ? 
                                                        (4ULL 
                                                         + vlSelf->pc)
                                                         : 
                                                        (4ULL 
                                                         + vlSelf->pc))))))))
                                                  : 
                                                 ((0x31U 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->pc)
                                                   : 
                                                  ((0x32U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((0U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : vlSelf->pc)))))))));
    if (((((((((1U == vlSelf->top__DOT__op) | (2U == vlSelf->top__DOT__op)) 
              | (3U == vlSelf->top__DOT__op)) | (4U 
                                                 == vlSelf->top__DOT__op)) 
            | (5U == vlSelf->top__DOT__op)) | (6U == vlSelf->top__DOT__op)) 
          | (7U == vlSelf->top__DOT__op)) | (8U == vlSelf->top__DOT__op))) {
        if ((1U == vlSelf->top__DOT__op)) {
            vlSelf->top__DOT__u_EXU__DOT__dest = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  + vlSelf->top__DOT__imm);
        } else if ((2U != vlSelf->top__DOT__op)) {
            if ((3U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (4ULL + vlSelf->pc);
            }
        }
    } else if ((1U & (~ ((((((((9U == vlSelf->top__DOT__op) 
                               | (0xaU == vlSelf->top__DOT__op)) 
                              | (0xbU == vlSelf->top__DOT__op)) 
                             | (0xcU == vlSelf->top__DOT__op)) 
                            | (0xdU == vlSelf->top__DOT__op)) 
                           | (0xeU == vlSelf->top__DOT__op)) 
                          | (0xfU == vlSelf->top__DOT__op)) 
                         | (0x10U == vlSelf->top__DOT__op))))) {
        if (((((((((0x11U == vlSelf->top__DOT__op) 
                   | (0x12U == vlSelf->top__DOT__op)) 
                  | (0x13U == vlSelf->top__DOT__op)) 
                 | (0x14U == vlSelf->top__DOT__op)) 
                | (0x15U == vlSelf->top__DOT__op)) 
               | (0x16U == vlSelf->top__DOT__op)) | 
              (0x17U == vlSelf->top__DOT__op)) | (0x18U 
                                                  == vlSelf->top__DOT__op))) {
            if ((0x11U != vlSelf->top__DOT__op)) {
                if ((0x12U != vlSelf->top__DOT__op)) {
                    if ((0x13U == vlSelf->top__DOT__op)) {
                        vlSelf->top__DOT__u_EXU__DOT__dest 
                            = (vlSelf->pc + vlSelf->top__DOT__imm);
                    } else if ((0x14U == vlSelf->top__DOT__op)) {
                        vlSelf->top__DOT__u_EXU__DOT__dest 
                            = (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__imm 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(
                                                                     (vlSelf->top__DOT__imm 
                                                                      >> 0xcU)) 
                                                             << 0xcU))));
                    }
                }
            }
        } else if (((((((((0x19U == vlSelf->top__DOT__op) 
                          | (0x1aU == vlSelf->top__DOT__op)) 
                         | (0x1bU == vlSelf->top__DOT__op)) 
                        | (0x1cU == vlSelf->top__DOT__op)) 
                       | (0x1dU == vlSelf->top__DOT__op)) 
                      | (0x1eU == vlSelf->top__DOT__op)) 
                     | (0x1fU == vlSelf->top__DOT__op)) 
                    | (0x20U == vlSelf->top__DOT__op))) {
            if ((0x19U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (4ULL + vlSelf->pc);
            }
        } else if ((1U & (~ ((((((((0x21U == vlSelf->top__DOT__op) 
                                   | (0x22U == vlSelf->top__DOT__op)) 
                                  | (0x23U == vlSelf->top__DOT__op)) 
                                 | (0x24U == vlSelf->top__DOT__op)) 
                                | (0x25U == vlSelf->top__DOT__op)) 
                               | (0x26U == vlSelf->top__DOT__op)) 
                              | (0x27U == vlSelf->top__DOT__op)) 
                             | (0x28U == vlSelf->top__DOT__op))))) {
            if ((1U & (~ ((((((((0x29U == vlSelf->top__DOT__op) 
                                | (0x2aU == vlSelf->top__DOT__op)) 
                               | (0x2bU == vlSelf->top__DOT__op)) 
                              | (0x2cU == vlSelf->top__DOT__op)) 
                             | (0x2dU == vlSelf->top__DOT__op)) 
                            | (0x2eU == vlSelf->top__DOT__op)) 
                           | (0x2fU == vlSelf->top__DOT__op)) 
                          | (0x30U == vlSelf->top__DOT__op))))) {
                if ((0x31U != vlSelf->top__DOT__op)) {
                    if ((0x32U != vlSelf->top__DOT__op)) {
                        if ((0U != vlSelf->top__DOT__op)) {
                            vlSelf->top__DOT__u_EXU__DOT__dest 
                                = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
                                [vlSelf->top__DOT__rs2];
                        }
                    }
                }
            }
        }
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
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
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exit_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu = 0;
    vlSelf->top__DOT__npc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__op = 0;
    vlSelf->top__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wenR = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
