// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void sim_exit(int state);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_dec__DOT__sim_exit_TOP(IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_dec__DOT__sim_exit_TOP\n"); );
    // Body
    int state__Vcvt;
    for (size_t state__Vidx = 0; state__Vidx < 1; ++state__Vidx) state__Vcvt = state;
    sim_exit(state__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_RMU__DOT__u1_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_RMU__DOT__u1_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void ifetch(long long pc, long long* inst);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__ifetch_TOP(QData/*63:0*/ pc, QData/*63:0*/ &inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__ifetch_TOP\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    long long inst__Vcvt;
    ifetch(pc__Vcvt, &inst__Vcvt);
    inst = inst__Vcvt;
}

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_c5a71c1e_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0;
    CData/*5:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count;
    CData/*0:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<8>/*255:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    CData/*31:0*/ __Vtemp31;
    CData/*31:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<39>/*1239:0*/ __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0;
    // Body
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY 
        = vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
    __Vdlyvset__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0 = 0U;
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY 
        = vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY;
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID 
        = vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID 
        = vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    __Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 = 0U;
    __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count;
    __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q;
    __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->top__DOT__inst_type = vlSelf->top__DOT__u_dec__DOT__inst_type_pre;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_AW_READY))) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
    }
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY 
        = ((IData)(vlSelf->rst_n) & ((~ ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY))) 
                                     & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID))));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_AW_READY))) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__itrace_en = 0U;
    }
    if (vlSelf->top__DOT__u_ifetch__DOT__rask) {
        vlSelf->top__DOT__itrace_en = 1U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_ifetch__DOT__rask) {
            vlSelf->top__DOT__op = (((((((((0x67ULL 
                                            == (0x707fULL 
                                                & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))) 
                                           | (0x4003ULL 
                                              == (0x707fULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                          | (0x5003ULL 
                                             == (0x707fULL 
                                                 & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                         | (0x6003ULL 
                                            == (0x707fULL 
                                                & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                        | (0x3003ULL 
                                           == (0x707fULL 
                                               & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                       | (0x2003ULL 
                                          == (0x707fULL 
                                              & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                      | (0x1003ULL 
                                         == (0x707fULL 
                                             & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                     | (3ULL == (0x707fULL 
                                                 & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))
                                     ? ((0x67ULL == 
                                         (0x707fULL 
                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                         ? 3U : ((0x4003ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                  ? 4U
                                                  : 
                                                 ((0x5003ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                   ? 5U
                                                   : 
                                                  ((0x6003ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                    ? 6U
                                                    : 
                                                   ((0x3003ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 7U
                                                     : 
                                                    ((0x2003ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 8U
                                                      : 
                                                     ((0x1003ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                       ? 9U
                                                       : 0xaU)))))))
                                     : (((((((((0x13ULL 
                                                == 
                                                (0x707fULL 
                                                 & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))) 
                                               | (0x1013ULL 
                                                  == 
                                                  (0xfc00707fULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                              | (0x2013ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                             | (0x5013ULL 
                                                == 
                                                (0xfc00707fULL 
                                                 & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                            | (0x3013ULL 
                                               == (0x707fULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                           | (0x4013ULL 
                                              == (0x707fULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                          | (0x40005013ULL 
                                             == (0xfc00707fULL 
                                                 & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                         | (0x7013ULL 
                                            == (0x707fULL 
                                                & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))
                                         ? ((0x13ULL 
                                             == (0x707fULL 
                                                 & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                             ? 1U : 
                                            ((0x1013ULL 
                                              == (0xfc00707fULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                              ? 0xbU
                                              : ((0x2013ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                  ? 0xcU
                                                  : 
                                                 ((0x5013ULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                   ? 0xdU
                                                   : 
                                                  ((0x3013ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                    ? 0xeU
                                                    : 
                                                   ((0x4013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 0xfU
                                                     : 
                                                    ((0x40005013ULL 
                                                      == 
                                                      (0xfc00707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 0x10U
                                                      : 0x11U)))))))
                                         : ((((((((
                                                   (0x1bULL 
                                                    == 
                                                    (0x707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))) 
                                                   | (0x101bULL 
                                                      == 
                                                      (0xfc00707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                  | (0x501bULL 
                                                     == 
                                                     (0xfc00707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                 | (0x4000501bULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                | (0x6013ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                               | (0x1073ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                              | (0x2073ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                             | (0x17ULL 
                                                == 
                                                (0x7fULL 
                                                 & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))
                                             ? ((0x1bULL 
                                                 == 
                                                 (0x707fULL 
                                                  & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                 ? 0x12U
                                                 : 
                                                ((0x101bULL 
                                                  == 
                                                  (0xfc00707fULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                  ? 0x13U
                                                  : 
                                                 ((0x501bULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                   ? 0x14U
                                                   : 
                                                  ((0x4000501bULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                    ? 0x15U
                                                    : 
                                                   ((0x6013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 0x16U
                                                     : 
                                                    ((0x1073ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 0x17U
                                                      : 
                                                     ((0x2073ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                       ? 0x18U
                                                       : 0x19U)))))))
                                             : ((((
                                                   (((((0x37ULL 
                                                        == 
                                                        (0x7fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))) 
                                                       | (0x3023ULL 
                                                          == 
                                                          (0x707fULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                      | (0x2023ULL 
                                                         == 
                                                         (0x707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                     | (0x1023ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                    | (0x23ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                   | (0x6fULL 
                                                      == 
                                                      (0x7fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                  | (0x33ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                 | (0x3033ULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))
                                                 ? 
                                                ((0x37ULL 
                                                  == 
                                                  (0x7fULL 
                                                   & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                  ? 0x1aU
                                                  : 
                                                 ((0x3023ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                   ? 0x1bU
                                                   : 
                                                  ((0x2023ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x1023ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 0x1dU
                                                     : 
                                                    ((0x23ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 0x1eU
                                                      : 
                                                     ((0x6fULL 
                                                       == 
                                                       (0x7fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                       ? 0x1fU
                                                       : 
                                                      ((0x33ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                        ? 0x20U
                                                        : 0x21U)))))))
                                                 : 
                                                (((((((((0x7033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))) 
                                                        | (0x6033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       | (0x4033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                      | (0x40000033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                     | (0x2000033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                    | (0x2033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                   | (0x3bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                  | (0x103bULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))
                                                  ? 
                                                 ((0x7033ULL 
                                                   == 
                                                   (0xfe00707fULL 
                                                    & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                   ? 0x22U
                                                   : 
                                                  ((0x6033ULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                    ? 0x23U
                                                    : 
                                                   ((0x4033ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 0x24U
                                                     : 
                                                    ((0x40000033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 0x25U
                                                      : 
                                                     ((0x2000033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                       ? 0x26U
                                                       : 
                                                      ((0x2033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                        ? 0x27U
                                                        : 
                                                       ((0x3bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                         ? 0x28U
                                                         : 0x29U)))))))
                                                  : 
                                                 (((((((((0x503bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))) 
                                                         | (0x4000503bULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                        | (0x200003bULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       | (0x4000003bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                      | (0x200403bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                     | (0x200603bULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                    | (0x200503bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                   | (0x200703bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))
                                                   ? 
                                                  ((0x503bULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x4000503bULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 0x2bU
                                                     : 
                                                    ((0x200003bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x4000003bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                       ? 0x2dU
                                                       : 
                                                      ((0x200403bULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                        ? 0x2eU
                                                        : 
                                                       ((0x200603bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                         ? 0x2fU
                                                         : 
                                                        ((0x200503bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                          ? 0x30U
                                                          : 0x31U)))))))
                                                   : 
                                                  (((((((((0x2005033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))) 
                                                          | (0x2007033ULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                         | (0x2006033ULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                        | (0x2004033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       | (0x1033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                      | (0x5033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                     | (0x63ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                    | (0x1063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))
                                                    ? 
                                                   ((0x2005033ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 0x32U
                                                     : 
                                                    ((0x2007033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 0x33U
                                                      : 
                                                     ((0x2006033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                       ? 0x36U
                                                       : 
                                                      ((0x2004033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                        ? 0x37U
                                                        : 
                                                       ((0x1033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                         ? 0x34U
                                                         : 
                                                        ((0x5033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                          ? 0x35U
                                                          : 
                                                         ((0x63ULL 
                                                           == 
                                                           (0x707fULL 
                                                            & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                           ? 0x38U
                                                           : 0x39U)))))))
                                                    : 
                                                   ((0x5063ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                     ? 0x3aU
                                                     : 
                                                    ((0x4063ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                      ? 0x3bU
                                                      : 
                                                     ((0x6063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                       ? 0x3cU
                                                       : 
                                                      ((0x7063ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                        ? 0x3dU
                                                        : 
                                                       ((0x30200073ULL 
                                                         == 
                                                         (0xffffffffULL 
                                                          & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                         ? 0x3eU
                                                         : 
                                                        ((0x73ULL 
                                                          == 
                                                          (0xffffffffULL 
                                                           & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                          ? 0x3fU
                                                          : 
                                                         ((0x100073ULL 
                                                           == 
                                                           (0xffffffffULL 
                                                            & (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))
                                                           ? 0x40U
                                                           : 0U))))))))))))));
        }
    } else {
        vlSelf->top__DOT__op = 0U;
    }
    if (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wr) {
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[1U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[1U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[2U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[2U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[3U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[3U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[4U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[4U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[5U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[5U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[6U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[6U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[7U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[7U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[8U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[8U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[9U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[9U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xaU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xaU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xbU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xbU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xcU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xcU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xdU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xdU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xeU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xeU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xfU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xfU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x10U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x10U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x11U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x11U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x12U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x12U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x13U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x13U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x14U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x14U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x15U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x15U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x16U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x16U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x17U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x17U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x18U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x18U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x19U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x19U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1aU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1aU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1bU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1bU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1cU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1cU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1dU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1dU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1eU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1eU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1fU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1fU];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x20U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x20U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x21U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x21U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x22U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x22U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x23U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x23U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x24U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x24U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x25U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x25U];
        __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x26U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x26U];
        __Vdlyvset__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wadr;
    }
    vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_ASK = 0U;
    if ((0U != (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        if ((1U != (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
            if ((2U != (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
                if ((3U != (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
                    if ((4U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
                        if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK) {
                            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_ASK = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__state 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state)
            : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_ifetch__DOT__rreq) {
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                = vlSelf->top__DOT__u_ifetch__DOT__pc_raddr;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d = 0ULL;
    }
    vlSelf->top__DOT__csr_wb_data = ((IData)(vlSelf->rst_n)
                                      ? vlSelf->top__DOT__u_EXU__DOT__csrf_rdata
                                      : 0ULL);
    vlSelf->top__DOT__commit_vld = vlSelf->top__DOT__exu_inst_vld;
    if (vlSelf->rst_n) {
        if ((0xaU > (IData)(vlSelf->top__DOT__u_ifetch__DOT__pre_cnt))) {
            vlSelf->top__DOT__u_ifetch__DOT__pre_cnt 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_ifetch__DOT__pre_cnt)));
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__pre_cnt = 0U;
    }
    vlSelf->top__DOT__rs2 = (0x1fU & (IData)(((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                              >> 0x14U)));
    vlSelf->top__DOT__rs1 = (0x1fU & (IData)(((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                              >> 0xfU)));
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r 
        = vlSelf->top__DOT__rd;
    vlSelf->top__DOT__csr_wb_addr = ((IData)(vlSelf->rst_n)
                                      ? (IData)(vlSelf->top__DOT__rd)
                                      : 0U);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_ifetch__DOT__rreq) {
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[1U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[1U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[2U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[2U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[3U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[3U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[4U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[4U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[5U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[5U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[6U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[6U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[7U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[7U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[8U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[8U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[9U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[9U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xaU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xaU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xbU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xbU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xcU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xcU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xdU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xdU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xeU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xeU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xfU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xfU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x10U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x10U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x11U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x11U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x12U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x12U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x13U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x13U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x14U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x14U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x15U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x15U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x16U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x16U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x17U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x17U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x18U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x18U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x19U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x19U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1aU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1aU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1bU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1bU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1cU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1cU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1dU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1dU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1eU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1eU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1fU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1fU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x20U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x20U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x21U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x21U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x22U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x22U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x23U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x23U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x24U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x24U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x25U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x25U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x26U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x26U];
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[1U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[2U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[3U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[4U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[5U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[6U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[7U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[8U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[9U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xaU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xbU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xcU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xdU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xeU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xfU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x10U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x11U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x12U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x13U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x14U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x15U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x16U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x17U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x18U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x19U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1aU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1bU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1cU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1dU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1eU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1fU] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x20U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x21U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x22U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x23U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x24U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x25U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x26U] = 0U;
    }
    VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->top__DOT__src1);
    VL_EXTEND_WQ(128,64, __Vtemp3, vlSelf->top__DOT__src2);
    VL_MUL_W(4, __Vtemp4, __Vtemp2, __Vtemp3);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U] 
        = __Vtemp4[0U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[1U] 
        = __Vtemp4[1U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[2U] 
        = __Vtemp4[2U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[3U] 
        = __Vtemp4[3U];
    if (vlSelf->top__DOT__u_RMU__DOT__wb_vld) {
        __Vdlyvval__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0 
            = vlSelf->top__DOT__u_RMU__DOT__wb_data;
        __Vdlyvset__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0 
            = vlSelf->top__DOT__u_RMU__DOT__wb_addr;
    }
    vlSelf->top__DOT__u_EXU__DOT__csr_data_vld = ((IData)(vlSelf->rst_n) 
                                                  & (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req));
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY 
        = ((IData)(vlSelf->rst_n) & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)) 
                                      & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY)));
    if (vlSelf->rst_n) {
        if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID) 
               & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID)) 
              & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID = 1U;
        } else if (((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY) 
                    & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID = 0U;
        }
    } else {
        __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg 
                = vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg) 
             & (IData)(vlSelf->top__DOT__axis1_R_VALID))) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
        } else if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
    }
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY 
        = ((IData)(vlSelf->rst_n) & ((~ ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY))) 
                                     & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY)) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID))));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY) 
             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID = 0U;
        } else if ((((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID)) 
                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID)) 
                    & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY))) {
            __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID = 1U;
        }
    } else {
        __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID = 0U;
    }
    if (vlSelf->rst_n) {
        if ((((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
                | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
               | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
              | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
             | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld))) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d = 0U;
        } else if ((((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req) 
                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)) 
                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)) 
                     | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req)) 
                    | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req))) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d = 0U;
    }
    vlSelf->top__DOT__axis2_B_READY = ((IData)(vlSelf->rst_n) 
                                       & ((~ (IData)(vlSelf->top__DOT__axis2_B_READY)) 
                                          & ((IData)(vlSelf->top__DOT__in_channel) 
                                             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
    vlSelf->top__DOT__axis1_B_READY = ((IData)(vlSelf->rst_n) 
                                       & ((~ (IData)(vlSelf->top__DOT__axis1_B_READY)) 
                                          & ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK) {
            __Vtemp8[1U] = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[3U];
            __Vtemp8[2U] = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[4U];
            __Vtemp8[3U] = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[5U];
            __Vtemp8[4U] = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[6U];
            __Vtemp8[5U] = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[7U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[0U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[2U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[1U] 
                = __Vtemp8[1U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[2U] 
                = __Vtemp8[2U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[3U] 
                = __Vtemp8[3U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[4U] 
                = __Vtemp8[4U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[5U] 
                = __Vtemp8[5U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[6U] 
                = (IData)(((IData)(vlSelf->top__DOT__in_channel)
                            ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA));
            vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[7U] 
                = (IData)((((IData)(vlSelf->top__DOT__in_channel)
                             ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA) 
                           >> 0x20U));
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[0U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[1U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[2U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[3U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[4U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[5U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[6U] = 0U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[7U] = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg) 
             & ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)))) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) {
            vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis2_W_VALID) 
             & (IData)(vlSelf->top__DOT__axis2_W_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__st_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg 
                = vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis2_W_VALID) 
             & (IData)(vlSelf->top__DOT__axis2_W_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
        } else if (vlSelf->top__DOT__u_EXU__DOT__st_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg 
                = vlSelf->top__DOT__src2;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__ld_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg 
                = (vlSelf->top__DOT__src1 + vlSelf->top__DOT__imm);
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis2_W_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__st_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg) 
             & (IData)(vlSelf->top__DOT__axis2_R_VALID))) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__ld_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
             & (IData)(vlSelf->top__DOT__axis2_AW_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
        } else if (vlSelf->top__DOT__u_EXU__DOT__st_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg 
                = vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis2_AW_READY))) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__st_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg) 
             & ((IData)(vlSelf->top__DOT__in_channel) 
                & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)))) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__ld_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__dec_inst_vld) {
            vlSelf->ifetch_taken = vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre;
        }
    } else {
        vlSelf->ifetch_taken = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__dec_inst_vld) {
            vlSelf->ifetch_taken_pc = vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre;
        }
    } else {
        vlSelf->ifetch_taken_pc = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__dec_inst_vld) {
            vlSelf->top__DOT__alu_wb_addr = vlSelf->top__DOT__rd;
        }
    } else {
        vlSelf->top__DOT__alu_wb_addr = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__exu_inst_vld) {
            vlSelf->top__DOT__commit_inst = vlSelf->top__DOT__exu_inst;
        }
    } else {
        vlSelf->top__DOT__commit_inst = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign 
                = (1U & ((IData)((vlSelf->top__DOT__inst_act 
                                  >> 0xdU)) & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor 
                                                       >> 0x3fU))));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign 
                = (1U & ((IData)((vlSelf->top__DOT__inst_act 
                                  >> 0xdU)) & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend 
                                                       >> 0x3fU))));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign = 0U;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req) {
        __Vtemp12[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp12[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp12[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        __Vtemp14[0U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
        __Vtemp14[1U] = (((IData)((((QData)((IData)(
                                                    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                          >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                  vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                >> 0x20U)) 
                                       << 1U));
        __Vtemp14[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                >> 0x1eU)) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
        VL_ADD_W(3, __Vtemp15, __Vtemp12, __Vtemp14);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out 
            = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 0x11U))) ? ((1U & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 0xdU)))
                                              ? ((1U 
                                                  & ((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                        ? 
                                                       (7U 
                                                        & __Vtemp15[2U])
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
                : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum);
    }
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out 
            = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)
                ? ((7U == (7U & (IData)((vlSelf->top__DOT__inst_act 
                                         >> 3U)))) ? 
                   (vlSelf->top__DOT__src1 & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                    : ((6U == (7U & (IData)((vlSelf->top__DOT__inst_act 
                                             >> 3U))))
                        ? (vlSelf->top__DOT__src1 | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                        : ((4U == (7U & (IData)((vlSelf->top__DOT__inst_act 
                                                 >> 3U))))
                            ? (vlSelf->top__DOT__src1 
                               ^ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                            : 0ULL))) : 0ULL);
    }
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out 
            = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req)
                ? ((1U & (IData)((vlSelf->top__DOT__inst_act 
                                  >> 0xcU))) ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res)))
                    : ((1U & (IData)((vlSelf->top__DOT__inst_act 
                                      >> 0xcU))) ? 0ULL
                        : ((1U & (IData)((vlSelf->top__DOT__inst_act 
                                          >> 0xfU)))
                            ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                : (vlSelf->top__DOT__src1 
                                   << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                            : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                ? (vlSelf->top__DOT__src1 
                                   >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                : (vlSelf->top__DOT__src1 
                                   << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))))))
                : 0ULL);
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b 
                = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                                  >> 0xdU))) ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor 
                                                            >> 0x3fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor))
                                                 : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor)
                    : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor);
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__exu_inst_vld) {
            vlSelf->top__DOT__commit_inst_pc = vlSelf->top__DOT__exu_inst_pc;
        }
    } else {
        vlSelf->top__DOT__commit_inst_pc = 0ULL;
    }
    vlSelf->top__DOT__csr_wb_vld = ((IData)(vlSelf->rst_n) 
                                    & ((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                       & (IData)((vlSelf->top__DOT__inst_act 
                                                  >> 1U))));
    if (vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 
            = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                ? 0xa00001800ULL : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 8U)))
                                         ? vlSelf->top__DOT__dec_inst_pc
                                         : ((1U & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0xaU)))
                                             ? ((1U 
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
                                     : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 0xbULL : 0ULL)));
        __Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 
            = ((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                ? 0U : ((0x300U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                         ? 1U : ((0x341U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                  ? 2U : ((0x305U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                           ? 3U : 0U))));
    }
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r 
        = (1U & (IData)((vlSelf->top__DOT__inst_act 
                         >> 1U)));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                                  >> 0xdU))) ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend 
                                                            >> 0x3fU)))
                                                 ? 
                                                (1ULL 
                                                 + 
                                                 (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend))
                                                 : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend)
                    : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend);
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r = 0ULL;
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign = 0U;
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count = 0U;
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy = 1U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy) {
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                = ((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                    << 1U) | (QData)((IData)((1U & 
                                              (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U])))));
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count)));
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                = (((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U])));
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign 
                = (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U]);
            if ((0x3fU == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count))) {
                __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy = 0U;
            }
        }
    } else {
        __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count = 0U;
        __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r = 0ULL;
        __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q = 0ULL;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__ld_req) {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d 
            = (7U & (IData)((vlSelf->top__DOT__inst_act 
                             >> 3U)));
    }
    if (vlSelf->top__DOT__dec_inst_vld) {
        vlSelf->jmp_type = ((0x20U & ((IData)((vlSelf->top__DOT__inst_act 
                                               >> 0x19U)) 
                                      << 5U)) | ((0x10U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 0x18U)) 
                                                     << 4U)) 
                                                 | ((8U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__inst_act 
                                                                 >> 0x17U)) 
                                                        << 3U)) 
                                                    | (7U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__inst_act 
                                                                  >> 0x1aU))))));
    }
    if (vlSelf->top__DOT__dec_inst_vld) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d 
            = (1U & (IData)((vlSelf->top__DOT__inst_act 
                             >> 0x14U)));
    }
    if (vlSelf->top__DOT__dec_inst_vld) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d 
            = (1U & (IData)((vlSelf->top__DOT__inst_act 
                             >> 0xcU)));
    }
    vlSelf->top__DOT__u_EXU__DOT__bju_data_vld = ((IData)(vlSelf->rst_n) 
                                                  & ((IData)(vlSelf->top__DOT__dec_inst_vld) 
                                                     & (IData)(
                                                               (0ULL 
                                                                != 
                                                                (0x1c000200ULL 
                                                                 & vlSelf->top__DOT__inst_act)))));
    if (__Vdlyvset__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0) {
        vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[__Vdlyvdim0__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_RMU__DOT__u1_gpr__DOT__rf__v0;
    }
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY 
        = __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID 
        = __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID 
        = __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY 
        = __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY;
    if (__Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0) {
        vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[__Vdlyvdim0__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0] 
            = __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count 
        = __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
        = __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy 
        = __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
    if (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rd) {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[1U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][1U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[2U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][2U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[3U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][3U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[4U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][4U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[5U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][5U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[6U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][6U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[7U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][7U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[8U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][8U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[9U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][9U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xaU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0xaU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xbU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0xbU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xcU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0xcU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xdU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0xdU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xeU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0xeU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xfU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0xfU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x10U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x10U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x11U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x11U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x12U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x12U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x13U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x13U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x14U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x14U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x15U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x15U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x16U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x16U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x17U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x17U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x18U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x18U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x19U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x19U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1aU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x1aU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1bU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x1bU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1cU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x1cU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1dU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x1dU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1eU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x1eU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1fU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x1fU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x20U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x20U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x21U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x21U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x22U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x22U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x23U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x23U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x24U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x24U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x25U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x25U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x26U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory
            [vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr][0x26U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[1U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[1U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[2U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[2U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[3U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[3U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[4U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[4U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[5U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[5U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[6U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[6U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[7U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[7U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[8U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[8U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[9U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[9U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xaU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xaU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xbU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xbU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xcU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xcU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xdU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xdU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xeU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xeU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xfU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0xfU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x10U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x10U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x11U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x11U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x12U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x12U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x13U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x13U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x14U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x14U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x15U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x15U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x16U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x16U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x17U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x17U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x18U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x18U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x19U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x19U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1aU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1aU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1bU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1bU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1cU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1cU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1dU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1dU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1eU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1eU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1fU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x1fU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x20U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x20U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x21U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x21U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x22U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x22U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x23U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x23U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x24U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x24U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x25U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x25U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x26U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1[0x26U];
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR = 0ULL;
    }
    if ((0U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        if (vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq) {
            vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR 
                = (0xffffffffffffffe0ULL & vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr);
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK) {
            vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR 
                = (8ULL + (0xffffffffffffffe0ULL & vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr));
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK) {
            vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR 
                = (0x10ULL + (0xffffffffffffffe0ULL 
                              & vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr));
        }
    } else if ((3U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        if (vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK) {
            vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR 
                = (0x18ULL + (0xffffffffffffffe0ULL 
                              & vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr));
        }
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ = 0U;
    }
    if ((0U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ = vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq;
    } else if ((1U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ = vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK;
    } else if ((2U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ = vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK;
    } else if ((3U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ = vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK;
    } else if ((4U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ = 0U;
    }
    vlSelf->top__DOT__imm = vlSelf->top__DOT__u_dec__DOT__imm_pre;
    vlSelf->top__DOT__rd = (0x1fU & (IData)(((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                             >> 7U)));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__dec_inst_vld) {
            vlSelf->top__DOT__exu_inst = vlSelf->top__DOT__dec_inst;
        }
    } else {
        vlSelf->top__DOT__exu_inst = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__dec_inst_vld) {
            vlSelf->top__DOT__exu_inst_pc = vlSelf->top__DOT__dec_inst_pc;
        }
    } else {
        vlSelf->top__DOT__exu_inst_pc = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__nstate)
            : 0U);
    __Vtemp21[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp21[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp21[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp22, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
    __Vtemp24[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp24[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp24[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp26, __Vtemp24, __Vtemp25);
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp23[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp23[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp23[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp26[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp26[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp26[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid 
        = ((~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy)) 
           & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
    vlSelf->top__DOT__inst_act = vlSelf->top__DOT__u_dec__DOT__inst_act_pre;
    if (__Vdlyvset__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0) {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][1U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[1U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][2U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[2U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][3U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[3U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][4U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[4U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][5U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[5U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][6U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[6U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][7U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[7U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][8U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[8U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][9U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[9U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0xaU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xaU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0xbU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xbU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0xcU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xcU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0xdU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xdU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0xeU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xeU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0xfU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0xfU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x10U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x10U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x11U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x11U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x12U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x12U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x13U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x13U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x14U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x14U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x15U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x15U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x16U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x16U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x17U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x17U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x18U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x18U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x19U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x19U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x1aU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1aU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x1bU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1bU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x1cU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1cU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x1dU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1dU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x1eU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1eU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x1fU] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x1fU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x20U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x20U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x21U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x21U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x22U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x22U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x23U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x23U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x24U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x24U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x25U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x25U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vdlyvdim0__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0][0x26U] 
            = __Vdlyvval__top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory__v0[0x26U];
    }
    vlSelf->top__DOT__alu_wb_vld = (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
                                     | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
                                    | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
    vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state 
        = ((IData)(vlSelf->rst_n) ? (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__next_state)
            : 0U);
    vlSelf->top__DOT__axis1_R_READY = ((IData)(vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) 
                                       | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__dec_inst = (QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst));
        vlSelf->top__DOT__dec_inst_pc = vlSelf->top__DOT__ifetch_inst_pc;
        vlSelf->top__DOT__dec_inst_vld = ((IData)(vlSelf->top__DOT__u_ifetch__DOT__rask) 
                                          & 1U);
    } else {
        vlSelf->top__DOT__dec_inst = 0ULL;
        vlSelf->top__DOT__dec_inst_pc = 0x80000000ULL;
        vlSelf->top__DOT__dec_inst_vld = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr 
        = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
            ? 0x300U : (0xfffU & ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__inst_act 
                                                     >> 8U)))
                                       ? 0x341U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__inst_act 
                                                               >> 0xaU)))
                                                    ? (IData)(vlSelf->top__DOT__imm)
                                                    : 0U))
                                   : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                       ? 0x342U : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir 
        = (IData)((0x10020ULL == (0x10020ULL & vlSelf->top__DOT__inst_act)));
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 4U))) ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__inst_act 
                                                     >> 3U)))
                                       ? 0xffU : 0xfU)
            : ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 3U))) ? 3U : 1U));
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 8U))) ? 0x305U : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 7U)))
                                                ? 0x341U
                                                : (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__imm))));
    vlSelf->top__DOT__u_EXU__DOT__csrf_raddr = ((0x342U 
                                                 == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr))
                                                 ? 0U
                                                 : 
                                                ((0x300U 
                                                  == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr))
                                                  ? 1U
                                                  : 
                                                 ((0x341U 
                                                   == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr))
                                                   ? 2U
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr))
                                                    ? 3U
                                                    : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS 
        = (IData)((0ULL != (0x60000ULL & vlSelf->top__DOT__inst_act)));
    vlSelf->top__DOT__u_EXU__DOT__csrf_rdata = vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf
        [vlSelf->top__DOT__u_EXU__DOT__csrf_raddr];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U] 
        = (1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__exu_inst_vld) {
            vlSelf->top__DOT__ifetch_inst_pc = vlSelf->top__DOT__u_ifetch__DOT__pc_raddr;
        }
    } else {
        vlSelf->top__DOT__ifetch_inst_pc = 0x80000000ULL;
    }
    if (vlSelf->top__DOT__dec_inst_vld) {
        if (VL_UNLIKELY((0x40U == vlSelf->top__DOT__op))) {
            VL_WRITEF("ebreak\n");
            Vtop___024root____Vdpiimwrap_top__DOT__u_dec__DOT__sim_exit_TOP(0U);
        } else if ((0U == vlSelf->top__DOT__op)) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_dec__DOT__sim_exit_TOP(1U);
        }
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req 
        = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
           & (IData)((vlSelf->top__DOT__inst_act >> 0x10U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req 
        = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
           & (IData)((vlSelf->top__DOT__inst_act >> 0xeU)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req 
        = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
           & (IData)((vlSelf->top__DOT__inst_act >> 0x16U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req 
        = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
           & (IData)((vlSelf->top__DOT__inst_act >> 0x15U)));
    vlSelf->top__DOT__u_EXU__DOT__sys_req = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__inst_act 
                                                        >> 0xbU)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req 
        = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
           & (IData)((vlSelf->top__DOT__inst_act >> 0x13U)));
    vlSelf->top__DOT__u_EXU__DOT__st_req = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0x1fU)));
    vlSelf->top__DOT__u_EXU__DOT__ld_req = ((IData)(vlSelf->top__DOT__dec_inst_vld) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0x20U)));
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__nstate 
        = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
            ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                     ? (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                         & (IData)((vlSelf->top__DOT__inst_act 
                                    >> 8U))) ? 3U : 2U)
                     : 2U));
    if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen 
            = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 8U))) ? (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req)
                : ((IData)((vlSelf->top__DOT__inst_act 
                            >> 0xaU)) & (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req)));
    } else if ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen = 1U;
    }
    vlSelf->top__DOT__axis2_W_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
    vlSelf->top__DOT__axis2_AW_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
    vlSelf->top__DOT__axis2_R_READY = ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__axis2_AR_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->pc = vlSelf->top__DOT__ifetch_inst_pc;
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
    vlSelf->top__DOT__axis1_AW_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
    vlSelf->top__DOT__axis1_W_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
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
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY 
            = vlSelf->top__DOT__axis1_B_READY;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
    }
    vlSelf->top__DOT__axis1_R_VALID = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
    if (vlSelf->top__DOT__in_channel) {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_R_READY));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AR_VALID));
        vlSelf->top__DOT__axis2_R_VALID = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID) 
                                           & 1U);
        vlSelf->top__DOT__axis2_W_READY = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY) 
                                           & 1U);
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = vlSelf->top__DOT__axis1_R_READY;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = ((IData)(vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) 
               | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
        vlSelf->top__DOT__axis2_R_VALID = 0U;
        vlSelf->top__DOT__axis2_W_READY = 0U;
    }
    vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK = ((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                                 & (IData)(vlSelf->top__DOT__axis1_R_READY));
    if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID) 
           & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID)) 
          & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)) 
         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL)
                                                                                 : vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg), vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA 
            = vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid 
        = (((IData)(vlSelf->top__DOT__axis2_R_READY) 
            & (IData)(vlSelf->top__DOT__axis2_R_VALID)) 
           | ((IData)(vlSelf->top__DOT__axis2_W_READY) 
              & (IData)(vlSelf->top__DOT__axis2_W_VALID)));
    vlSelf->top__DOT__axis2_R_DATA = ((IData)(vlSelf->top__DOT__in_channel)
                                       ? ((IData)(vlSelf->top__DOT__in_channel)
                                           ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                           : 0ULL) : 0ULL);
    vlSelf->top__DOT__exu_inst_vld = ((((IData)(vlSelf->top__DOT__u_EXU__DOT__bju_data_vld) 
                                        | (IData)(vlSelf->top__DOT__alu_wb_vld)) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid)) 
                                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
    vlSelf->top__DOT__lsu_wb_vld = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid) 
                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
    vlSelf->top__DOT__u_ifetch__DOT__rreq = ((IData)(vlSelf->top__DOT__exu_inst_vld) 
                                             | (9U 
                                                == (IData)(vlSelf->top__DOT__u_ifetch__DOT__pre_cnt)));
    vlSelf->top__DOT__u_ifetch__DOT__pc_raddr = 0x80000000ULL;
    if (vlSelf->top__DOT__exu_inst_vld) {
        vlSelf->top__DOT__u_ifetch__DOT__pc_raddr = 
            ((IData)(vlSelf->ifetch_taken) ? vlSelf->ifetch_taken_pc
              : (4ULL + vlSelf->top__DOT__ifetch_inst_pc));
    }
    vlSelf->top__DOT__u_RMU__DOT__wb_vld = (((IData)(vlSelf->top__DOT__alu_wb_vld) 
                                             | (IData)(vlSelf->top__DOT__lsu_wb_vld)) 
                                            | (IData)(vlSelf->top__DOT__csr_wb_vld));
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rd = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[1U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[2U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[3U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[4U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[5U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[6U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[7U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[8U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[9U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xaU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xbU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xcU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xdU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xeU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xfU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x10U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x11U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x12U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x13U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x14U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x15U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x16U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x17U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x18U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x19U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1aU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1bU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1cU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1dU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1eU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1fU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x20U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x21U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x22U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x23U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x24U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x25U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x26U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wadr = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wr = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[1U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[2U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[3U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[4U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[5U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[6U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[7U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[8U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[9U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xaU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xbU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xcU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xdU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xeU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xfU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x10U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x11U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x12U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x13U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x14U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x15U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x16U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x17U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x18U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x19U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1aU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1bU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1cU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1dU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1eU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1fU] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x20U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x21U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x22U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x23U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x24U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x25U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x26U] = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__rask = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__inst = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__icache_hit = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__icache_inv = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__icache_rep = 0U;
    vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = 0U;
        if (vlSelf->top__DOT__u_ifetch__DOT__rreq) {
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = 1U;
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rd = 1U;
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr 
                = (0x3fU & (IData)((vlSelf->top__DOT__u_ifetch__DOT__pc_raddr 
                                    >> 5U)));
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = 1U;
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[1U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[1U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[2U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[2U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[3U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[3U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[4U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[4U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[5U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[5U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[6U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[6U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[7U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[7U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[8U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[8U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[9U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[9U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xaU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xaU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xbU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xbU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xcU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xcU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xdU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xdU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xeU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xeU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xfU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0xfU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x10U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x10U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x11U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x11U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x12U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x12U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x13U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x13U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x14U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x14U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x15U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x15U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x16U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x16U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x17U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x17U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x18U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x18U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x19U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x19U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1aU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1aU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1bU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1bU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1cU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1cU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1dU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1dU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1eU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1eU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1fU] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x1fU];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x20U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x20U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x21U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x21U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x22U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x22U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x23U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x23U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x24U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x24U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x25U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x25U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x26U] 
            = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat[0x26U];
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i = 0U;
        {
            while (VL_GTS_III(1,32,32, 4U, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)) {
                if ((((0x4d7U >= (0x7ffU & ((IData)(0x135U) 
                                            + ((IData)(0x136U) 
                                               * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)))) 
                      & (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                         (0x3fU & (((IData)(0x135U) 
                                    + ((IData)(0x136U) 
                                       * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)) 
                                   >> 5U))] >> (0x1fU 
                                                & ((IData)(0x135U) 
                                                   + 
                                                   ((IData)(0x136U) 
                                                    * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i))))) 
                     & (((0x4d7U >= (0x7ffU & ((IData)(0x100U) 
                                               + ((IData)(0x136U) 
                                                  * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i))))
                          ? (0x1fffffffffffffULL & 
                             (((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                                               (((IData)(0x34U) 
                                                 + 
                                                 (0x7ffU 
                                                  & ((IData)(0x100U) 
                                                     + 
                                                     ((IData)(0x136U) 
                                                      * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)))) 
                                                >> 5U)])) 
                               << ((0U == (0x1fU & 
                                           ((IData)(0x100U) 
                                            + ((IData)(0x136U) 
                                               * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i))))
                                    ? 0x20U : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x100U) 
                                                     + 
                                                     ((IData)(0x136U) 
                                                      * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)))))) 
                              | (((0U == (0x1fU & ((IData)(0x100U) 
                                                   + 
                                                   ((IData)(0x136U) 
                                                    * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i))))
                                   ? 0ULL : ((QData)((IData)(
                                                             vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                                                             (((IData)(0x1fU) 
                                                               + 
                                                               (0x7ffU 
                                                                & ((IData)(0x100U) 
                                                                   + 
                                                                   ((IData)(0x136U) 
                                                                    * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)))) 
                                                              >> 5U)])) 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x100U) 
                                                     + 
                                                     ((IData)(0x136U) 
                                                      * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)))))) 
                                 | ((QData)((IData)(
                                                    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                                                    (0x3fU 
                                                     & (((IData)(0x100U) 
                                                         + 
                                                         ((IData)(0x136U) 
                                                          * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)) 
                                                        >> 5U))])) 
                                    >> (0x1fU & ((IData)(0x100U) 
                                                 + 
                                                 ((IData)(0x136U) 
                                                  * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i)))))))
                          : 0ULL) == (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                      >> 0xbU)))) {
                    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = 0U;
                    vlSelf->top__DOT__u_ifetch__DOT__icache_hit = 1U;
                    vlSelf->top__DOT__u_ifetch__DOT__rask = 1U;
                    vlSelf->top__DOT__u_ifetch__DOT__inst 
                        = ((0x4d7U >= (0x7ffU & (((IData)(0x136U) 
                                                  * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i) 
                                                 + 
                                                 (0xe0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                                              >> 2U)) 
                                                     << 5U)))))
                            ? (((0U == (0x1fU & (((IData)(0x136U) 
                                                  * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i) 
                                                 + 
                                                 (0xe0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                                              >> 2U)) 
                                                     << 5U)))))
                                 ? 0U : (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                                         (((IData)(0x1fU) 
                                           + (0x7ffU 
                                              & (((IData)(0x136U) 
                                                  * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i) 
                                                 + 
                                                 (0xe0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                                              >> 2U)) 
                                                     << 5U))))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (((IData)(0x136U) 
                                                 * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i) 
                                                + (0xe0U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                                               >> 2U)) 
                                                      << 5U))))))) 
                               | (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                                  (0x3fU & ((((IData)(0x136U) 
                                              * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i) 
                                             + (0xe0U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                                            >> 2U)) 
                                                   << 5U))) 
                                            >> 5U))] 
                                  >> (0x1fU & (((IData)(0x136U) 
                                                * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i) 
                                               + (0xe0U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                                              >> 2U)) 
                                                     << 5U))))))
                            : 0U);
                    goto __Vlabel1;
                }
                vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i 
                    = ((IData)(1U) + vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i);
            }
            __Vlabel1: ;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__u_ifetch__DOT__icache_hit)))) {
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = 2U;
            vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq = 1U;
            vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__state))) {
        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = 2U;
        if (vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_ASK) {
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i = 0U;
            {
                while (VL_GTS_III(1,32,32, 4U, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i)) {
                    if ((1U & (~ ((0x4d7U >= (0x7ffU 
                                              & ((IData)(0x135U) 
                                                 + 
                                                 ((IData)(0x136U) 
                                                  * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i)))) 
                                  & (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                                     (0x3fU & (((IData)(0x135U) 
                                                + ((IData)(0x136U) 
                                                   * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i)) 
                                               >> 5U))] 
                                     >> (0x1fU & ((IData)(0x135U) 
                                                  + 
                                                  ((IData)(0x136U) 
                                                   * vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i)))))))) {
                        vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line 
                            = (3U & vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i);
                        vlSelf->top__DOT__u_ifetch__DOT__icache_inv = 1U;
                        goto __Vlabel2;
                    }
                    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i 
                        = ((IData)(1U) + vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i);
                }
                __Vlabel2: ;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__u_ifetch__DOT__icache_inv)))) {
                vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line 
                    = (3U & (IData)((vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                     >> 3U)));
                vlSelf->top__DOT__u_ifetch__DOT__icache_rep = 1U;
            }
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = 0U;
            vlSelf->top__DOT__u_ifetch__DOT__rask = 1U;
            vlSelf->top__DOT__u_ifetch__DOT__inst = 
                vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[
                (7U & (IData)((vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                               >> 2U)))];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[1U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[1U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[2U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[2U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[3U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[3U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[4U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[4U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[5U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[5U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[6U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[6U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[7U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[7U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[8U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[8U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[9U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[9U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xaU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xaU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xbU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xbU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xcU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xcU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xdU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xdU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xeU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xeU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xfU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0xfU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x10U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x10U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x11U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x11U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x12U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x12U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x13U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x13U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x14U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x14U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x15U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x15U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x16U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x16U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x17U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x17U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x18U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x18U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x19U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x19U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1aU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1aU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1bU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1bU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1cU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1cU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1dU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1dU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1eU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1eU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1fU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x1fU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x20U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x20U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x21U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x21U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x22U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x22U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x23U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x23U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x24U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x24U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x25U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x25U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x26U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d[0x26U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[0U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[0U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[1U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[1U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[2U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[2U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[3U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[3U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[4U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[4U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[5U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[5U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[6U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[6U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1[7U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA[7U];
            if (VL_LIKELY((0x4d7U >= (0x7ffU & ((IData)(0x136U) 
                                                * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line)))))) {
                VL_ASSIGNSEL_WIIW(1240,256,(0x7ffU 
                                            & ((IData)(0x136U) 
                                               * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line))), vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1);
            }
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound2 
                = (vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                   >> 0xbU);
            if (VL_LIKELY((0x4d7U >= (0x7ffU & ((IData)(0x100U) 
                                                + ((IData)(0x136U) 
                                                   * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line))))))) {
                VL_ASSIGNSEL_WIIQ(1240,53,(0x7ffU & 
                                           ((IData)(0x100U) 
                                            + ((IData)(0x136U) 
                                               * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line)))), vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound2);
            }
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound3 = 1U;
            if (VL_LIKELY((0x4d7U >= (0x7ffU & ((IData)(0x135U) 
                                                + ((IData)(0x136U) 
                                                   * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line))))))) {
                vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[(0x3fU 
                                                                       & (((IData)(0x135U) 
                                                                           + 
                                                                           ((IData)(0x136U) 
                                                                            * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line))) 
                                                                          >> 5U))] 
                    = (((~ ((IData)(1U) << (0x1fU & 
                                            ((IData)(0x135U) 
                                             + ((IData)(0x136U) 
                                                * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line)))))) 
                        & vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[
                        (0x3fU & (((IData)(0x135U) 
                                   + ((IData)(0x136U) 
                                      * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line))) 
                                  >> 5U))]) | ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound3) 
                                               << (0x1fU 
                                                   & ((IData)(0x135U) 
                                                      + 
                                                      ((IData)(0x136U) 
                                                       * (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line))))));
            }
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[1U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[1U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[2U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[2U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[3U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[3U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[4U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[4U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[5U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[5U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[6U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[6U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[7U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[7U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[8U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[8U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[9U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[9U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xaU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xaU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xbU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xbU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xcU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xcU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xdU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xdU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xeU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xeU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0xfU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0xfU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x10U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x10U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x11U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x11U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x12U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x12U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x13U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x13U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x14U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x14U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x15U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x15U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x16U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x16U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x17U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x17U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x18U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x18U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x19U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x19U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1aU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1aU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1bU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1bU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1cU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1cU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1dU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1dU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1eU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1eU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x1fU] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x1fU];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x20U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x20U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x21U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x21U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x22U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x22U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x23U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x23U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x24U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x24U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x25U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x25U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat[0x26U] 
                = vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry[0x26U];
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wadr 
                = (0x3fU & (IData)((vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d 
                                    >> 5U)));
            vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wr = 1U;
        }
    }
    if (vlSelf->top__DOT__alu_wb_vld) {
        vlSelf->top__DOT__u_RMU__DOT__wb_data = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)
                                                   ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld)
                                                    ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld)
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
                                                      : 0ULL)))));
        vlSelf->top__DOT__u_RMU__DOT__wb_addr = vlSelf->top__DOT__alu_wb_addr;
    } else if (vlSelf->top__DOT__lsu_wb_vld) {
        vlSelf->top__DOT__u_RMU__DOT__wb_data = ((4U 
                                                  & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                    ? 0ULL
                                                    : (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                    ? vlSelf->top__DOT__axis2_R_DATA
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0xfU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__axis2_R_DATA)))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))));
        vlSelf->top__DOT__u_RMU__DOT__wb_addr = vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r;
    } else if (vlSelf->top__DOT__csr_wb_vld) {
        vlSelf->top__DOT__u_RMU__DOT__wb_data = vlSelf->top__DOT__csr_wb_data;
        vlSelf->top__DOT__u_RMU__DOT__wb_addr = vlSelf->top__DOT__csr_wb_addr;
    } else {
        vlSelf->top__DOT__u_RMU__DOT__wb_data = 0ULL;
        vlSelf->top__DOT__u_RMU__DOT__wb_addr = 0U;
    }
    if ((0U == (IData)(vlSelf->top__DOT__u_RMU__DOT__wb_addr))) {
        vlSelf->top__DOT__u_RMU__DOT__wb_data = 0ULL;
    }
    vlSelf->top__DOT__src1 = (((IData)(vlSelf->top__DOT__u_RMU__DOT__wb_vld) 
                               & ((IData)(vlSelf->top__DOT__rs1) 
                                  == (IData)(vlSelf->top__DOT__u_RMU__DOT__wb_addr)))
                               ? vlSelf->top__DOT__u_RMU__DOT__wb_data
                               : vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                              [vlSelf->top__DOT__rs1]);
    vlSelf->top__DOT__src2 = (((IData)(vlSelf->top__DOT__u_RMU__DOT__wb_vld) 
                               & ((IData)(vlSelf->top__DOT__rs2) 
                                  == (IData)(vlSelf->top__DOT__u_RMU__DOT__wb_addr)))
                               ? vlSelf->top__DOT__u_RMU__DOT__wb_data
                               : vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                              [vlSelf->top__DOT__rs2]);
    vlSelf->mainUpdate_valid = ((IData)(vlSelf->top__DOT__itrace_en)
                                 ? (1U & (IData)(vlSelf->top__DOT__u_ifetch__DOT__rask))
                                 : 0U);
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK) 
                     << 4U) | (((IData)(vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq) 
                                << 3U) | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state)));
    vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__next_state 
        = Vtop__ConstPool__TABLE_c5a71c1e_0[__Vtableidx1];
    vlSelf->top__DOT__u_dec__DOT__ras_rd_link = ((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                              >> 7U)))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                >> 7U)))));
    vlSelf->top__DOT__u_dec__DOT__ras_rs1_link = ((1U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                               >> 0xfU)))) 
                                                  | (5U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                 >> 0xfU)))));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3f3ffU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       << 0xbU) 
                                                      | ((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                         << 0xaU)));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3fcffU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((3U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       << 9U) 
                                                      | ((0x1bU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                         << 8U)));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3ff3fU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x73U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       << 7U) 
                                                      | ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                         << 6U)));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3ffcfU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       << 5U) 
                                                      | ((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                         << 4U)));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3fff3U 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       << 3U) 
                                                      | ((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                         << 2U)));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3fffcU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x3bU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       << 1U) 
                                                      | (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x1ffffU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | ((((((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))) 
                                                         | (3U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))) 
                                                        | (0x1bU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))) 
                                                       | (0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))) 
                                                      << 0x11U));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x2ffffU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))) 
                                                      << 0x10U));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x33fffU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       << 0xfU) 
                                                      | ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                         << 0xeU)));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3dfffU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | (((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                       | (0x3bU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)))))) 
                                                      << 0xdU));
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = (
                                                   (0x3efffU 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                   | ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                                                      << 0xcU));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0xdU)))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__src2 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__src2)))
                                         : (QData)((IData)(vlSelf->top__DOT__src2)))
            : vlSelf->top__DOT__src2);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1 
        = ((1U & (IData)(vlSelf->top__DOT__inst_act))
            ? vlSelf->top__DOT__imm : vlSelf->top__DOT__src2);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt 
        = (0x3fU & ((1U & (IData)((vlSelf->top__DOT__inst_act 
                                   >> 0xcU))) ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__inst_act))
                                                  ? (IData)(vlSelf->top__DOT__imm)
                                                  : 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__src2)))
                     : ((1U & (IData)(vlSelf->top__DOT__inst_act))
                         ? (IData)(vlSelf->top__DOT__imm)
                         : (IData)(vlSelf->top__DOT__src2))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1 
        = ((IData)((0ULL != (0x18000000ULL & vlSelf->top__DOT__inst_act)))
            ? 4ULL : ((1U & (IData)(vlSelf->top__DOT__inst_act))
                       ? vlSelf->top__DOT__imm : vlSelf->top__DOT__src2));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0xdU)))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__src1 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__src1)))
                                         : (QData)((IData)(vlSelf->top__DOT__src1)))
            : vlSelf->top__DOT__src1);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre = 0U;
    if ((IData)((0ULL != (0x18000200ULL & vlSelf->top__DOT__inst_act)))) {
        vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre = 1U;
    } else if ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 0x1aU)))) {
        vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre 
            = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__inst_act 
                                                         >> 4U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U)))
                                               ? (vlSelf->top__DOT__src1 
                                                  >= vlSelf->top__DOT__src2)
                                               : (vlSelf->top__DOT__src1 
                                                  < vlSelf->top__DOT__src2))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U)))
                                               ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__src1, vlSelf->top__DOT__src2)
                                               : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__src1, vlSelf->top__DOT__src2)))
                : ((~ (IData)((vlSelf->top__DOT__inst_act 
                               >> 4U))) & ((1U & (IData)(
                                                         (vlSelf->top__DOT__inst_act 
                                                          >> 3U)))
                                            ? (vlSelf->top__DOT__src1 
                                               != vlSelf->top__DOT__src2)
                                            : (vlSelf->top__DOT__src1 
                                               == vlSelf->top__DOT__src2))));
    }
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0x1bU))) ? vlSelf->top__DOT__src1
            : vlSelf->top__DOT__dec_inst_pc);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum 
        = (vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1 
           + vlSelf->top__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0x1bU))) ? (0xfffffffffffffffeULL 
                                         & vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum)
            : ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 9U))) ? vlSelf->top__DOT__u_EXU__DOT__csrf_rdata
                : vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum));
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM 
        = (vlSelf->top__DOT__src1 + vlSelf->top__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 
        = ((IData)((0ULL != (0x58000000ULL & vlSelf->top__DOT__inst_act)))
            ? vlSelf->top__DOT__dec_inst_pc : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0x1dU)))
                                                ? 0ULL
                                                : vlSelf->top__DOT__src1));
    vlSelf->top__DOT__u_dec__DOT__imm_pre = ((0x20000U 
                                              & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x1fU)))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                               >> 0x14U))))))
                                              : ((0x10000U 
                                                  & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(
                                                                             ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                              >> 0xcU)) 
                                                                     << 0xcU))))
                                                  : 
                                                 ((0x8000U 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x1fU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & ((IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x19U)) 
                                                                          << 5U)) 
                                                                      | (0x1fU 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 7U)))))))
                                                   : 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x1fU)))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & ((IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x14U)) 
                                                                              << 0xbU)) 
                                                                          | (0x7feU 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)
                                                     ? 0ULL
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & ((IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 7U)) 
                                                                             << 0xbU)) 
                                                                         | ((0x7e0U 
                                                                             & ((IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                            | (0x1eU 
                                                                               & ((IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 8U)) 
                                                                                << 1U)))))))
                                                      : 0ULL))))));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1e3ffffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((4U 
                                                                       & (vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                          >> 1U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                             >> 9U)) 
                                                                         | (1U 
                                                                            & vlSelf->top__DOT__u_dec__DOT__inst_type_pre))))) 
                                                     << 0x1aU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1feffffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                         >> 3U) 
                                                                        & (IData)(vlSelf->top__DOT__u_dec__DOT__ras_rd_link)) 
                                                                       | (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                            >> 0xaU) 
                                                                           & (IData)(vlSelf->top__DOT__u_dec__DOT__ras_rd_link)) 
                                                                          & (~ (IData)(vlSelf->top__DOT__u_dec__DOT__ras_rs1_link)))) 
                                                                      | (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                           >> 0xaU) 
                                                                          & (IData)(vlSelf->top__DOT__u_dec__DOT__ras_rd_link)) 
                                                                         & ((0x1fU 
                                                                             & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xfU))) 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 7U)))))))) 
                                                     << 0x18U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ff7fffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                        >> 0xaU) 
                                                                       & (~ (IData)(vlSelf->top__DOT__u_dec__DOT__ras_rd_link))) 
                                                                      & (IData)(vlSelf->top__DOT__u_dec__DOT__ras_rs1_link)))) 
                                                     << 0x17U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fdffffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                        >> 0xaU) 
                                                                       & (IData)(vlSelf->top__DOT__u_dec__DOT__ras_rd_link)) 
                                                                      & ((0x1fU 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xfU))) 
                                                                         != 
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 7U))))))) 
                                                     << 0x19U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x7fffffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((2U 
                                                                       & (vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                          >> 8U)) 
                                                                      | (1U 
                                                                         & (vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                            >> 4U))))) 
                                                     << 0x1fU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffff7ffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                         >> 7U)))) 
                                                     << 0xbU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffffbffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                       >> 7U) 
                                                                      & (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU))))))) 
                                                     << 0xaU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffffdffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                          >> 7U) 
                                                                         & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))))))))) 
                                                     << 9U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffffeffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                        >> 7U) 
                                                                       & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU))))))) 
                                                                      & (0U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x14U))))))) 
                                                     << 8U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffffffbfULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                        >> 7U) 
                                                                       & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU))))))) 
                                                                      & (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x14U))))))) 
                                                     << 6U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffffff7fULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                        >> 7U) 
                                                                       & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU))))))) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x14U))))))) 
                                                     << 7U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x19fffffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & (vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                         >> 5U)))) 
                                                     << 0x1dU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffbfffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0x2000U 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)) 
                                                                                & (0x2000000U 
                                                                                == 
                                                                                (0x2004000U 
                                                                                & vlSelf->top__DOT__u_ifetch__DOT__inst))))))) 
                                                     << 0x16U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffdfffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)((IData)(
                                                                             ((0x2000U 
                                                                               == 
                                                                               (0x2000U 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)) 
                                                                              & (0x2004000U 
                                                                                == 
                                                                                (0x2004000U 
                                                                                & vlSelf->top__DOT__u_ifetch__DOT__inst)))))) 
                                                     << 0x15U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffefffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                ((0x2000U 
                                                                                == 
                                                                                (0x2000U 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)) 
                                                                                & (0x2006000U 
                                                                                == 
                                                                                (0x2006000U 
                                                                                & vlSelf->top__DOT__u_ifetch__DOT__inst))))))) 
                                                     << 0x14U));
    __Vtemp31 = (1U & (~ ((((((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                               >> 9U) & (IData)(((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                 >> 0xeU))) 
                             | (vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                & (3U == (3U & (IData)(
                                                       ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                        >> 0xdU)))))) 
                            | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                >> 0xbU) & (3U == (7U 
                                                   & (IData)(
                                                             ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                              >> 0xcU)))))) 
                           | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                               >> 2U) & ((3U == (7U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                            >> 0xcU)))) 
                                         | (((IData)(
                                                     (vlSelf->top__DOT__u_dec__DOT__inst_act_pre 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                        >> 0xeU))) 
                                            & (IData)(
                                                      ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                       >> 0xcU)))))) 
                          | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                              >> 1U) & (((IData)((vlSelf->top__DOT__u_dec__DOT__inst_act_pre 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                    >> 0xeU))) 
                                        & (IData)(((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                   >> 0xcU)))))));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffffdfffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp31)) 
                                                     << 0xdU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffffefffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x102U 
                                                                               & vlSelf->top__DOT__u_dec__DOT__inst_type_pre))))) 
                                                     << 0xcU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffeffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                          >> 0xbU) 
                                                                         & ((1U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))) 
                                                                            | (5U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))))) 
                                                                        | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                            >> 8U) 
                                                                           & ((1U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))) 
                                                                              | (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU))))))) 
                                                                       | (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                            >> 2U) 
                                                                           & ((1U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))) 
                                                                              | (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))))) 
                                                                          & (~ (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x19U))))) 
                                                                      | (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                           >> 1U) 
                                                                          & ((1U 
                                                                              == 
                                                                              (7U 
                                                                               & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))) 
                                                                             | (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))))) 
                                                                         & (~ (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x19U))))))) 
                                                     << 0x10U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffff7fffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__u_dec__DOT__inst_act_pre 
                                                                                >> 0x10U)) 
                                                                         & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x1eU)))))) 
                                                     << 0xfU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffdffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                        >> 0xbU) 
                                                                       & ((2U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))) 
                                                                          | (3U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))))) 
                                                                      | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                          >> 2U) 
                                                                         & ((2U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU)))) 
                                                                            | (3U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU))))))))) 
                                                     << 0x11U));
    __Vtemp33 = (1U & (((((IData)(((0ULL != (0x20000ULL 
                                             & vlSelf->top__DOT__u_dec__DOT__inst_act_pre)) 
                                   | (0U != (0x468U 
                                             & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)))) 
                          | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                              >> 0xbU) & (0U == (7U 
                                                 & (IData)(
                                                           ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                            >> 0xcU)))))) 
                         | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                             >> 8U) & (0U == (7U & (IData)(
                                                           ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                            >> 0xcU)))))) 
                        | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                            >> 2U) & (IData)((0U == 
                                              (0x2007000U 
                                               & vlSelf->top__DOT__u_ifetch__DOT__inst))))) 
                       | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                           >> 1U) & (IData)((0U == 
                                             (0x2007000U 
                                              & vlSelf->top__DOT__u_ifetch__DOT__inst))))));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fff7ffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp33)) 
                                                     << 0x13U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffbffffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (((IData)(
                                                                                (vlSelf->top__DOT__u_dec__DOT__inst_act_pre 
                                                                                >> 0x13U)) 
                                                                          & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x1eU))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_type_pre))))))) 
                                                     << 0x12U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffffbfffULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(
                                                                                ((0x800U 
                                                                                == 
                                                                                (0x800U 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x90000ULL 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_act_pre)))) 
                                                                         | ((IData)(
                                                                                ((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_type_pre)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x90000ULL 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_act_pre)))) 
                                                                            & (~ (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0x19U)))))))) 
                                                     << 0xeU));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1ffffffc7ULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (7U 
                                                                      & (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xcU))))) 
                                                     << 3U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffffffdULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                            >> 4U) 
                                                                           | vlSelf->top__DOT__u_dec__DOT__inst_type_pre) 
                                                                          | (IData)(
                                                                                (vlSelf->top__DOT__u_dec__DOT__inst_act_pre 
                                                                                >> 9U))))))) 
                                                     << 1U));
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = ((0x1fffffffeULL 
                                                   & vlSelf->top__DOT__u_dec__DOT__inst_act_pre) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top__DOT__u_dec__DOT__inst_type_pre))) 
                                                                         | ((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
                                                                             >> 7U) 
                                                                            & (~ (IData)(
                                                                                ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                                                >> 0xeU))))))))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0xfU)))
                                         ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                             ? ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->top__DOT__src1), (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 
                                                (- 
                                                 ((IData)(vlSelf->top__DOT__src1) 
                                                  >> 0x1fU)))
                                             : ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__src1) 
                                                 << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 0U))
                                         : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                             ? ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__src1) 
                                                 >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 0U)
                                             : ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__src1) 
                                                 << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 0U)))
            : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U] 
        = (IData)(((0xffffffffULL | ((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (vlSelf->top__DOT__inst_act 
                                                                               >> 0xcU)))))))) 
                                     << 0x20U)) & ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS)
                                                    ? 
                                                   (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1)
                                                    : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
        = (IData)((((0xffffffffULL | ((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__inst_act 
                                                                                >> 0xcU)))))))) 
                                      << 0x20U)) & 
                    ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS)
                      ? (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1)
                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1)) 
                   >> 0x20U));
    if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID) 
           & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID)) 
          & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                                                 : 0ULL)), 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                                                 ? vlSelf->top__DOT__src2
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                                                 : 0ULL)), 
                                                                                (0xffU 
                                                                                & ((IData)(vlSelf->top__DOT__in_channel)
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
                                                                                 : 0U))));
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U] 
        = (IData)(((0xffffffffULL | ((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (vlSelf->top__DOT__inst_act 
                                                                               >> 0xcU)))))))) 
                                     << 0x20U)) & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
        = (IData)((((0xffffffffULL | ((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__inst_act 
                                                                                >> 0xcU)))))))) 
                                      << 0x20U)) & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0) 
                   >> 0x20U));
    __Vtemp39[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp39[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp39[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    __Vtemp41[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp41[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp41[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    VL_ADD_W(3, __Vtemp42, __Vtemp39, __Vtemp41);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                              ? (7U & __Vtemp42[2U])
                              : 0U))) << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                      ? 
                                                                     __Vtemp42[1U]
                                                                      : 0U))) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                        ? 
                                                                       __Vtemp42[0U]
                                                                        : 0U))) 
                                                      >> 1U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0xcU))) ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp)))
            : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
