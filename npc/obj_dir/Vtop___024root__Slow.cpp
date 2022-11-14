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

void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__u_EXU__DOT__raddr = 0x80000000ULL;
    vlSelf->top__DOT__u_EXU__DOT__waddr = 0x80000000ULL;
    vlSelf->top__DOT__u_EXU__DOT__wdata = 0ULL;
    vlSelf->top__DOT__u_EXU__DOT__wmask = 0U;
    vlSelf->pc = 0x80000000ULL;
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf);
}

void Vtop___024root____Vdpiimwrap_top__DOT__ifetch_TOP(QData/*63:0*/ pc, IData/*31:0*/ &inst);
void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ifetch_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__ifetch__2__inst);
    vlSelf->inst = vlSelf->__Vtask_top__DOT__ifetch__2__inst;
    if (((((((((0x13U == (0x707fU & vlSelf->inst)) 
               | (0x67U == (0x707fU & vlSelf->inst))) 
              | (0x2067U == (0x707fU & vlSelf->inst))) 
             | (0x4003U == (0x707fU & vlSelf->inst))) 
            | (0x5003U == (0x707fU & vlSelf->inst))) 
           | (0x3003U == (0x707fU & vlSelf->inst))) 
          | (0x2003U == (0x707fU & vlSelf->inst))) 
         | (0x1003U == (0x707fU & vlSelf->inst)))) {
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
        vlSelf->top__DOT__rs2 = 0U;
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
                                                    ? 
                                                   (vlSelf->inst 
                                                    >> 7U)
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->inst))
                                                     ? 
                                                    (vlSelf->inst 
                                                     >> 7U)
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
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
        [vlSelf->top__DOT__rs2];
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if ((1U & (~ ((((((((0xbU == vlSelf->top__DOT__op) 
                                | (0xfU == vlSelf->top__DOT__op)) 
                               | (0x13U == vlSelf->top__DOT__op)) 
                              | (0x14U == vlSelf->top__DOT__op)) 
                             | (0x15U == vlSelf->top__DOT__op)) 
                            | (0x16U == vlSelf->top__DOT__op)) 
                           | (0x17U == vlSelf->top__DOT__op)) 
                          | (0x18U == vlSelf->top__DOT__op))))) {
                if ((0x19U != vlSelf->top__DOT__op)) {
                    if ((0x1fU != vlSelf->top__DOT__op)) {
                        if ((0x20U != vlSelf->top__DOT__op)) {
                            if ((0x22U != vlSelf->top__DOT__op)) {
                                if ((0x2cU != vlSelf->top__DOT__op)) {
                                    if ((0x2dU != vlSelf->top__DOT__op)) {
                                        vlSelf->top__DOT__exit_flag 
                                            = (0x32U 
                                               == vlSelf->top__DOT__op);
                                    }
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
    vlSelf->top__DOT__u_EXU__DOT__wenR = ((IData)(vlSelf->rst_n) 
                                          & (((((((((1U 
                                                     == vlSelf->top__DOT__op) 
                                                    | (2U 
                                                       == vlSelf->top__DOT__op)) 
                                                   | (3U 
                                                      == vlSelf->top__DOT__op)) 
                                                  | (4U 
                                                     == vlSelf->top__DOT__op)) 
                                                 | (5U 
                                                    == vlSelf->top__DOT__op)) 
                                                | (6U 
                                                   == vlSelf->top__DOT__op)) 
                                               | (7U 
                                                  == vlSelf->top__DOT__op)) 
                                              | (8U 
                                                 == vlSelf->top__DOT__op))
                                              ? ((1U 
                                                  == vlSelf->top__DOT__op) 
                                                 | (2U 
                                                    != vlSelf->top__DOT__op))
                                              : (((
                                                   ((((((0xbU 
                                                         == vlSelf->top__DOT__op) 
                                                        | (0xfU 
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
                                                 ((0xbU 
                                                   == vlSelf->top__DOT__op) 
                                                  | ((0xfU 
                                                      == vlSelf->top__DOT__op) 
                                                     | ((0x13U 
                                                         == vlSelf->top__DOT__op) 
                                                        | (0x14U 
                                                           == vlSelf->top__DOT__op))))
                                                  : 
                                                 ((0x19U 
                                                   == vlSelf->top__DOT__op) 
                                                  | ((0x1fU 
                                                      == vlSelf->top__DOT__op) 
                                                     | ((0x20U 
                                                         == vlSelf->top__DOT__op) 
                                                        | (0x22U 
                                                           == vlSelf->top__DOT__op)))))));
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if ((1U & (~ ((((((((0xbU == vlSelf->top__DOT__op) 
                                | (0xfU == vlSelf->top__DOT__op)) 
                               | (0x13U == vlSelf->top__DOT__op)) 
                              | (0x14U == vlSelf->top__DOT__op)) 
                             | (0x15U == vlSelf->top__DOT__op)) 
                            | (0x16U == vlSelf->top__DOT__op)) 
                           | (0x17U == vlSelf->top__DOT__op)) 
                          | (0x18U == vlSelf->top__DOT__op))))) {
                if ((0x19U != vlSelf->top__DOT__op)) {
                    if ((0x1fU != vlSelf->top__DOT__op)) {
                        if ((0x20U != vlSelf->top__DOT__op)) {
                            if ((0x22U != vlSelf->top__DOT__op)) {
                                if ((0x2cU != vlSelf->top__DOT__op)) {
                                    if ((0x2dU != vlSelf->top__DOT__op)) {
                                        vlSelf->top__DOT__halt_ret 
                                            = (0x32U 
                                               != vlSelf->top__DOT__op);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__halt_ret = 0U;
    }
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if (((((((((0xbU == vlSelf->top__DOT__op) 
                       | (0xfU == vlSelf->top__DOT__op)) 
                      | (0x13U == vlSelf->top__DOT__op)) 
                     | (0x14U == vlSelf->top__DOT__op)) 
                    | (0x15U == vlSelf->top__DOT__op)) 
                   | (0x16U == vlSelf->top__DOT__op)) 
                  | (0x17U == vlSelf->top__DOT__op)) 
                 | (0x18U == vlSelf->top__DOT__op))) {
                if ((0xbU != vlSelf->top__DOT__op)) {
                    if ((0xfU != vlSelf->top__DOT__op)) {
                        if ((0x13U != vlSelf->top__DOT__op)) {
                            if ((0x14U != vlSelf->top__DOT__op)) {
                                vlSelf->top__DOT__u_EXU__DOT__wmask 
                                    = ((0x15U == vlSelf->top__DOT__op)
                                        ? 0xffU : (
                                                   (0x16U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 0xfU
                                                    : 
                                                   ((0x17U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 3U
                                                     : 1U)));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
        [vlSelf->top__DOT__rs1];
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if (((((((((0xbU == vlSelf->top__DOT__op) 
                       | (0xfU == vlSelf->top__DOT__op)) 
                      | (0x13U == vlSelf->top__DOT__op)) 
                     | (0x14U == vlSelf->top__DOT__op)) 
                    | (0x15U == vlSelf->top__DOT__op)) 
                   | (0x16U == vlSelf->top__DOT__op)) 
                  | (0x17U == vlSelf->top__DOT__op)) 
                 | (0x18U == vlSelf->top__DOT__op))) {
                if ((0xbU != vlSelf->top__DOT__op)) {
                    if ((0xfU != vlSelf->top__DOT__op)) {
                        if ((0x13U != vlSelf->top__DOT__op)) {
                            if ((0x14U != vlSelf->top__DOT__op)) {
                                vlSelf->top__DOT__u_EXU__DOT__wdata 
                                    = vlSelf->top__DOT__u_EXU__DOT__src2;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__npc = ((IData)(vlSelf->rst_n)
                              ? (((((((((1U == vlSelf->top__DOT__op) 
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
                                          ? (0xfffffffffffffffeULL 
                                             & (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                + vlSelf->top__DOT__imm))
                                          : ((3U == vlSelf->top__DOT__op)
                                              ? (0xfffffffffffffffeULL 
                                                 & (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    + vlSelf->top__DOT__imm))
                                              : ((4U 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((5U 
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
                                  : (((((((((0xbU == vlSelf->top__DOT__op) 
                                            | (0xfU 
                                               == vlSelf->top__DOT__op)) 
                                           | (0x13U 
                                              == vlSelf->top__DOT__op)) 
                                          | (0x14U 
                                             == vlSelf->top__DOT__op)) 
                                         | (0x15U == vlSelf->top__DOT__op)) 
                                        | (0x16U == vlSelf->top__DOT__op)) 
                                       | (0x17U == vlSelf->top__DOT__op)) 
                                      | (0x18U == vlSelf->top__DOT__op))
                                      ? ((0xbU == vlSelf->top__DOT__op)
                                          ? (4ULL + vlSelf->pc)
                                          : ((0xfU 
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
                                      : ((0x19U == vlSelf->top__DOT__op)
                                          ? (vlSelf->pc 
                                             + vlSelf->top__DOT__imm)
                                          : ((0x1fU 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0x20U 
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
                                                  ((0x2cU 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     == vlSelf->top__DOT__u_EXU__DOT__src2)
                                                     ? 
                                                    (vlSelf->pc 
                                                     + vlSelf->top__DOT__imm)
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->pc))
                                                    : 
                                                   ((0x2dU 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                      != vlSelf->top__DOT__u_EXU__DOT__src2)
                                                      ? 
                                                     (vlSelf->pc 
                                                      + vlSelf->top__DOT__imm)
                                                      : 
                                                     (4ULL 
                                                      + vlSelf->pc))
                                                     : vlSelf->pc))))))))
                              : vlSelf->pc);
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if (((((((((0xbU == vlSelf->top__DOT__op) 
                       | (0xfU == vlSelf->top__DOT__op)) 
                      | (0x13U == vlSelf->top__DOT__op)) 
                     | (0x14U == vlSelf->top__DOT__op)) 
                    | (0x15U == vlSelf->top__DOT__op)) 
                   | (0x16U == vlSelf->top__DOT__op)) 
                  | (0x17U == vlSelf->top__DOT__op)) 
                 | (0x18U == vlSelf->top__DOT__op))) {
                if ((0xbU != vlSelf->top__DOT__op)) {
                    if ((0xfU != vlSelf->top__DOT__op)) {
                        if ((0x13U != vlSelf->top__DOT__op)) {
                            if ((0x14U != vlSelf->top__DOT__op)) {
                                vlSelf->top__DOT__u_EXU__DOT__waddr 
                                    = ((0x15U == vlSelf->top__DOT__op)
                                        ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                           + vlSelf->top__DOT__imm)
                                        : ((0x16U == vlSelf->top__DOT__op)
                                            ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               + vlSelf->top__DOT__imm)
                                            : ((0x17U 
                                                == vlSelf->top__DOT__op)
                                                ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                   + vlSelf->top__DOT__imm)
                                                : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                   + vlSelf->top__DOT__imm))));
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->rst_n) {
        if (((((((((1U == vlSelf->top__DOT__op) | (2U 
                                                   == vlSelf->top__DOT__op)) 
                  | (3U == vlSelf->top__DOT__op)) | 
                 (4U == vlSelf->top__DOT__op)) | (5U 
                                                  == vlSelf->top__DOT__op)) 
               | (6U == vlSelf->top__DOT__op)) | (7U 
                                                  == vlSelf->top__DOT__op)) 
             | (8U == vlSelf->top__DOT__op))) {
            if ((1U != vlSelf->top__DOT__op)) {
                if ((2U != vlSelf->top__DOT__op)) {
                    if ((3U != vlSelf->top__DOT__op)) {
                        vlSelf->top__DOT__u_EXU__DOT__raddr 
                            = ((4U == vlSelf->top__DOT__op)
                                ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                   + vlSelf->top__DOT__imm)
                                : ((5U == vlSelf->top__DOT__op)
                                    ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                       + vlSelf->top__DOT__imm)
                                    : ((6U == vlSelf->top__DOT__op)
                                        ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                           + vlSelf->top__DOT__imm)
                                        : ((7U == vlSelf->top__DOT__op)
                                            ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               + vlSelf->top__DOT__imm)
                                            : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               + vlSelf->top__DOT__imm)))));
                    }
                }
            }
        }
    }
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_read_TOP(vlSelf->top__DOT__u_EXU__DOT__raddr, vlSelf->__Vtask_top__DOT__u_EXU__DOT__pmem_read__3__rdata);
    vlSelf->top__DOT__u_EXU__DOT__rdata = vlSelf->__Vtask_top__DOT__u_EXU__DOT__pmem_read__3__rdata;
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_write_TOP(vlSelf->top__DOT__u_EXU__DOT__waddr, vlSelf->top__DOT__u_EXU__DOT__wdata, (IData)(vlSelf->top__DOT__u_EXU__DOT__wmask));
    if (vlSelf->rst_n) {
        if (((((((((1U == vlSelf->top__DOT__op) | (2U 
                                                   == vlSelf->top__DOT__op)) 
                  | (3U == vlSelf->top__DOT__op)) | 
                 (4U == vlSelf->top__DOT__op)) | (5U 
                                                  == vlSelf->top__DOT__op)) 
               | (6U == vlSelf->top__DOT__op)) | (7U 
                                                  == vlSelf->top__DOT__op)) 
             | (8U == vlSelf->top__DOT__op))) {
            if ((1U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       + vlSelf->top__DOT__imm);
            } else if ((2U != vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = ((3U == vlSelf->top__DOT__op)
                        ? (4ULL + vlSelf->pc) : ((4U 
                                                  == vlSelf->top__DOT__op)
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdata))))
                                                  : 
                                                 ((5U 
                                                   == vlSelf->top__DOT__op)
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdata))))
                                                   : 
                                                  ((6U 
                                                    == vlSelf->top__DOT__op)
                                                    ? vlSelf->top__DOT__u_EXU__DOT__rdata
                                                    : 
                                                   ((7U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__rdata 
                                                                                >> 0x1fU))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__rdata)))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__rdata 
                                                                                >> 0xfU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdata))))))))));
            }
        } else if (((((((((0xbU == vlSelf->top__DOT__op) 
                          | (0xfU == vlSelf->top__DOT__op)) 
                         | (0x13U == vlSelf->top__DOT__op)) 
                        | (0x14U == vlSelf->top__DOT__op)) 
                       | (0x15U == vlSelf->top__DOT__op)) 
                      | (0x16U == vlSelf->top__DOT__op)) 
                     | (0x17U == vlSelf->top__DOT__op)) 
                    | (0x18U == vlSelf->top__DOT__op))) {
            if ((0xbU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = ((vlSelf->top__DOT__u_EXU__DOT__src1 
                        < vlSelf->top__DOT__imm) ? 1ULL
                        : 0ULL);
            } else if ((0xfU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       + vlSelf->top__DOT__imm);
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
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
            }
        } else if ((0x19U == vlSelf->top__DOT__op)) {
            vlSelf->top__DOT__u_EXU__DOT__dest = (4ULL 
                                                  + vlSelf->pc);
        } else if ((0x1fU == vlSelf->top__DOT__op)) {
            vlSelf->top__DOT__u_EXU__DOT__dest = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  - vlSelf->top__DOT__u_EXU__DOT__src2);
        } else if ((0x20U == vlSelf->top__DOT__op)) {
            vlSelf->top__DOT__u_EXU__DOT__temp = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  * vlSelf->top__DOT__u_EXU__DOT__src2);
            vlSelf->top__DOT__u_EXU__DOT__dest = vlSelf->top__DOT__u_EXU__DOT__temp;
        } else if ((0x22U == vlSelf->top__DOT__op)) {
            vlSelf->top__DOT__u_EXU__DOT__temp = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  + vlSelf->top__DOT__u_EXU__DOT__src2);
            vlSelf->top__DOT__u_EXU__DOT__dest = (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
        } else if ((0x2cU != vlSelf->top__DOT__op)) {
            if ((0x2dU != vlSelf->top__DOT__op)) {
                if ((0x32U != vlSelf->top__DOT__op)) {
                    vlSelf->top__DOT__u_EXU__DOT__dest 
                        = vlSelf->top__DOT__u_EXU__DOT__src2;
                }
            }
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__dest = 0ULL;
    }
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->top__DOT__halt_ret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu = 0;
    vlSelf->top__DOT__npc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__op = 0;
    vlSelf->top__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__dest = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wenR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__raddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__waddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__temp = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtask_top__DOT__ifetch__2__inst = 0;
    vlSelf->__Vtask_top__DOT__u_EXU__DOT__pmem_read__3__rdata = 0;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
