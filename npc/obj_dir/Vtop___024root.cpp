// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void sim_exit();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP\n"); );
    // Body
    sim_exit();
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x67U == (0x707fU & vlSelf->inst))) 
              | (0x2067U == (0x707fU & vlSelf->inst))) 
             | (0x4003U == (0x707fU & vlSelf->inst))) 
            | (0x5003U == (0x707fU & vlSelf->inst))) 
           | (0x3003U == (0x707fU & vlSelf->inst))) 
          | (0x2003U == (0x707fU & vlSelf->inst))) 
         | (0x1003U == (0x707fU & vlSelf->inst)))) {
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
    } else {
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
    }
    if (vlSelf->rst_n) {
        if (((((((((1U == vlSelf->top__DOT__op) | (2U 
                                                   == vlSelf->top__DOT__op)) 
                  | (3U == vlSelf->top__DOT__op)) | 
                 (0x13U == vlSelf->top__DOT__op)) | 
                (0x14U == vlSelf->top__DOT__op)) | 
               (0x15U == vlSelf->top__DOT__op)) | (0x19U 
                                                   == vlSelf->top__DOT__op)) 
             | (0x32U == vlSelf->top__DOT__op))) {
            if ((1U != vlSelf->top__DOT__op)) {
                if ((2U != vlSelf->top__DOT__op)) {
                    if ((3U != vlSelf->top__DOT__op)) {
                        if ((0x13U != vlSelf->top__DOT__op)) {
                            if ((0x14U != vlSelf->top__DOT__op)) {
                                if ((0x15U != vlSelf->top__DOT__op)) {
                                    if ((0x19U != vlSelf->top__DOT__op)) {
                                        vlSelf->top__DOT__halt_ret = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->top__DOT__halt_ret = 1U;
        }
    } else {
        vlSelf->top__DOT__halt_ret = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    IData/*31:0*/ __Vdly__top__DOT__cpu;
    // Body
    __Vdly__top__DOT__cpu = vlSelf->top__DOT__cpu;
    if (vlSelf->rst_n) {
        __Vdly__top__DOT__cpu = ((IData)(vlSelf->top__DOT__exit_flag)
                                  ? 1U : vlSelf->top__DOT__cpu);
        vlSelf->pc = ((0U == vlSelf->top__DOT__cpu)
                       ? vlSelf->top__DOT__npc : vlSelf->pc);
    } else {
        __Vdly__top__DOT__cpu = 0U;
        vlSelf->pc = 0x80000000ULL;
    }
    vlSelf->top__DOT__cpu = __Vdly__top__DOT__cpu;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    // Body
    if (vlSelf->top__DOT__exit_flag) {
        Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP();
    }
    __Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 = 0U;
    if (vlSelf->top__DOT__u_EXU__DOT__wenR) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 
            = vlSelf->top__DOT__u_EXU__DOT__dest;
        __Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0 
            = vlSelf->top__DOT__rd;
    }
    if (__Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0) {
        vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[__Vdlyvdim0__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__5\n"); );
    // Body
    if (vlSelf->rst_n) {
        if (((((((((1U == vlSelf->top__DOT__op) | (2U 
                                                   == vlSelf->top__DOT__op)) 
                  | (3U == vlSelf->top__DOT__op)) | 
                 (0x13U == vlSelf->top__DOT__op)) | 
                (0x14U == vlSelf->top__DOT__op)) | 
               (0x15U == vlSelf->top__DOT__op)) | (0x19U 
                                                   == vlSelf->top__DOT__op)) 
             | (0x32U == vlSelf->top__DOT__op))) {
            if ((1U != vlSelf->top__DOT__op)) {
                if ((2U != vlSelf->top__DOT__op)) {
                    if ((3U != vlSelf->top__DOT__op)) {
                        if ((0x13U != vlSelf->top__DOT__op)) {
                            if ((0x14U != vlSelf->top__DOT__op)) {
                                if ((0x15U != vlSelf->top__DOT__op)) {
                                    if ((0x19U != vlSelf->top__DOT__op)) {
                                        vlSelf->top__DOT__exit_flag = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->top__DOT__exit_flag = 0U;
        }
    } else {
        vlSelf->top__DOT__exit_flag = 0U;
    }
    vlSelf->top__DOT__rd = (0x1fU & (((((((((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->inst)) 
                                            | (0x67U 
                                               == (0x707fU 
                                                   & vlSelf->inst))) 
                                           | (0x2067U 
                                              == (0x707fU 
                                                  & vlSelf->inst))) 
                                          | (0x4003U 
                                             == (0x707fU 
                                                 & vlSelf->inst))) 
                                         | (0x5003U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                        | (0x3003U 
                                           == (0x707fU 
                                               & vlSelf->inst))) 
                                       | (0x2003U == 
                                          (0x707fU 
                                           & vlSelf->inst))) 
                                      | (0x1003U == 
                                         (0x707fU & vlSelf->inst)))
                                      ? ((0x13U == 
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
                                                      >> 7U))))))))
                                      : (((((((((0x1013U 
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
                                                     : 0U))))))));
    vlSelf->top__DOT__u_EXU__DOT__wenR = ((IData)(vlSelf->rst_n) 
                                          & (((((((((1U 
                                                     == vlSelf->top__DOT__op) 
                                                    | (2U 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (3U 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (0x13U 
                                                     == vlSelf->top__DOT__op)) 
                                                 | (0x14U 
                                                    == vlSelf->top__DOT__op)) 
                                                | (0x15U 
                                                   == vlSelf->top__DOT__op)) 
                                               | (0x19U 
                                                  == vlSelf->top__DOT__op)) 
                                              | (0x32U 
                                                 == vlSelf->top__DOT__op)) 
                                             & ((1U 
                                                 == vlSelf->top__DOT__op) 
                                                | ((2U 
                                                    == vlSelf->top__DOT__op) 
                                                   | ((3U 
                                                       == vlSelf->top__DOT__op) 
                                                      | ((0x13U 
                                                          == vlSelf->top__DOT__op) 
                                                         | ((0x14U 
                                                             == vlSelf->top__DOT__op) 
                                                            | ((0x15U 
                                                                != vlSelf->top__DOT__op) 
                                                               & (0x19U 
                                                                  == vlSelf->top__DOT__op)))))))));
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__npc = ((IData)(vlSelf->rst_n)
                              ? (((((((((1U == vlSelf->top__DOT__op) 
                                        | (2U == vlSelf->top__DOT__op)) 
                                       | (3U == vlSelf->top__DOT__op)) 
                                      | (0x13U == vlSelf->top__DOT__op)) 
                                     | (0x14U == vlSelf->top__DOT__op)) 
                                    | (0x15U == vlSelf->top__DOT__op)) 
                                   | (0x19U == vlSelf->top__DOT__op)) 
                                  | (0x32U == vlSelf->top__DOT__op))
                                  ? ((1U == vlSelf->top__DOT__op)
                                      ? (4ULL + vlSelf->pc)
                                      : ((2U == vlSelf->top__DOT__op)
                                          ? (0xfffffffffffffffeULL 
                                             & (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                + vlSelf->top__DOT__imm))
                                          : ((3U == vlSelf->top__DOT__op)
                                              ? (0xfffffffffffffffeULL 
                                                 & (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    + vlSelf->top__DOT__imm))
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
                                                   ((0x19U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (vlSelf->pc 
                                                     + vlSelf->top__DOT__imm)
                                                     : vlSelf->pc)))))))
                                  : vlSelf->pc) : vlSelf->pc);
    if (vlSelf->rst_n) {
        if (((((((((1U == vlSelf->top__DOT__op) | (2U 
                                                   == vlSelf->top__DOT__op)) 
                  | (3U == vlSelf->top__DOT__op)) | 
                 (0x13U == vlSelf->top__DOT__op)) | 
                (0x14U == vlSelf->top__DOT__op)) | 
               (0x15U == vlSelf->top__DOT__op)) | (0x19U 
                                                   == vlSelf->top__DOT__op)) 
             | (0x32U == vlSelf->top__DOT__op))) {
            if ((1U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       + vlSelf->top__DOT__imm);
            } else if ((2U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (4ULL + vlSelf->pc);
            } else if ((3U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (4ULL + vlSelf->pc);
            } else if ((0x13U == vlSelf->top__DOT__op)) {
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
                if ((0x19U == vlSelf->top__DOT__op)) {
                    vlSelf->top__DOT__u_EXU__DOT__dest 
                        = (4ULL + vlSelf->pc);
                }
            }
        } else {
            vlSelf->top__DOT__u_EXU__DOT__dest = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
                [vlSelf->top__DOT__rs2];
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__dest = 0ULL;
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
