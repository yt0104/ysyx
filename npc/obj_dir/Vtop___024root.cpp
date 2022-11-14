// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void sim_exit(int state);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP(IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP\n"); );
    // Body
    int state__Vcvt;
    for (size_t state__Vidx = 0; state__Vidx < 1; ++state__Vidx) state__Vcvt = state;
    sim_exit(state__Vcvt);
}

extern "C" void ifetch(long long pc, int* inst);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__ifetch_TOP(QData/*63:0*/ pc, IData/*31:0*/ &inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__ifetch_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int inst__Vcvt;
    ifetch(pc__Vcvt, &inst__Vcvt);
    inst = inst__Vcvt;
}

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_reg__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    IData/*31:0*/ __Vdly__top__DOT__cpu;
    // Body
    __Vdly__top__DOT__cpu = vlSelf->top__DOT__cpu;
    if (vlSelf->rst_n) {
        __Vdly__top__DOT__cpu = ((IData)(vlSelf->top__DOT__exit_flag)
                                  ? 1U : ((IData)(vlSelf->top__DOT__halt_ret)
                                           ? 2U : vlSelf->top__DOT__cpu));
        vlSelf->pc = ((0U == vlSelf->top__DOT__cpu)
                       ? vlSelf->top__DOT__npc : vlSelf->pc);
    } else {
        __Vdly__top__DOT__cpu = 0U;
        vlSelf->pc = 0x80000000ULL;
    }
    vlSelf->top__DOT__cpu = __Vdly__top__DOT__cpu;
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_reg__DOT__rf__v0;
    // Body
    if (vlSelf->top__DOT__exit_flag) {
        Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP(0U);
    } else if (vlSelf->top__DOT__halt_ret) {
        Vtop___024root____Vdpiimwrap_top__DOT__sim_exit_TOP(1U);
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
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if ((1U & (~ ((((((((9U == vlSelf->top__DOT__op) 
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
                       | (0x16U == vlSelf->top__DOT__op)) 
                      | (0x17U == vlSelf->top__DOT__op)) 
                     | (0x18U == vlSelf->top__DOT__op))) {
                    if ((0x11U != vlSelf->top__DOT__op)) {
                        if ((0x12U != vlSelf->top__DOT__op)) {
                            if ((0x13U != vlSelf->top__DOT__op)) {
                                if ((0x14U != vlSelf->top__DOT__op)) {
                                    vlSelf->top__DOT__u_EXU__DOT__wmask 
                                        = ((0x15U == vlSelf->top__DOT__op)
                                            ? 0xffU
                                            : ((0x16U 
                                                == vlSelf->top__DOT__op)
                                                ? 0xfU
                                                : (
                                                   (0x17U 
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
            if ((1U & (~ ((((((((9U == vlSelf->top__DOT__op) 
                                | (0xaU == vlSelf->top__DOT__op)) 
                               | (0xbU == vlSelf->top__DOT__op)) 
                              | (0xcU == vlSelf->top__DOT__op)) 
                             | (0xdU == vlSelf->top__DOT__op)) 
                            | (0xeU == vlSelf->top__DOT__op)) 
                           | (0xfU == vlSelf->top__DOT__op)) 
                          | (0x10U == vlSelf->top__DOT__op))))) {
                if ((1U & (~ ((((((((0x11U == vlSelf->top__DOT__op) 
                                    | (0x12U == vlSelf->top__DOT__op)) 
                                   | (0x13U == vlSelf->top__DOT__op)) 
                                  | (0x14U == vlSelf->top__DOT__op)) 
                                 | (0x15U == vlSelf->top__DOT__op)) 
                                | (0x16U == vlSelf->top__DOT__op)) 
                               | (0x17U == vlSelf->top__DOT__op)) 
                              | (0x18U == vlSelf->top__DOT__op))))) {
                    if ((1U & (~ ((((((((0x19U == vlSelf->top__DOT__op) 
                                        | (0x1aU == vlSelf->top__DOT__op)) 
                                       | (0x1bU == vlSelf->top__DOT__op)) 
                                      | (0x1cU == vlSelf->top__DOT__op)) 
                                     | (0x1dU == vlSelf->top__DOT__op)) 
                                    | (0x1eU == vlSelf->top__DOT__op)) 
                                   | (0x1fU == vlSelf->top__DOT__op)) 
                                  | (0x20U == vlSelf->top__DOT__op))))) {
                        if ((1U & (~ ((((((((0x21U 
                                             == vlSelf->top__DOT__op) 
                                            | (0x22U 
                                               == vlSelf->top__DOT__op)) 
                                           | (0x23U 
                                              == vlSelf->top__DOT__op)) 
                                          | (0x24U 
                                             == vlSelf->top__DOT__op)) 
                                         | (0x25U == vlSelf->top__DOT__op)) 
                                        | (0x26U == vlSelf->top__DOT__op)) 
                                       | (0x27U == vlSelf->top__DOT__op)) 
                                      | (0x28U == vlSelf->top__DOT__op))))) {
                            if ((1U & (~ ((((((((0x29U 
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
                                             == vlSelf->top__DOT__op))))) {
                                if ((0x31U != vlSelf->top__DOT__op)) {
                                    vlSelf->top__DOT__exit_flag 
                                        = (0x32U == vlSelf->top__DOT__op);
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
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if ((1U & (~ ((((((((9U == vlSelf->top__DOT__op) 
                                | (0xaU == vlSelf->top__DOT__op)) 
                               | (0xbU == vlSelf->top__DOT__op)) 
                              | (0xcU == vlSelf->top__DOT__op)) 
                             | (0xdU == vlSelf->top__DOT__op)) 
                            | (0xeU == vlSelf->top__DOT__op)) 
                           | (0xfU == vlSelf->top__DOT__op)) 
                          | (0x10U == vlSelf->top__DOT__op))))) {
                if ((1U & (~ ((((((((0x11U == vlSelf->top__DOT__op) 
                                    | (0x12U == vlSelf->top__DOT__op)) 
                                   | (0x13U == vlSelf->top__DOT__op)) 
                                  | (0x14U == vlSelf->top__DOT__op)) 
                                 | (0x15U == vlSelf->top__DOT__op)) 
                                | (0x16U == vlSelf->top__DOT__op)) 
                               | (0x17U == vlSelf->top__DOT__op)) 
                              | (0x18U == vlSelf->top__DOT__op))))) {
                    if ((1U & (~ ((((((((0x19U == vlSelf->top__DOT__op) 
                                        | (0x1aU == vlSelf->top__DOT__op)) 
                                       | (0x1bU == vlSelf->top__DOT__op)) 
                                      | (0x1cU == vlSelf->top__DOT__op)) 
                                     | (0x1dU == vlSelf->top__DOT__op)) 
                                    | (0x1eU == vlSelf->top__DOT__op)) 
                                   | (0x1fU == vlSelf->top__DOT__op)) 
                                  | (0x20U == vlSelf->top__DOT__op))))) {
                        if ((1U & (~ ((((((((0x21U 
                                             == vlSelf->top__DOT__op) 
                                            | (0x22U 
                                               == vlSelf->top__DOT__op)) 
                                           | (0x23U 
                                              == vlSelf->top__DOT__op)) 
                                          | (0x24U 
                                             == vlSelf->top__DOT__op)) 
                                         | (0x25U == vlSelf->top__DOT__op)) 
                                        | (0x26U == vlSelf->top__DOT__op)) 
                                       | (0x27U == vlSelf->top__DOT__op)) 
                                      | (0x28U == vlSelf->top__DOT__op))))) {
                            if ((1U & (~ ((((((((0x29U 
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
                                             == vlSelf->top__DOT__op))))) {
                                if ((0x31U != vlSelf->top__DOT__op)) {
                                    vlSelf->top__DOT__halt_ret 
                                        = (0x32U != vlSelf->top__DOT__op);
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
                                             | (((((((((9U 
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
                                                    | (((((((((0x21U 
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
                                                       | (((((((((0x29U 
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
                                                          & ((0x29U 
                                                              == vlSelf->top__DOT__op) 
                                                             | ((0x2aU 
                                                                 == vlSelf->top__DOT__op) 
                                                                | (0x2bU 
                                                                   == vlSelf->top__DOT__op))))))))));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Body
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
                                                     : 0U))))))));
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
        [vlSelf->top__DOT__rs2];
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_reg__DOT__rf
        [vlSelf->top__DOT__rs1];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__7\n"); );
    // Body
    if (vlSelf->rst_n) {
        if ((1U & (~ ((((((((1U == vlSelf->top__DOT__op) 
                            | (2U == vlSelf->top__DOT__op)) 
                           | (3U == vlSelf->top__DOT__op)) 
                          | (4U == vlSelf->top__DOT__op)) 
                         | (5U == vlSelf->top__DOT__op)) 
                        | (6U == vlSelf->top__DOT__op)) 
                       | (7U == vlSelf->top__DOT__op)) 
                      | (8U == vlSelf->top__DOT__op))))) {
            if ((1U & (~ ((((((((9U == vlSelf->top__DOT__op) 
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
                       | (0x16U == vlSelf->top__DOT__op)) 
                      | (0x17U == vlSelf->top__DOT__op)) 
                     | (0x18U == vlSelf->top__DOT__op))) {
                    if ((0x11U != vlSelf->top__DOT__op)) {
                        if ((0x12U != vlSelf->top__DOT__op)) {
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
                                  : (((((((((9U == vlSelf->top__DOT__op) 
                                            | (0xaU 
                                               == vlSelf->top__DOT__op)) 
                                           | (0xbU 
                                              == vlSelf->top__DOT__op)) 
                                          | (0xcU == vlSelf->top__DOT__op)) 
                                         | (0xdU == vlSelf->top__DOT__op)) 
                                        | (0xeU == vlSelf->top__DOT__op)) 
                                       | (0xfU == vlSelf->top__DOT__op)) 
                                      | (0x10U == vlSelf->top__DOT__op))
                                      ? ((9U == vlSelf->top__DOT__op)
                                          ? (4ULL + vlSelf->pc)
                                          : ((0xaU 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0xbU 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((0xcU 
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
                                             | (0x15U 
                                                == vlSelf->top__DOT__op)) 
                                            | (0x16U 
                                               == vlSelf->top__DOT__op)) 
                                           | (0x17U 
                                              == vlSelf->top__DOT__op)) 
                                          | (0x18U 
                                             == vlSelf->top__DOT__op))
                                          ? ((0x11U 
                                              == vlSelf->top__DOT__op)
                                              ? (4ULL 
                                                 + vlSelf->pc)
                                              : ((0x12U 
                                                  == vlSelf->top__DOT__op)
                                                  ? 
                                                 (4ULL 
                                                  + vlSelf->pc)
                                                  : 
                                                 ((0x13U 
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
                                          : (((((((
                                                   ((0x19U 
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
                                                  ? 
                                                 (vlSelf->pc 
                                                  + vlSelf->top__DOT__imm)
                                                  : 
                                                 ((0x1aU 
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
                                              : (((
                                                   ((((((0x21U 
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
                                                  ? 
                                                 ((0x21U 
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
                                                  : 
                                                 (((((((((0x29U 
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
                                                        : 
                                                       ((0x2eU 
                                                         == vlSelf->top__DOT__op)
                                                         ? 
                                                        (VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                                          ? 
                                                         (vlSelf->pc 
                                                          + vlSelf->top__DOT__imm)
                                                          : 
                                                         (4ULL 
                                                          + vlSelf->pc))
                                                         : 
                                                        ((0x2fU 
                                                          == vlSelf->top__DOT__op)
                                                          ? 
                                                         (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                                           ? 
                                                          (vlSelf->pc 
                                                           + vlSelf->top__DOT__imm)
                                                           : 
                                                          (4ULL 
                                                           + vlSelf->pc))
                                                          : 
                                                         ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                           < vlSelf->top__DOT__u_EXU__DOT__src2)
                                                           ? 
                                                          (vlSelf->pc 
                                                           + vlSelf->top__DOT__imm)
                                                           : 
                                                          (4ULL 
                                                           + vlSelf->pc)))))))))
                                                   : 
                                                  ((0x31U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   ((vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     >= vlSelf->top__DOT__u_EXU__DOT__src2)
                                                     ? 
                                                    (vlSelf->pc 
                                                     + vlSelf->top__DOT__imm)
                                                     : 
                                                    (4ULL 
                                                     + vlSelf->pc))
                                                    : vlSelf->pc)))))))
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
            if ((1U & (~ ((((((((9U == vlSelf->top__DOT__op) 
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
                       | (0x16U == vlSelf->top__DOT__op)) 
                      | (0x17U == vlSelf->top__DOT__op)) 
                     | (0x18U == vlSelf->top__DOT__op))) {
                    if ((0x11U != vlSelf->top__DOT__op)) {
                        if ((0x12U != vlSelf->top__DOT__op)) {
                            if ((0x13U != vlSelf->top__DOT__op)) {
                                if ((0x14U != vlSelf->top__DOT__op)) {
                                    vlSelf->top__DOT__u_EXU__DOT__waddr 
                                        = ((0x15U == vlSelf->top__DOT__op)
                                            ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               + vlSelf->top__DOT__imm)
                                            : ((0x16U 
                                                == vlSelf->top__DOT__op)
                                                ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                   + vlSelf->top__DOT__imm)
                                                : (
                                                   (0x17U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    + vlSelf->top__DOT__imm)
                                                    : 
                                                   (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                    + vlSelf->top__DOT__imm))));
                                }
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
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_write_TOP(vlSelf->top__DOT__u_EXU__DOT__waddr, vlSelf->top__DOT__u_EXU__DOT__wdata, (IData)(vlSelf->top__DOT__u_EXU__DOT__wmask));
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__pmem_read_TOP(vlSelf->top__DOT__u_EXU__DOT__raddr, vlSelf->__Vtask_top__DOT__u_EXU__DOT__pmem_read__4__rdata);
    vlSelf->top__DOT__u_EXU__DOT__rdata = vlSelf->__Vtask_top__DOT__u_EXU__DOT__pmem_read__4__rdata;
    if (vlSelf->rst_n) {
        if (((((((((1U == vlSelf->top__DOT__op) | (2U 
                                                   == vlSelf->top__DOT__op)) 
                  | (3U == vlSelf->top__DOT__op)) | 
                 (4U == vlSelf->top__DOT__op)) | (5U 
                                                  == vlSelf->top__DOT__op)) 
               | (6U == vlSelf->top__DOT__op)) | (7U 
                                                  == vlSelf->top__DOT__op)) 
             | (8U == vlSelf->top__DOT__op))) {
            vlSelf->top__DOT__u_EXU__DOT__dest = ((1U 
                                                   == vlSelf->top__DOT__op)
                                                   ? 
                                                  (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                   + vlSelf->top__DOT__imm)
                                                   : 
                                                  ((2U 
                                                    == vlSelf->top__DOT__op)
                                                    ? 
                                                   (4ULL 
                                                    + vlSelf->pc)
                                                    : 
                                                   ((3U 
                                                     == vlSelf->top__DOT__op)
                                                     ? 
                                                    (4ULL 
                                                     + vlSelf->pc)
                                                     : 
                                                    ((4U 
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
                                                                            & (IData)(vlSelf->top__DOT__u_EXU__DOT__rdata))))))))))));
        } else if (((((((((9U == vlSelf->top__DOT__op) 
                          | (0xaU == vlSelf->top__DOT__op)) 
                         | (0xbU == vlSelf->top__DOT__op)) 
                        | (0xcU == vlSelf->top__DOT__op)) 
                       | (0xdU == vlSelf->top__DOT__op)) 
                      | (0xeU == vlSelf->top__DOT__op)) 
                     | (0xfU == vlSelf->top__DOT__op)) 
                    | (0x10U == vlSelf->top__DOT__op))) {
            if ((9U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__imm);
            } else if ((0xaU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__imm);
            } else if ((0xbU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = ((vlSelf->top__DOT__u_EXU__DOT__src1 
                        < vlSelf->top__DOT__imm) ? 1ULL
                        : 0ULL);
            } else if ((0xcU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       ^ vlSelf->top__DOT__imm);
            } else if ((0xdU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_EXU__DOT__src1, 
                                     (0x3fU & (IData)(vlSelf->top__DOT__imm)));
            } else if ((0xeU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       & vlSelf->top__DOT__imm);
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
            } else {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__imm);
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            }
        } else if (((((((((0x11U == vlSelf->top__DOT__op) 
                          | (0x12U == vlSelf->top__DOT__op)) 
                         | (0x13U == vlSelf->top__DOT__op)) 
                        | (0x14U == vlSelf->top__DOT__op)) 
                       | (0x15U == vlSelf->top__DOT__op)) 
                      | (0x16U == vlSelf->top__DOT__op)) 
                     | (0x17U == vlSelf->top__DOT__op)) 
                    | (0x18U == vlSelf->top__DOT__op))) {
            if ((0x11U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_EXU__DOT__temp) 
                       | (IData)((IData)(VL_SHIFTR_IIQ(32,32,64, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), vlSelf->top__DOT__imm))));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x12U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_EXU__DOT__src1, 
                                     (0x3fU & (IData)(vlSelf->top__DOT__imm)));
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
            } else if ((0x1aU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       + vlSelf->top__DOT__u_EXU__DOT__src2);
            } else if ((0x1bU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = ((vlSelf->top__DOT__u_EXU__DOT__src1 
                        < vlSelf->top__DOT__u_EXU__DOT__src2)
                        ? 1ULL : 0ULL);
            } else if ((0x1cU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       & vlSelf->top__DOT__u_EXU__DOT__src2);
            } else if ((0x1dU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       | vlSelf->top__DOT__u_EXU__DOT__src2);
            } else if ((0x1eU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       ^ vlSelf->top__DOT__u_EXU__DOT__src2);
            } else if ((0x1fU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       - vlSelf->top__DOT__u_EXU__DOT__src2);
            } else {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       * vlSelf->top__DOT__u_EXU__DOT__src2);
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = vlSelf->top__DOT__u_EXU__DOT__temp;
            }
        } else if (((((((((0x21U == vlSelf->top__DOT__op) 
                          | (0x22U == vlSelf->top__DOT__op)) 
                         | (0x23U == vlSelf->top__DOT__op)) 
                        | (0x24U == vlSelf->top__DOT__op)) 
                       | (0x25U == vlSelf->top__DOT__op)) 
                      | (0x26U == vlSelf->top__DOT__op)) 
                     | (0x27U == vlSelf->top__DOT__op)) 
                    | (0x28U == vlSelf->top__DOT__op))) {
            if ((0x21U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                        ? 1ULL : 0ULL);
            } else if ((0x22U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       + vlSelf->top__DOT__u_EXU__DOT__src2);
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x23U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       << (0x1fU & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x24U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_EXU__DOT__temp) 
                       | (IData)((IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                                          >> (0x1fU 
                                              & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2))))));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x25U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_EXU__DOT__temp) 
                       | (IData)((IData)(VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2))))));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x26U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       * vlSelf->top__DOT__u_EXU__DOT__src2);
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x27U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = (vlSelf->top__DOT__u_EXU__DOT__src1 
                       - vlSelf->top__DOT__u_EXU__DOT__src2);
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_EXU__DOT__temp) 
                       | (IData)((IData)(VL_DIVS_III(32, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            }
        } else if (((((((((0x29U == vlSelf->top__DOT__op) 
                          | (0x2aU == vlSelf->top__DOT__op)) 
                         | (0x2bU == vlSelf->top__DOT__op)) 
                        | (0x2cU == vlSelf->top__DOT__op)) 
                       | (0x2dU == vlSelf->top__DOT__op)) 
                      | (0x2eU == vlSelf->top__DOT__op)) 
                     | (0x2fU == vlSelf->top__DOT__op)) 
                    | (0x30U == vlSelf->top__DOT__op))) {
            if ((0x29U == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_EXU__DOT__temp) 
                       | (IData)((IData)(VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x2aU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_EXU__DOT__temp) 
                       | (IData)((IData)(VL_DIV_III(32, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            } else if ((0x2bU == vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__temp 
                    = ((0xffffffff00000000ULL & vlSelf->top__DOT__u_EXU__DOT__temp) 
                       | (IData)((IData)(VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))));
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__temp 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__temp)));
            }
        } else if ((0x31U != vlSelf->top__DOT__op)) {
            if ((0x32U != vlSelf->top__DOT__op)) {
                vlSelf->top__DOT__u_EXU__DOT__dest 
                    = vlSelf->top__DOT__u_EXU__DOT__src2;
            }
        }
        if ((0U == (IData)(vlSelf->top__DOT__rd))) {
            vlSelf->top__DOT__u_EXU__DOT__dest = 0ULL;
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
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Vtop___024root___combo__TOP__7(vlSelf);
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
