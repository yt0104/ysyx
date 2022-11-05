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

void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Body
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x67U == (0x707fU & vlSelf->inst))) 
              | (0x2067U == (0x707fU & vlSelf->inst))) 
             | (0x4003U == (0x707fU & vlSelf->inst))) 
            | (0x5003U == (0x707fU & vlSelf->inst))) 
           | (0x3003U == (0x707fU & vlSelf->inst))) 
          | (0x2003U == (0x707fU & vlSelf->inst))) 
         | (0x1003U == (0x707fU & vlSelf->inst)))) {
        vlSelf->top__DOT__rs1 = (0x1fU & ((0x13U == 
                                           (0x707fU 
                                            & vlSelf->inst))
                                           ? (vlSelf->inst 
                                              >> 0xfU)
                                           : ((0x67U 
                                               == (0x707fU 
                                                   & vlSelf->inst))
                                               ? (vlSelf->inst 
                                                  >> 0xfU)
                                               : ((0x2067U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (vlSelf->inst 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 
                                                      (vlSelf->inst 
                                                       >> 0xfU)))))))));
        vlSelf->top__DOT__rs2 = 0U;
        vlSelf->top__DOT__imm = ((0x13U == (0x707fU 
                                            & vlSelf->inst))
                                  ? (((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x14U))))
                                  : ((0x67U == (0x707fU 
                                                & vlSelf->inst))
                                      ? (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x14U))))
                                      : ((0x2067U == 
                                          (0x707fU 
                                           & vlSelf->inst))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x14U))))
                                          : ((0x4003U 
                                              == (0x707fU 
                                                  & vlSelf->inst))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))))
                                              : ((0x5003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x14U))))
                                                  : 
                                                 ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x14U))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x14U)))))))))));
        vlSelf->top__DOT__op = ((0x13U == (0x707fU 
                                           & vlSelf->inst))
                                 ? 1U : ((0x67U == 
                                          (0x707fU 
                                           & vlSelf->inst))
                                          ? 2U : ((0x2067U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 3U
                                                   : 
                                                  ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 4U
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 6U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 7U
                                                       : 8U)))))));
        vlSelf->top__DOT__rd = (0x1fU & ((0x13U == 
                                          (0x707fU 
                                           & vlSelf->inst))
                                          ? (vlSelf->inst 
                                             >> 7U)
                                          : ((0x67U 
                                              == (0x707fU 
                                                  & vlSelf->inst))
                                              ? (vlSelf->inst 
                                                 >> 7U)
                                              : ((0x2067U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (vlSelf->inst 
                                                  >> 7U)
                                                  : 
                                                 ((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (vlSelf->inst 
                                                   >> 7U)
                                                   : 
                                                  ((0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 7U)
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 7U)
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 7U)
                                                      : 
                                                     (vlSelf->inst 
                                                      >> 7U)))))))));
    } else {
        vlSelf->top__DOT__rs1 = (0x1fU & (((((((((0x1013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->inst)) 
                                                 | (0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->inst))) 
                                                | (0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))) 
                                               | (0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))) 
                                              | (0x40005013U 
                                                 == 
                                                 (0xfc00707fU 
                                                  & vlSelf->inst))) 
                                             | (0x7013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->inst))) 
                                            | (0x1bU 
                                               == (0x707fU 
                                                   & vlSelf->inst))) 
                                           | (0x101bU 
                                              == (0xfc00707fU 
                                                  & vlSelf->inst)))
                                           ? ((0x1013U 
                                               == (0xfc00707fU 
                                                   & vlSelf->inst))
                                               ? (vlSelf->inst 
                                                  >> 0xfU)
                                               : ((0x5013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (vlSelf->inst 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x4013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0xfU)
                                                        : 
                                                       (vlSelf->inst 
                                                        >> 0xfU))))))))
                                           : ((((((
                                                   (((0x501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->inst)) 
                                                     | (0x4000501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst))) 
                                                   | (0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst))) 
                                                  | (0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))) 
                                                | (0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))) 
                                               | (0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)))
                                               ? ((0x501bU 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (vlSelf->inst 
                                                   >> 0xfU)
                                                   : 
                                                  ((0x4000501bU 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 0xfU)
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))
                                                     ? 0U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0xfU)
                                                        : 
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0xfU)
                                                         : 
                                                        (vlSelf->inst 
                                                         >> 0xfU))))))))
                                               : ((
                                                   (((((((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst)) 
                                                         | (0x33U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x2000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst)))
                                                   ? 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 0U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0xfU)
                                                        : 
                                                       ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0xfU)
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 0xfU)
                                                          : 
                                                         (vlSelf->inst 
                                                          >> 0xfU))))))))
                                                   : 
                                                  (((((((((0x2033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst)) 
                                                          | (0x3bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x103bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x4000503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x200403bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst)))
                                                    ? 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 0xfU)
                                                     : 
                                                    ((0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0xfU)
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0xfU)
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 0xfU)
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))
                                                           ? 
                                                          (vlSelf->inst 
                                                           >> 0xfU)
                                                           : 
                                                          (vlSelf->inst 
                                                           >> 0xfU))))))))
                                                    : 
                                                   (((((((((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst)) 
                                                           | (0x200503bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->inst))) 
                                                          | (0x200703bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x1063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x6063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst)))
                                                     ? 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 0xfU)
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0xfU)
                                                       : 
                                                      ((0x200703bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0xfU)
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0xfU)
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 0xfU)
                                                          : 
                                                         ((0x5063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))
                                                           ? 
                                                          (vlSelf->inst 
                                                           >> 0xfU)
                                                           : 
                                                          ((0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst))
                                                            ? 
                                                           (vlSelf->inst 
                                                            >> 0xfU)
                                                            : 
                                                           (vlSelf->inst 
                                                            >> 0xfU))))))))
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 0xfU)
                                                      : 0U)))))));
        vlSelf->top__DOT__rs2 = (((((((((0x1013U == 
                                         (0xfc00707fU 
                                          & vlSelf->inst)) 
                                        | (0x5013U 
                                           == (0xfc00707fU 
                                               & vlSelf->inst))) 
                                       | (0x3013U == 
                                          (0x707fU 
                                           & vlSelf->inst))) 
                                      | (0x4013U == 
                                         (0x707fU & vlSelf->inst))) 
                                     | (0x40005013U 
                                        == (0xfc00707fU 
                                            & vlSelf->inst))) 
                                    | (0x7013U == (0x707fU 
                                                   & vlSelf->inst))) 
                                   | (0x1bU == (0x707fU 
                                                & vlSelf->inst))) 
                                  | (0x101bU == (0xfc00707fU 
                                                 & vlSelf->inst)))
                                  ? 0U : (0x1fU & (
                                                   ((((((((0x501bU 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->inst)) 
                                                          | (0x4000501bU 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst))) 
                                                        | (0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst))) 
                                                       | (0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)))
                                                    ? 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->inst))
                                                      ? 0U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst))
                                                       ? 0U
                                                       : 
                                                      ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst))
                                                        ? 0U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 0x14U)
                                                          : 
                                                         ((0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))
                                                           ? 
                                                          (vlSelf->inst 
                                                           >> 0x14U)
                                                           : 
                                                          (vlSelf->inst 
                                                           >> 0x14U))))))))
                                                    : 
                                                   (((((((((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst)) 
                                                           | (0x33U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->inst))) 
                                                          | (0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x4033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst)))
                                                     ? 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst))
                                                      ? 0U
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0x14U)
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 0x14U)
                                                          : 
                                                         ((0x4033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))
                                                           ? 
                                                          (vlSelf->inst 
                                                           >> 0x14U)
                                                           : 
                                                          ((0x40000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))
                                                            ? 
                                                           (vlSelf->inst 
                                                            >> 0x14U)
                                                            : 
                                                           (vlSelf->inst 
                                                            >> 0x14U))))))))
                                                     : 
                                                    (((((((((0x2033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst)) 
                                                            | (0x3bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->inst))) 
                                                           | (0x103bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->inst))) 
                                                          | (0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x4000503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x4000003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x200403bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst)))
                                                      ? 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 0x14U)
                                                       : 
                                                      ((0x3bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 0x14U)
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))
                                                           ? 
                                                          (vlSelf->inst 
                                                           >> 0x14U)
                                                           : 
                                                          ((0x200003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))
                                                            ? 
                                                           (vlSelf->inst 
                                                            >> 0x14U)
                                                            : 
                                                           ((0x4000003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst))
                                                             ? 
                                                            (vlSelf->inst 
                                                             >> 0x14U)
                                                             : 
                                                            (vlSelf->inst 
                                                             >> 0x14U))))))))
                                                      : 
                                                     (((((((((0x200603bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->inst)) 
                                                             | (0x200503bU 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->inst))) 
                                                            | (0x200703bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->inst))) 
                                                           | (0x63U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->inst))) 
                                                          | (0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst)))
                                                       ? 
                                                      ((0x200603bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0x14U)
                                                        : 
                                                       ((0x200503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 0x14U)
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 0x14U)
                                                          : 
                                                         ((0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))
                                                           ? 
                                                          (vlSelf->inst 
                                                           >> 0x14U)
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst))
                                                            ? 
                                                           (vlSelf->inst 
                                                            >> 0x14U)
                                                            : 
                                                           ((0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->inst))
                                                             ? 
                                                            (vlSelf->inst 
                                                             >> 0x14U)
                                                             : 
                                                            ((0x4063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->inst))
                                                              ? 
                                                             (vlSelf->inst 
                                                              >> 0x14U)
                                                              : 
                                                             (vlSelf->inst 
                                                              >> 0x14U))))))))
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 0x14U)
                                                        : 0U)))))));
        vlSelf->top__DOT__imm = (((((((((0x1013U == 
                                         (0xfc00707fU 
                                          & vlSelf->inst)) 
                                        | (0x5013U 
                                           == (0xfc00707fU 
                                               & vlSelf->inst))) 
                                       | (0x3013U == 
                                          (0x707fU 
                                           & vlSelf->inst))) 
                                      | (0x4013U == 
                                         (0x707fU & vlSelf->inst))) 
                                     | (0x40005013U 
                                        == (0xfc00707fU 
                                            & vlSelf->inst))) 
                                    | (0x7013U == (0x707fU 
                                                   & vlSelf->inst))) 
                                   | (0x1bU == (0x707fU 
                                                & vlSelf->inst))) 
                                  | (0x101bU == (0xfc00707fU 
                                                 & vlSelf->inst)))
                                  ? ((0x1013U == (0xfc00707fU 
                                                  & vlSelf->inst))
                                      ? (((- (QData)((IData)(
                                                             (vlSelf->inst 
                                                              >> 0x1fU)))) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (vlSelf->inst 
                                                            >> 0x14U))))
                                      : ((0x5013U == 
                                          (0xfc00707fU 
                                           & vlSelf->inst))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x14U))))
                                          : ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->inst))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))))
                                              : ((0x4013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->inst 
                                                                     >> 0x14U))))
                                                  : 
                                                 ((0x40005013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U))))
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0x14U))))
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x14U))))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x14U)))))))))))
                                  : (((((((((0x501bU 
                                             == (0xfc00707fU 
                                                 & vlSelf->inst)) 
                                            | (0x4000501bU 
                                               == (0xfc00707fU 
                                                   & vlSelf->inst))) 
                                           | (0x17U 
                                              == (0x7fU 
                                                  & vlSelf->inst))) 
                                          | (0x37U 
                                             == (0x7fU 
                                                 & vlSelf->inst))) 
                                         | (0x3023U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                        | (0x2023U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                       | (0x1023U == 
                                          (0x707fU 
                                           & vlSelf->inst))) 
                                      | (0x23U == (0x707fU 
                                                   & vlSelf->inst)))
                                      ? ((0x501bU == 
                                          (0xfc00707fU 
                                           & vlSelf->inst))
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->inst 
                                                                >> 0x14U))))
                                          : ((0x4000501bU 
                                              == (0xfc00707fU 
                                                  & vlSelf->inst))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->inst 
                                                                    >> 0x14U))))
                                              : ((0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->inst 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->inst))))
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->inst 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->inst))))
                                                   : 
                                                  ((0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->inst 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->inst 
                                                                             >> 7U))))))
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->inst 
                                                                          >> 0x1fU)))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       ((0xfe0U 
                                                                         & (vlSelf->inst 
                                                                            >> 0x14U)) 
                                                                        | (0x1fU 
                                                                           & (vlSelf->inst 
                                                                              >> 7U))))))
                                                     : 
                                                    ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->inst 
                                                                               >> 7U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0xfe0U 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1fU 
                                                                            & (vlSelf->inst 
                                                                               >> 7U)))))))))))))
                                      : (((((((((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->inst)) 
                                                | (0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst))) 
                                               | (0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                              | (0x7033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst))) 
                                             | (0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->inst))) 
                                            | (0x4033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                           | (0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->inst))) 
                                          | (0x2000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->inst)))
                                          ? ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->inst))
                                              ? (((- (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x1fU)))) 
                                                  << 0x14U) 
                                                 | (QData)((IData)(
                                                                   ((0xff000U 
                                                                     & vlSelf->inst) 
                                                                    | ((0x800U 
                                                                        & (vlSelf->inst 
                                                                           >> 9U)) 
                                                                       | (0x7feU 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U)))))))
                                              : 0ULL)
                                          : (((((((
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst)) 
                                                    | (0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))) 
                                                  | (0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))) 
                                                 | (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))) 
                                                | (0x200003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst))) 
                                               | (0x4000003bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                              | (0x200403bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst)))
                                              ? 0ULL
                                              : (((
                                                   ((((((0x200603bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst)) 
                                                        | (0x200503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))) 
                                                  | (0x6063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst)))
                                                  ? 
                                                 ((0x200603bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst))
                                                   ? 0ULL
                                                   : 
                                                  ((0x200503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))
                                                    ? 0ULL
                                                    : 
                                                   ((0x200703bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 0ULL
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->inst 
                                                                           >> 0x1fU)))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelf->inst 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->inst 
                                                                                >> 7U)))))))
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (vlSelf->inst 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         ((0x800U 
                                                                           & (vlSelf->inst 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U)))))))
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (vlSelf->inst 
                                                                             >> 0x1fU)))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->inst 
                                                                               << 4U)) 
                                                                           | ((0x7e0U 
                                                                               & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                              | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U)))))))
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & (vlSelf->inst 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U)))))))
                                                         : 
                                                        (((- (QData)((IData)(
                                                                             (vlSelf->inst 
                                                                              >> 0x1fU)))) 
                                                          << 0xcU) 
                                                         | (QData)((IData)(
                                                                           ((0x800U 
                                                                             & (vlSelf->inst 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->inst 
                                                                                >> 7U))))))))))))))
                                                  : 
                                                 ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0x800U 
                                                                       & (vlSelf->inst 
                                                                          << 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelf->inst 
                                                                             >> 0x14U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelf->inst 
                                                                               >> 7U)))))))
                                                   : 0ULL))))));
        vlSelf->top__DOT__op = (((((((((0x1013U == 
                                        (0xfc00707fU 
                                         & vlSelf->inst)) 
                                       | (0x5013U == 
                                          (0xfc00707fU 
                                           & vlSelf->inst))) 
                                      | (0x3013U == 
                                         (0x707fU & vlSelf->inst))) 
                                     | (0x4013U == 
                                        (0x707fU & vlSelf->inst))) 
                                    | (0x40005013U 
                                       == (0xfc00707fU 
                                           & vlSelf->inst))) 
                                   | (0x7013U == (0x707fU 
                                                  & vlSelf->inst))) 
                                  | (0x1bU == (0x707fU 
                                               & vlSelf->inst))) 
                                 | (0x101bU == (0xfc00707fU 
                                                & vlSelf->inst)))
                                 ? ((0x1013U == (0xfc00707fU 
                                                 & vlSelf->inst))
                                     ? 9U : ((0x5013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->inst))
                                              ? 0xaU
                                              : ((0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))
                                                  ? 0xbU
                                                  : 
                                                 ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 0xcU
                                                   : 
                                                  ((0x40005013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->inst))
                                                    ? 0xdU
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 0xfU
                                                      : 0x10U)))))))
                                 : (((((((((0x501bU 
                                            == (0xfc00707fU 
                                                & vlSelf->inst)) 
                                           | (0x4000501bU 
                                              == (0xfc00707fU 
                                                  & vlSelf->inst))) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->inst))) 
                                         | (0x37U == 
                                            (0x7fU 
                                             & vlSelf->inst))) 
                                        | (0x3023U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                       | (0x2023U == 
                                          (0x707fU 
                                           & vlSelf->inst))) 
                                      | (0x1023U == 
                                         (0x707fU & vlSelf->inst))) 
                                     | (0x23U == (0x707fU 
                                                  & vlSelf->inst)))
                                     ? ((0x501bU == 
                                         (0xfc00707fU 
                                          & vlSelf->inst))
                                         ? 0x11U : 
                                        ((0x4000501bU 
                                          == (0xfc00707fU 
                                              & vlSelf->inst))
                                          ? 0x12U : 
                                         ((0x17U == 
                                           (0x7fU & vlSelf->inst))
                                           ? 0x13U : 
                                          ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->inst))
                                            ? 0x14U
                                            : ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->inst))
                                                ? 0x15U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 0x16U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 0x17U
                                                     : 0x18U)))))))
                                     : (((((((((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               | (0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                              | (0x3033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst))) 
                                             | (0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->inst))) 
                                            | (0x6033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                           | (0x4033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->inst))) 
                                          | (0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & vlSelf->inst)))
                                         ? ((0x6fU 
                                             == (0x7fU 
                                                 & vlSelf->inst))
                                             ? 0x19U
                                             : ((0x33U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst))
                                                 ? 0x1aU
                                                 : 
                                                ((0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst))
                                                  ? 0x1bU
                                                  : 
                                                 ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst))
                                                   ? 0x1cU
                                                   : 
                                                  ((0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))
                                                    ? 0x1dU
                                                    : 
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 0x1eU
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 0x1fU
                                                      : 0x20U)))))))
                                         : ((((((((
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst)) 
                                                   | (0x3bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))) 
                                                  | (0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))) 
                                                 | (0x503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))) 
                                                | (0x4000503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst))) 
                                               | (0x200003bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst))) 
                                              | (0x4000003bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst))) 
                                             | (0x200403bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->inst)))
                                             ? ((0x2033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst))
                                                 ? 0x21U
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst))
                                                  ? 0x22U
                                                  : 
                                                 ((0x103bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst))
                                                   ? 0x23U
                                                   : 
                                                  ((0x503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))
                                                    ? 0x24U
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 0x25U
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 0x26U
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 0x27U
                                                       : 0x28U)))))))
                                             : ((((
                                                   (((((0x200603bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst)) 
                                                       | (0x200503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x200703bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))) 
                                                  | (0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))) 
                                                 | (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)))
                                                 ? 
                                                ((0x200603bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst))
                                                  ? 0x29U
                                                  : 
                                                 ((0x200503bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst))
                                                   ? 0x2aU
                                                   : 
                                                  ((0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))
                                                    ? 0x2bU
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 0x2cU
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 0x2dU
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 0x2eU
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))
                                                        ? 0x2fU
                                                        : 0x30U)))))))
                                                 : 
                                                ((0x7063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))
                                                  ? 0x31U
                                                  : 
                                                 ((0x100073U 
                                                   == vlSelf->inst)
                                                   ? 0x32U
                                                   : 0U)))))));
        vlSelf->top__DOT__rd = (0x1fU & (((((((((0x1013U 
                                                 == 
                                                 (0xfc00707fU 
                                                  & vlSelf->inst)) 
                                                | (0x5013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->inst))) 
                                               | (0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))) 
                                              | (0x4013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst))) 
                                             | (0x40005013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->inst))) 
                                            | (0x7013U 
                                               == (0x707fU 
                                                   & vlSelf->inst))) 
                                           | (0x1bU 
                                              == (0x707fU 
                                                  & vlSelf->inst))) 
                                          | (0x101bU 
                                             == (0xfc00707fU 
                                                 & vlSelf->inst)))
                                          ? ((0x1013U 
                                              == (0xfc00707fU 
                                                  & vlSelf->inst))
                                              ? (vlSelf->inst 
                                                 >> 7U)
                                              : ((0x5013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (vlSelf->inst 
                                                  >> 7U)
                                                  : 
                                                 ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (vlSelf->inst 
                                                   >> 7U)
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 7U)
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 7U)
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 7U)
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 7U)
                                                       : 
                                                      (vlSelf->inst 
                                                       >> 7U))))))))
                                          : (((((((
                                                   ((0x501bU 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->inst)) 
                                                    | (0x4000501bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->inst))) 
                                                  | (0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))) 
                                                 | (0x3023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst))) 
                                                | (0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst))) 
                                               | (0x1023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst))) 
                                              | (0x23U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)))
                                              ? ((0x501bU 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->inst))
                                                  ? 
                                                 (vlSelf->inst 
                                                  >> 7U)
                                                  : 
                                                 ((0x4000501bU 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (vlSelf->inst 
                                                   >> 7U)
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 7U)
                                                      : 
                                                     ((0x2023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 7U)
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 7U)
                                                        : 
                                                       (vlSelf->inst 
                                                        >> 7U))))))))
                                              : (((
                                                   ((((((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        | (0x33U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x3033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x7033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))) 
                                                  | (0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst)))
                                                  ? 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->inst))
                                                   ? 
                                                  (vlSelf->inst 
                                                   >> 7U)
                                                   : 
                                                  ((0x33U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 7U)
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 7U)
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 7U)
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 7U)
                                                       : 
                                                      ((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 7U)
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 7U)
                                                         : 
                                                        (vlSelf->inst 
                                                         >> 7U))))))))
                                                  : 
                                                 (((((((((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst)) 
                                                         | (0x3bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x103bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x200003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))) 
                                                   | (0x200403bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst)))
                                                   ? 
                                                  ((0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->inst))
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 7U)
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 7U)
                                                     : 
                                                    ((0x103bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 7U)
                                                      : 
                                                     ((0x503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 7U)
                                                       : 
                                                      ((0x4000503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 7U)
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 7U)
                                                         : 
                                                        ((0x4000003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 7U)
                                                          : 
                                                         (vlSelf->inst 
                                                          >> 7U))))))))
                                                   : 
                                                  (((((((((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->inst)) 
                                                          | (0x200503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->inst))) 
                                                         | (0x200703bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->inst))) 
                                                        | (0x63U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))) 
                                                       | (0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))) 
                                                      | (0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                     | (0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))) 
                                                    | (0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->inst)))
                                                    ? 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 7U)
                                                     : 
                                                    ((0x200503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->inst))
                                                      ? 
                                                     (vlSelf->inst 
                                                      >> 7U)
                                                      : 
                                                     ((0x200703bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->inst))
                                                       ? 
                                                      (vlSelf->inst 
                                                       >> 7U)
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->inst))
                                                        ? 
                                                       (vlSelf->inst 
                                                        >> 7U)
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))
                                                         ? 
                                                        (vlSelf->inst 
                                                         >> 7U)
                                                         : 
                                                        ((0x5063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->inst))
                                                          ? 
                                                         (vlSelf->inst 
                                                          >> 7U)
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst))
                                                           ? 
                                                          (vlSelf->inst 
                                                           >> 7U)
                                                           : 
                                                          (vlSelf->inst 
                                                           >> 7U))))))))
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 7U)
                                                     : 0U)))))));
    }
    if (((((((((1U == vlSelf->top__DOT__op) | (2U == vlSelf->top__DOT__op)) 
              | (4U == vlSelf->top__DOT__op)) | (5U 
                                                 == vlSelf->top__DOT__op)) 
            | (6U == vlSelf->top__DOT__op)) | (7U == vlSelf->top__DOT__op)) 
          | (8U == vlSelf->top__DOT__op)) | (9U == vlSelf->top__DOT__op))) {
        vlSelf->top__DOT__u_EXU__DOT__wenR = (1U == vlSelf->top__DOT__op);
        vlSelf->top__DOT__exit_flag = (1U & (1U != vlSelf->top__DOT__op));
        vlSelf->top__DOT__npc = ((1U == vlSelf->top__DOT__op)
                                  ? (4ULL + vlSelf->pc)
                                  : ((2U == vlSelf->top__DOT__op)
                                      ? (4ULL + vlSelf->pc)
                                      : ((4U == vlSelf->top__DOT__op)
                                          ? (4ULL + vlSelf->pc)
                                          : ((5U == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((6U 
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
                                                  ((8U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->pc))))))));
    } else {
        vlSelf->top__DOT__u_EXU__DOT__wenR = ((~ ((
                                                   ((((((0xaU 
                                                         == vlSelf->top__DOT__op) 
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
                                                  | (0x11U 
                                                     == vlSelf->top__DOT__op))) 
                                              & (((((((((0x12U 
                                                         == vlSelf->top__DOT__op) 
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
                                                  | (0x19U 
                                                     == vlSelf->top__DOT__op)) 
                                                 & ((0x12U 
                                                     != vlSelf->top__DOT__op) 
                                                    & ((0x13U 
                                                        == vlSelf->top__DOT__op) 
                                                       | ((0x14U 
                                                           == vlSelf->top__DOT__op) 
                                                          | ((0x15U 
                                                              != vlSelf->top__DOT__op) 
                                                             & ((0x16U 
                                                                 != vlSelf->top__DOT__op) 
                                                                & ((0x17U 
                                                                    != vlSelf->top__DOT__op) 
                                                                   & (0x18U 
                                                                      != vlSelf->top__DOT__op)))))))));
        vlSelf->top__DOT__exit_flag = (1U & (((((((
                                                   ((0xaU 
                                                     == vlSelf->top__DOT__op) 
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
                                              | (0x11U 
                                                 == vlSelf->top__DOT__op)) 
                                             | ((~ 
                                                 ((((((((0x12U 
                                                         == vlSelf->top__DOT__op) 
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
                                                  | (0x19U 
                                                     == vlSelf->top__DOT__op))) 
                                                | ((0x12U 
                                                    == vlSelf->top__DOT__op) 
                                                   | ((0x13U 
                                                       != vlSelf->top__DOT__op) 
                                                      & ((0x14U 
                                                          != vlSelf->top__DOT__op) 
                                                         & ((0x15U 
                                                             == vlSelf->top__DOT__op) 
                                                            | ((0x16U 
                                                                == vlSelf->top__DOT__op) 
                                                               | ((0x17U 
                                                                   == vlSelf->top__DOT__op) 
                                                                  | (0x18U 
                                                                     == vlSelf->top__DOT__op))))))))));
        vlSelf->top__DOT__npc = (((((((((0xaU == vlSelf->top__DOT__op) 
                                        | (0xbU == vlSelf->top__DOT__op)) 
                                       | (0xcU == vlSelf->top__DOT__op)) 
                                      | (0xdU == vlSelf->top__DOT__op)) 
                                     | (0xeU == vlSelf->top__DOT__op)) 
                                    | (0xfU == vlSelf->top__DOT__op)) 
                                   | (0x10U == vlSelf->top__DOT__op)) 
                                  | (0x11U == vlSelf->top__DOT__op))
                                  ? ((0xaU == vlSelf->top__DOT__op)
                                      ? (4ULL + vlSelf->pc)
                                      : ((0xbU == vlSelf->top__DOT__op)
                                          ? (4ULL + vlSelf->pc)
                                          : ((0xcU 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0xdU 
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
                                                   ((0x10U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->pc))))))))
                                  : (((((((((0x12U 
                                             == vlSelf->top__DOT__op) 
                                            | (0x13U 
                                               == vlSelf->top__DOT__op)) 
                                           | (0x14U 
                                              == vlSelf->top__DOT__op)) 
                                          | (0x15U 
                                             == vlSelf->top__DOT__op)) 
                                         | (0x16U == vlSelf->top__DOT__op)) 
                                        | (0x17U == vlSelf->top__DOT__op)) 
                                       | (0x18U == vlSelf->top__DOT__op)) 
                                      | (0x19U == vlSelf->top__DOT__op))
                                      ? ((0x12U == vlSelf->top__DOT__op)
                                          ? (4ULL + vlSelf->pc)
                                          : ((0x13U 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0x14U 
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
                                                    ((0x18U 
                                                      == vlSelf->top__DOT__op)
                                                      ? 
                                                     (4ULL 
                                                      + vlSelf->pc)
                                                      : 
                                                     (vlSelf->pc 
                                                      + vlSelf->top__DOT__imm))))))))
                                      : (((((((((0x1aU 
                                                 == vlSelf->top__DOT__op) 
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
                                          | (0x21U 
                                             == vlSelf->top__DOT__op))
                                          ? ((0x1aU 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0x1bU 
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
                                                     ((0x20U 
                                                       == vlSelf->top__DOT__op)
                                                       ? 
                                                      (4ULL 
                                                       + vlSelf->pc)
                                                       : 
                                                      (4ULL 
                                                       + vlSelf->pc))))))))
                                          : (((((((
                                                   ((0x22U 
                                                     == vlSelf->top__DOT__op) 
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
                                              | (0x29U 
                                                 == vlSelf->top__DOT__op))
                                              ? ((0x22U 
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
                                                      ((0x28U 
                                                        == vlSelf->top__DOT__op)
                                                        ? 
                                                       (4ULL 
                                                        + vlSelf->pc)
                                                        : 
                                                       (4ULL 
                                                        + vlSelf->pc))))))))
                                              : (((
                                                   ((((((0x2aU 
                                                         == vlSelf->top__DOT__op) 
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
                                                  | (0x31U 
                                                     == vlSelf->top__DOT__op))
                                                  ? 
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
                                                       ((0x30U 
                                                         == vlSelf->top__DOT__op)
                                                         ? 
                                                        (4ULL 
                                                         + vlSelf->pc)
                                                         : 
                                                        (4ULL 
                                                         + vlSelf->pc))))))))
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
                                                    : vlSelf->pc)))))));
    }
    if (((((((((1U == vlSelf->top__DOT__op) | (2U == vlSelf->top__DOT__op)) 
              | (4U == vlSelf->top__DOT__op)) | (5U 
                                                 == vlSelf->top__DOT__op)) 
            | (6U == vlSelf->top__DOT__op)) | (7U == vlSelf->top__DOT__op)) 
          | (8U == vlSelf->top__DOT__op)) | (9U == vlSelf->top__DOT__op))) {
        if ((1U == vlSelf->top__DOT__op)) {
            vlSelf->top__DOT__u_EXU__DOT__dest = (vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
                                                  [vlSelf->top__DOT__rs1] 
                                                  + vlSelf->top__DOT__imm);
        }
    } else if ((1U & (~ ((((((((0xaU == vlSelf->top__DOT__op) 
                               | (0xbU == vlSelf->top__DOT__op)) 
                              | (0xcU == vlSelf->top__DOT__op)) 
                             | (0xdU == vlSelf->top__DOT__op)) 
                            | (0xeU == vlSelf->top__DOT__op)) 
                           | (0xfU == vlSelf->top__DOT__op)) 
                          | (0x10U == vlSelf->top__DOT__op)) 
                         | (0x11U == vlSelf->top__DOT__op))))) {
        if (((((((((0x12U == vlSelf->top__DOT__op) 
                   | (0x13U == vlSelf->top__DOT__op)) 
                  | (0x14U == vlSelf->top__DOT__op)) 
                 | (0x15U == vlSelf->top__DOT__op)) 
                | (0x16U == vlSelf->top__DOT__op)) 
               | (0x17U == vlSelf->top__DOT__op)) | 
              (0x18U == vlSelf->top__DOT__op)) | (0x19U 
                                                  == vlSelf->top__DOT__op))) {
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
                } else if ((0x15U != vlSelf->top__DOT__op)) {
                    if ((0x16U != vlSelf->top__DOT__op)) {
                        if ((0x17U != vlSelf->top__DOT__op)) {
                            if ((0x18U != vlSelf->top__DOT__op)) {
                                vlSelf->top__DOT__u_EXU__DOT__dest 
                                    = (4ULL + vlSelf->pc);
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((((((((0x1aU == vlSelf->top__DOT__op) 
                                   | (0x1bU == vlSelf->top__DOT__op)) 
                                  | (0x1cU == vlSelf->top__DOT__op)) 
                                 | (0x1dU == vlSelf->top__DOT__op)) 
                                | (0x1eU == vlSelf->top__DOT__op)) 
                               | (0x1fU == vlSelf->top__DOT__op)) 
                              | (0x20U == vlSelf->top__DOT__op)) 
                             | (0x21U == vlSelf->top__DOT__op))))) {
            if ((1U & (~ ((((((((0x22U == vlSelf->top__DOT__op) 
                                | (0x23U == vlSelf->top__DOT__op)) 
                               | (0x24U == vlSelf->top__DOT__op)) 
                              | (0x25U == vlSelf->top__DOT__op)) 
                             | (0x26U == vlSelf->top__DOT__op)) 
                            | (0x27U == vlSelf->top__DOT__op)) 
                           | (0x28U == vlSelf->top__DOT__op)) 
                          | (0x29U == vlSelf->top__DOT__op))))) {
                if ((1U & (~ ((((((((0x2aU == vlSelf->top__DOT__op) 
                                    | (0x2bU == vlSelf->top__DOT__op)) 
                                   | (0x2cU == vlSelf->top__DOT__op)) 
                                  | (0x2dU == vlSelf->top__DOT__op)) 
                                 | (0x2eU == vlSelf->top__DOT__op)) 
                                | (0x2fU == vlSelf->top__DOT__op)) 
                               | (0x30U == vlSelf->top__DOT__op)) 
                              | (0x31U == vlSelf->top__DOT__op))))) {
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
    if (vlSelf->top__DOT__exit_flag) {
        Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP();
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
    Vtop___024root___settle__TOP__2(vlSelf);
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
    vlSelf->top__DOT__u_EXU__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wenR = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
