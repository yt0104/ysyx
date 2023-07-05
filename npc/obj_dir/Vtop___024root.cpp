// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void sim_exit(int state);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP(IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP\n"); );
    // Body
    int state__Vcvt;
    for (size_t state__Vidx = 0; state__Vidx < 1; ++state__Vidx) state__Vcvt = state;
    sim_exit(state__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
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

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*6:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt;
    CData/*5:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count;
    CData/*0:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY;
    CData/*0:0*/ __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    CData/*31:0*/ __Vtemp35;
    CData/*31:0*/ __Vtemp37;
    QData/*63:0*/ __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    // Body
    __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt;
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY 
        = vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
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
    __Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 = 0U;
    vlSelf->top__DOT__inst_type = vlSelf->top__DOT__u_IDU__DOT__inst_type_pre;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_out_vld 
        = ((IData)(vlSelf->rst_n) & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_valid));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_req) 
             & (0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)))) {
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)));
        } else if ((0x40U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt))) {
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt = 0U;
        } else if ((0U != (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt))) {
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)));
        }
    } else {
        __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->top__DOT__itrace_en = 0U;
    }
    if (vlSelf->top__DOT__u_IFU__DOT__rask) {
        vlSelf->top__DOT__itrace_en = 1U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_valid) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_result 
                = ((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_result 
                    | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_result) 
                   | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_result);
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_result = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__csr_wb_data = ((IData)(vlSelf->rst_n)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__csrf_rdata
                                                  : 0ULL);
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_result;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_result;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_AW_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_result;
    }
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY 
        = ((IData)(vlSelf->rst_n) & ((~ ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY))) 
                                     & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY)) 
                                         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID))));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_AW_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
             & (IData)(vlSelf->top__DOT__axis1_W_READY))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = 0U;
    }
    __Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY 
        = ((IData)(vlSelf->rst_n) & (((~ (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)) 
                                      & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY)));
    if (vlSelf->rst_n) {
        if (((0U < (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)) 
             & (0x40U >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)))) {
            if ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplicand_r 
                               >> (0x3fU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt) 
                                            - (IData)(1U))))))) {
                VL_EXTEND_WQ(128,64, __Vtemp2, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplier_r);
                VL_SHIFTL_WWI(128,128,32, __Vtemp3, __Vtemp2, 
                              ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt) 
                               - (IData)(1U)));
                VL_ADD_W(4, __Vtemp1, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg, __Vtemp3);
                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[0U] 
                    = __Vtemp1[0U];
                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[1U] 
                    = __Vtemp1[1U];
                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[2U] 
                    = __Vtemp1[2U];
                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[3U] 
                    = __Vtemp1[3U];
            }
        } else {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[0U] = 0U;
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[1U] = 0U;
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[2U] = 0U;
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[3U] = 0U;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[0U] = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[1U] = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[2U] = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[3U] = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_IFU__DOT__rreq) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg 
                = vlSelf->top__DOT__u_IFU__DOT__ifetch_pc;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg) 
             & (IData)(vlSelf->top__DOT__axis1_R_VALID))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
        } else if (vlSelf->top__DOT__u_IFU__DOT__rreq) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__pc_r = ((IData)(vlSelf->rst_n)
                                           ? vlSelf->top__DOT__IDU_pc
                                           : 0x80000000ULL);
    if (vlSelf->rst_n) {
        if ((0xaU > (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt))) {
            vlSelf->top__DOT__u_IFU__DOT__pre_cnt = 
                (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt)));
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__pre_cnt = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__csr_data_vld = ((IData)(vlSelf->rst_n) 
                                                  & (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_out_valid 
        = ((IData)(vlSelf->rst_n) & (0x40U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req;
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r 
        = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
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
    vlSelf->top__DOT__axis2_B_READY = ((IData)(vlSelf->rst_n) 
                                       & ((~ (IData)(vlSelf->top__DOT__axis2_B_READY)) 
                                          & ((IData)(vlSelf->top__DOT__in_channel) 
                                             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
    vlSelf->top__DOT__axis1_B_READY = ((IData)(vlSelf->rst_n) 
                                       & ((~ (IData)(vlSelf->top__DOT__axis1_B_READY)) 
                                          & ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                             & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg) 
             & ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)))) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
        } else if (vlSelf->top__DOT__u_IFU__DOT__rreq) {
            vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 1U;
        }
    } else {
        vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__ld_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg 
                = vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = 0ULL;
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
                = vlSelf->top__DOT__u_EXU__DOT__src2;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = 0ULL;
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
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r 
        = (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                         >> 1U)));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign 
                = (1U & ((IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
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
                = (1U & ((IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                  >> 0xdU)) & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend 
                                                       >> 0x3fU))));
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b 
                = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
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
    if (vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 
            = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                ? 0xa00001800ULL : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 8U)))
                                         ? vlSelf->top__DOT__u_EXU__DOT__pc
                                         : ((1U & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                           >> 0xaU)))
                                             ? ((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__u_EXU__DOT__src1
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                              >> 3U))))
                                                  ? 
                                                 (vlSelf->top__DOT__u_EXU__DOT__src1 
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
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
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
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__inst_r = vlSelf->top__DOT__IDU_inst;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__inst_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__op_r = vlSelf->top__DOT__op;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__op_r = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__rd_r = vlSelf->top__DOT__rd;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rd_r = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->ifetch_taken = vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre;
        }
    } else {
        vlSelf->ifetch_taken = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->ifetch_taken_pc = vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre;
        }
    } else {
        vlSelf->ifetch_taken_pc = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__rs2_r = vlSelf->top__DOT__rs2;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rs2_r = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__imm_r = vlSelf->top__DOT__imm;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__imm_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__rs1_r = vlSelf->top__DOT__rs1;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rs1_r = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__bmu_vld = ((IData)(vlSelf->rst_n) 
                                             & ((IData)(vlSelf->top__DOT__IDU_vld) 
                                                & (IData)(
                                                          (0ULL 
                                                           != 
                                                           (0x1c000200ULL 
                                                            & vlSelf->top__DOT__u_EXU__DOT__inst_act)))));
    if ((((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld) 
          | (IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)) 
         | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld))) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 
            = vlSelf->top__DOT__u_EXU__DOT__wb_data;
        __Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 
            = ((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld)
                ? (IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr)
                : ((IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)
                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r)
                    : ((IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld)
                        ? (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr)
                        : 0U)));
    }
    if (vlSelf->top__DOT__IDU_vld) {
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
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__inst_act_r 
                = vlSelf->top__DOT__inst_act;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__inst_act_r = 0ULL;
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
    if (__Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0) {
        vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[__Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_req) 
             & (0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)))) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplier_r 
                = vlSelf->top__DOT__u_EXU__DOT__src2;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplier_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_req) 
             & (0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt)))) {
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplicand_r 
                = vlSelf->top__DOT__u_EXU__DOT__src1;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplicand_r = 0ULL;
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__IDU_pc = vlSelf->top__DOT__IFU_pc;
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state 
            = vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__nstate;
    } else {
        vlSelf->top__DOT__IDU_pc = 0x80000000ULL;
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state = 0U;
    }
    __Vtemp9[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                     << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                             >> 0x3fU))));
    __Vtemp9[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                     >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                           >> 0x20U)) 
                                  << 1U));
    __Vtemp9[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                             >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp10, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp11, __Vtemp9, __Vtemp10);
    __Vtemp12[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp12[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp12[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp13, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp14, __Vtemp12, __Vtemp13);
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp11[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp11[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp11[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp14[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp14[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp14[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid 
        = ((~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy)) 
           & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
    vlSelf->top__DOT__IDU_inst = ((IData)(vlSelf->rst_n)
                                   ? (0xffffffffULL 
                                      & vlSelf->top__DOT__axis1_R_DATA)
                                   : 0ULL);
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_IFU__DOT__rask) {
            vlSelf->top__DOT__op = (((((((((0x67ULL 
                                            == (0x707fULL 
                                                & vlSelf->top__DOT__axis1_R_DATA)) 
                                           | (0x4003ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__axis1_R_DATA))) 
                                          | (0x5003ULL 
                                             == (0x707fULL 
                                                 & vlSelf->top__DOT__axis1_R_DATA))) 
                                         | (0x6003ULL 
                                            == (0x707fULL 
                                                & vlSelf->top__DOT__axis1_R_DATA))) 
                                        | (0x3003ULL 
                                           == (0x707fULL 
                                               & vlSelf->top__DOT__axis1_R_DATA))) 
                                       | (0x2003ULL 
                                          == (0x707fULL 
                                              & vlSelf->top__DOT__axis1_R_DATA))) 
                                      | (0x1003ULL 
                                         == (0x707fULL 
                                             & vlSelf->top__DOT__axis1_R_DATA))) 
                                     | (3ULL == (0x707fULL 
                                                 & vlSelf->top__DOT__axis1_R_DATA)))
                                     ? ((0x67ULL == 
                                         (0x707fULL 
                                          & vlSelf->top__DOT__axis1_R_DATA))
                                         ? 3U : ((0x4003ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__axis1_R_DATA))
                                                  ? 4U
                                                  : 
                                                 ((0x5003ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__axis1_R_DATA))
                                                   ? 5U
                                                   : 
                                                  ((0x6003ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA))
                                                    ? 6U
                                                    : 
                                                   ((0x3003ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 7U
                                                     : 
                                                    ((0x2003ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 8U
                                                      : 
                                                     ((0x1003ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))
                                                       ? 9U
                                                       : 0xaU)))))))
                                     : (((((((((0x13ULL 
                                                == 
                                                (0x707fULL 
                                                 & vlSelf->top__DOT__axis1_R_DATA)) 
                                               | (0x1013ULL 
                                                  == 
                                                  (0xfc00707fULL 
                                                   & vlSelf->top__DOT__axis1_R_DATA))) 
                                              | (0x2013ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->top__DOT__axis1_R_DATA))) 
                                             | (0x5013ULL 
                                                == 
                                                (0xfc00707fULL 
                                                 & vlSelf->top__DOT__axis1_R_DATA))) 
                                            | (0x3013ULL 
                                               == (0x707fULL 
                                                   & vlSelf->top__DOT__axis1_R_DATA))) 
                                           | (0x4013ULL 
                                              == (0x707fULL 
                                                  & vlSelf->top__DOT__axis1_R_DATA))) 
                                          | (0x40005013ULL 
                                             == (0xfc00707fULL 
                                                 & vlSelf->top__DOT__axis1_R_DATA))) 
                                         | (0x7013ULL 
                                            == (0x707fULL 
                                                & vlSelf->top__DOT__axis1_R_DATA)))
                                         ? ((0x13ULL 
                                             == (0x707fULL 
                                                 & vlSelf->top__DOT__axis1_R_DATA))
                                             ? 1U : 
                                            ((0x1013ULL 
                                              == (0xfc00707fULL 
                                                  & vlSelf->top__DOT__axis1_R_DATA))
                                              ? 0xbU
                                              : ((0x2013ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__axis1_R_DATA))
                                                  ? 0xcU
                                                  : 
                                                 ((0x5013ULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & vlSelf->top__DOT__axis1_R_DATA))
                                                   ? 0xdU
                                                   : 
                                                  ((0x3013ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA))
                                                    ? 0xeU
                                                    : 
                                                   ((0x4013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 0xfU
                                                     : 
                                                    ((0x40005013ULL 
                                                      == 
                                                      (0xfc00707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 0x10U
                                                      : 0x11U)))))))
                                         : ((((((((
                                                   (0x1bULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA)) 
                                                   | (0x101bULL 
                                                      == 
                                                      (0xfc00707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))) 
                                                  | (0x501bULL 
                                                     == 
                                                     (0xfc00707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))) 
                                                 | (0x4000501bULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA))) 
                                                | (0x6013ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__axis1_R_DATA))) 
                                               | (0x1073ULL 
                                                  == 
                                                  (0x707fULL 
                                                   & vlSelf->top__DOT__axis1_R_DATA))) 
                                              | (0x2073ULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->top__DOT__axis1_R_DATA))) 
                                             | (0x17ULL 
                                                == 
                                                (0x7fULL 
                                                 & vlSelf->top__DOT__axis1_R_DATA)))
                                             ? ((0x1bULL 
                                                 == 
                                                 (0x707fULL 
                                                  & vlSelf->top__DOT__axis1_R_DATA))
                                                 ? 0x12U
                                                 : 
                                                ((0x101bULL 
                                                  == 
                                                  (0xfc00707fULL 
                                                   & vlSelf->top__DOT__axis1_R_DATA))
                                                  ? 0x13U
                                                  : 
                                                 ((0x501bULL 
                                                   == 
                                                   (0xfc00707fULL 
                                                    & vlSelf->top__DOT__axis1_R_DATA))
                                                   ? 0x14U
                                                   : 
                                                  ((0x4000501bULL 
                                                    == 
                                                    (0xfc00707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA))
                                                    ? 0x15U
                                                    : 
                                                   ((0x6013ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 0x16U
                                                     : 
                                                    ((0x1073ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 0x17U
                                                      : 
                                                     ((0x2073ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))
                                                       ? 0x18U
                                                       : 0x19U)))))))
                                             : ((((
                                                   (((((0x37ULL 
                                                        == 
                                                        (0x7fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA)) 
                                                       | (0x3023ULL 
                                                          == 
                                                          (0x707fULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA))) 
                                                      | (0x2023ULL 
                                                         == 
                                                         (0x707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))) 
                                                     | (0x1023ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))) 
                                                    | (0x23ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))) 
                                                   | (0x6fULL 
                                                      == 
                                                      (0x7fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))) 
                                                  | (0x33ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))) 
                                                 | (0x3033ULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA)))
                                                 ? 
                                                ((0x37ULL 
                                                  == 
                                                  (0x7fULL 
                                                   & vlSelf->top__DOT__axis1_R_DATA))
                                                  ? 0x1aU
                                                  : 
                                                 ((0x3023ULL 
                                                   == 
                                                   (0x707fULL 
                                                    & vlSelf->top__DOT__axis1_R_DATA))
                                                   ? 0x1bU
                                                   : 
                                                  ((0x2023ULL 
                                                    == 
                                                    (0x707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA))
                                                    ? 0x1cU
                                                    : 
                                                   ((0x1023ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 0x1dU
                                                     : 
                                                    ((0x23ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 0x1eU
                                                      : 
                                                     ((0x6fULL 
                                                       == 
                                                       (0x7fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))
                                                       ? 0x1fU
                                                       : 
                                                      ((0x33ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))
                                                        ? 0x20U
                                                        : 0x21U)))))))
                                                 : 
                                                (((((((((0x7033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA)) 
                                                        | (0x6033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__axis1_R_DATA))) 
                                                       | (0x4033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA))) 
                                                      | (0x40000033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))) 
                                                     | (0x2000033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))) 
                                                    | (0x2033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))) 
                                                   | (0x3bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))) 
                                                  | (0x103bULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA)))
                                                  ? 
                                                 ((0x7033ULL 
                                                   == 
                                                   (0xfe00707fULL 
                                                    & vlSelf->top__DOT__axis1_R_DATA))
                                                   ? 0x22U
                                                   : 
                                                  ((0x6033ULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA))
                                                    ? 0x23U
                                                    : 
                                                   ((0x4033ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 0x24U
                                                     : 
                                                    ((0x40000033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 0x25U
                                                      : 
                                                     ((0x2000033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))
                                                       ? 0x26U
                                                       : 
                                                      ((0x2033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))
                                                        ? 0x27U
                                                        : 
                                                       ((0x3bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))
                                                         ? 0x28U
                                                         : 0x29U)))))))
                                                  : 
                                                 (((((((((0x503bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA)) 
                                                         | (0x4000503bULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__axis1_R_DATA))) 
                                                        | (0x200003bULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__axis1_R_DATA))) 
                                                       | (0x4000003bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA))) 
                                                      | (0x200403bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))) 
                                                     | (0x200603bULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))) 
                                                    | (0x200503bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))) 
                                                   | (0x200703bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA)))
                                                   ? 
                                                  ((0x503bULL 
                                                    == 
                                                    (0xfe00707fULL 
                                                     & vlSelf->top__DOT__axis1_R_DATA))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x4000503bULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 0x2bU
                                                     : 
                                                    ((0x200003bULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x4000003bULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))
                                                       ? 0x2dU
                                                       : 
                                                      ((0x200403bULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))
                                                        ? 0x2eU
                                                        : 
                                                       ((0x200603bULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))
                                                         ? 0x2fU
                                                         : 
                                                        ((0x200503bULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA))
                                                          ? 0x30U
                                                          : 0x31U)))))))
                                                   : 
                                                  (((((((((0x2005033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__axis1_R_DATA)) 
                                                          | (0x2007033ULL 
                                                             == 
                                                             (0xfe00707fULL 
                                                              & vlSelf->top__DOT__axis1_R_DATA))) 
                                                         | (0x2006033ULL 
                                                            == 
                                                            (0xfe00707fULL 
                                                             & vlSelf->top__DOT__axis1_R_DATA))) 
                                                        | (0x2004033ULL 
                                                           == 
                                                           (0xfe00707fULL 
                                                            & vlSelf->top__DOT__axis1_R_DATA))) 
                                                       | (0x1033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA))) 
                                                      | (0x5033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))) 
                                                     | (0x63ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))) 
                                                    | (0x1063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA)))
                                                    ? 
                                                   ((0x2005033ULL 
                                                     == 
                                                     (0xfe00707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 0x32U
                                                     : 
                                                    ((0x2007033ULL 
                                                      == 
                                                      (0xfe00707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 0x33U
                                                      : 
                                                     ((0x2006033ULL 
                                                       == 
                                                       (0xfe00707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))
                                                       ? 0x36U
                                                       : 
                                                      ((0x2004033ULL 
                                                        == 
                                                        (0xfe00707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))
                                                        ? 0x37U
                                                        : 
                                                       ((0x1033ULL 
                                                         == 
                                                         (0xfe00707fULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))
                                                         ? 0x34U
                                                         : 
                                                        ((0x5033ULL 
                                                          == 
                                                          (0xfe00707fULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA))
                                                          ? 0x35U
                                                          : 
                                                         ((0x63ULL 
                                                           == 
                                                           (0x707fULL 
                                                            & vlSelf->top__DOT__axis1_R_DATA))
                                                           ? 0x38U
                                                           : 0x39U)))))))
                                                    : 
                                                   ((0x5063ULL 
                                                     == 
                                                     (0x707fULL 
                                                      & vlSelf->top__DOT__axis1_R_DATA))
                                                     ? 0x3aU
                                                     : 
                                                    ((0x4063ULL 
                                                      == 
                                                      (0x707fULL 
                                                       & vlSelf->top__DOT__axis1_R_DATA))
                                                      ? 0x3bU
                                                      : 
                                                     ((0x6063ULL 
                                                       == 
                                                       (0x707fULL 
                                                        & vlSelf->top__DOT__axis1_R_DATA))
                                                       ? 0x3cU
                                                       : 
                                                      ((0x7063ULL 
                                                        == 
                                                        (0x707fULL 
                                                         & vlSelf->top__DOT__axis1_R_DATA))
                                                        ? 0x3dU
                                                        : 
                                                       ((0x30200073ULL 
                                                         == 
                                                         (0xffffffffULL 
                                                          & vlSelf->top__DOT__axis1_R_DATA))
                                                         ? 0x3eU
                                                         : 
                                                        ((0x73ULL 
                                                          == 
                                                          (0xffffffffULL 
                                                           & vlSelf->top__DOT__axis1_R_DATA))
                                                          ? 0x3fU
                                                          : 
                                                         ((0x100073ULL 
                                                           == 
                                                           (0xffffffffULL 
                                                            & vlSelf->top__DOT__axis1_R_DATA))
                                                           ? 0x40U
                                                           : 0U))))))))))))));
        }
    } else {
        vlSelf->top__DOT__op = 0U;
    }
    vlSelf->top__DOT__rd = (0x1fU & (IData)((0x1ffffffULL 
                                             & (vlSelf->top__DOT__axis1_R_DATA 
                                                >> 7U))));
    vlSelf->top__DOT__rs2 = (0x1fU & (IData)((0xfffULL 
                                              & (vlSelf->top__DOT__axis1_R_DATA 
                                                 >> 0x14U))));
    vlSelf->top__DOT__imm = vlSelf->top__DOT__u_IDU__DOT__imm_pre;
    vlSelf->top__DOT__rs1 = (0x1fU & (IData)((0x1ffffULL 
                                              & (vlSelf->top__DOT__axis1_R_DATA 
                                                 >> 0xfU))));
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r 
        = vlSelf->top__DOT__u_EXU__DOT__rd;
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr = vlSelf->top__DOT__u_EXU__DOT__rd;
        vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld = 
            (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
              & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                         >> 1U))) & 1U);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr = 0U;
        vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__IDU_vld) {
            vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr 
                = vlSelf->top__DOT__u_EXU__DOT__rd;
        }
    } else {
        vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr = 0U;
    }
    vlSelf->top__DOT__inst_act = vlSelf->top__DOT__u_IDU__DOT__inst_act_pre;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt 
        = __Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt;
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld = (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_out_valid) 
                                                   | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                                  | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
                                                 | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
                                                | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__ifetch_req) {
            vlSelf->top__DOT__IFU_pc = vlSelf->top__DOT__u_IFU__DOT__ifetch_pc;
        }
    } else {
        vlSelf->top__DOT__IFU_pc = 0x80000000ULL;
    }
    vlSelf->top__DOT__IDU_vld = ((IData)(vlSelf->rst_n) 
                                 & (IData)(vlSelf->top__DOT__u_IFU__DOT__rask));
    vlSelf->pc = vlSelf->top__DOT__IFU_pc;
    if (vlSelf->top__DOT__IDU_vld) {
        if (VL_UNLIKELY((0x40U == vlSelf->top__DOT__op))) {
            VL_WRITEF("ebreak\n");
            Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP(0U);
        } else if ((0U == vlSelf->top__DOT__op)) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP(1U);
        }
    }
    if (vlSelf->top__DOT__IDU_vld) {
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__op;
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__IDU_inst;
        vlSelf->top__DOT__u_EXU__DOT__rd = vlSelf->top__DOT__rd;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__IDU_pc;
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__rs2;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__imm;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__rs1;
        vlSelf->top__DOT__u_EXU__DOT__inst_act = vlSelf->top__DOT__inst_act;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__u_EXU__DOT__op_r;
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__u_EXU__DOT__inst_r;
        vlSelf->top__DOT__u_EXU__DOT__rd = vlSelf->top__DOT__u_EXU__DOT__rd_r;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__u_EXU__DOT__pc_r;
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__u_EXU__DOT__rs2_r;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__u_EXU__DOT__imm_r;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__u_EXU__DOT__rs1_r;
        vlSelf->top__DOT__u_EXU__DOT__inst_act = vlSelf->top__DOT__u_EXU__DOT__inst_act_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs2];
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs1];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_valid 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x94000ULL 
                                                          & vlSelf->top__DOT__u_EXU__DOT__inst_act))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 0x16U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 0x15U)));
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr 
        = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
            ? 0x300U : (0xfffU & ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                     >> 8U)))
                                       ? 0x341U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 0xaU)))
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)
                                                    : 0U))
                                   : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                       ? 0x342U : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 0xeU)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 0x10U)));
    vlSelf->top__DOT__u_EXU__DOT__sys_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                        >> 0xbU)));
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_data = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)
                                                   ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld)
                                                    ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_out_valid)
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[0U])))
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                  >> 0x14U)))
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
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 4U))) ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                     >> 3U)))
                                       ? 0xffU : 0xfU)
            : ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 3U))) ? 3U : 1U));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir 
        = (IData)((0x10020ULL == (0x10020ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)));
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 8U))) ? 0x305U : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                           >> 7U)))
                                                ? 0x341U
                                                : (0xfffU 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__imm))));
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 0x13U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS 
        = (IData)((0ULL != (0x60000ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)));
    vlSelf->top__DOT__u_EXU__DOT__st_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0x1fU)));
    vlSelf->top__DOT__u_EXU__DOT__ld_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0x20U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0xdU)))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__src2 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
                                         : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
            : vlSelf->top__DOT__u_EXU__DOT__src2);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1 
        = ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__inst_act))
            ? vlSelf->top__DOT__u_EXU__DOT__imm : vlSelf->top__DOT__u_EXU__DOT__src2);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt 
        = (0x3fU & ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                   >> 0xcU))) ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__u_EXU__DOT__inst_act))
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)
                                                  : 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
                     : ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__inst_act))
                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)
                         : (IData)(vlSelf->top__DOT__u_EXU__DOT__src2))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1 
        = ((IData)((0ULL != (0x18000000ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)))
            ? 4ULL : ((1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__inst_act))
                       ? vlSelf->top__DOT__u_EXU__DOT__imm
                       : vlSelf->top__DOT__u_EXU__DOT__src2));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0xdU)))
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)))
                                         : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)))
            : vlSelf->top__DOT__u_EXU__DOT__src1);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre = 0U;
    if ((IData)((0ULL != (0x18000200ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)))) {
        vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre = 1U;
    } else if ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 0x1aU)))) {
        vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre 
            = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 5U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 4U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 3U)))
                                               ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  >= vlSelf->top__DOT__u_EXU__DOT__src2)
                                               : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  < vlSelf->top__DOT__u_EXU__DOT__src2))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 3U)))
                                               ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                               : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)))
                : ((~ (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                               >> 4U))) & ((1U & (IData)(
                                                         (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                          >> 3U)))
                                            ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               != vlSelf->top__DOT__u_EXU__DOT__src2)
                                            : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               == vlSelf->top__DOT__u_EXU__DOT__src2))));
    }
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM 
        = (vlSelf->top__DOT__u_EXU__DOT__src1 + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 
        = ((IData)((0ULL != (0x58000000ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)))
            ? vlSelf->top__DOT__u_EXU__DOT__pc : ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                              >> 0x1dU)))
                                                   ? 0ULL
                                                   : vlSelf->top__DOT__u_EXU__DOT__src1));
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM 
        = (vlSelf->top__DOT__u_EXU__DOT__src1 + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__nstate 
        = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
            ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                     ? (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                         & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                    >> 8U))) ? 3U : 2U)
                     : 2U));
    if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen 
            = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 8U))) ? (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req)
                : ((IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                            >> 0xaU)) & (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req)));
    } else if ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen = 1U;
    }
    vlSelf->top__DOT__u_EXU__DOT__csrf_rdata = vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf
        [vlSelf->top__DOT__u_EXU__DOT__csrf_raddr];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U] 
        = (1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
    vlSelf->top__DOT__axis2_W_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
    vlSelf->top__DOT__axis2_AW_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
    vlSelf->top__DOT__axis2_R_READY = ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__axis2_AR_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_result 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)
            ? ((7U == (7U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                     >> 3U)))) ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                : ((6U == (7U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                         >> 3U)))) ? 
                   (vlSelf->top__DOT__u_EXU__DOT__src1 
                    | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                    : ((4U == (7U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                             >> 3U))))
                        ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                           ^ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                        : 0ULL))) : 0ULL);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0xfU)))
                                         ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                             ? ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->top__DOT__u_EXU__DOT__src1), (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 
                                                (- 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                                                  >> 0x1fU)))
                                             : ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                                                 << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 0U))
                                         : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                             ? ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                                                 >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 0U)
                                             : ((0x1fU 
                                                 >= (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__src1) 
                                                 << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                 : 0U)))
            : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U] 
        = (IData)(((0xffffffffULL | ((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
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
                                                                               (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                                >> 0xcU)))))))) 
                                      << 0x20U)) & 
                    ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS)
                      ? (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1)
                      : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1)) 
                   >> 0x20U));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U] 
        = (IData)(((0xffffffffULL | ((QData)((IData)(
                                                     (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(
                                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                               >> 0xcU)))))))) 
                                     << 0x20U)) & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
        = (IData)((((0xffffffffULL | ((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                                >> 0xcU)))))))) 
                                      << 0x20U)) & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0) 
                   >> 0x20U));
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0x1bU))) ? vlSelf->top__DOT__u_EXU__DOT__src1
            : vlSelf->top__DOT__u_EXU__DOT__pc);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum 
        = (vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1 
           + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0x1bU))) ? (0xfffffffffffffffeULL 
                                         & vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum)
            : ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 9U))) ? vlSelf->top__DOT__u_EXU__DOT__csrf_rdata
                : vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum));
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_result 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req)
            ? ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 0xcU))) ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res)))
                : ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                  >> 0xcU))) ? 0ULL
                    : ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                      >> 0xfU))) ? 
                       ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                         ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_EXU__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                         : (vlSelf->top__DOT__u_EXU__DOT__src1 
                            << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                            ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                               >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                            : (vlSelf->top__DOT__u_EXU__DOT__src1 
                               << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))))))
            : 0ULL);
    __Vtemp19[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp19[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp19[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    __Vtemp21[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp21[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp21[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    VL_ADD_W(3, __Vtemp22, __Vtemp19, __Vtemp21);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                              ? (7U & __Vtemp22[2U])
                              : 0U))) << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                      ? 
                                                                     __Vtemp22[1U]
                                                                      : 0U))) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                        ? 
                                                                       __Vtemp22[0U]
                                                                        : 0U))) 
                                                      >> 1U)));
    vlSelf->top__DOT__axis1_AW_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
    vlSelf->top__DOT__axis1_W_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
    vlSelf->top__DOT__axis2_AW_READY = ((IData)(vlSelf->top__DOT__in_channel) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY 
        = ((IData)(vlSelf->top__DOT__in_channel) ? 
           ((IData)(vlSelf->top__DOT__in_channel) & (IData)(vlSelf->top__DOT__axis2_B_READY))
            : (IData)(vlSelf->top__DOT__axis1_B_READY));
    vlSelf->top__DOT__axis1_R_VALID = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
    if (vlSelf->top__DOT__in_channel) {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AW_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_W_VALID));
        vlSelf->top__DOT__axis2_R_VALID = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID) 
                                           & 1U);
        vlSelf->top__DOT__axis2_W_READY = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY) 
                                           & 1U);
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        vlSelf->top__DOT__axis2_R_VALID = 0U;
        vlSelf->top__DOT__axis2_W_READY = 0U;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0xcU))) ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp)))
            : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp);
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
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                                                 : 0ULL)), 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__src2
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
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
                                                                                 : 0U))));
    }
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid 
        = (((IData)(vlSelf->top__DOT__axis2_R_READY) 
            & (IData)(vlSelf->top__DOT__axis2_R_VALID)) 
           | ((IData)(vlSelf->top__DOT__axis2_W_READY) 
              & (IData)(vlSelf->top__DOT__axis2_W_VALID)));
    __Vtemp28[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp28[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp28[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    __Vtemp30[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp30[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp30[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    VL_ADD_W(3, __Vtemp31, __Vtemp28, __Vtemp30);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_result 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0x11U))) ? ((1U & (IData)(
                                                       (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                        >> 0xdU)))
                                          ? ((1U & 
                                              ((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                  ? 
                                                 (7U 
                                                  & __Vtemp31[2U])
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
                                          : ((1U == 
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
                                              : ((2U 
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
    vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid) 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
    vlSelf->top__DOT__u_EXU__DOT__lsu_data_vld = vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid;
    vlSelf->top__DOT__ifetch_req = ((((IData)(vlSelf->top__DOT__u_EXU__DOT__bmu_vld) 
                                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld)) 
                                     | (IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_data_vld)) 
                                    | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
    vlSelf->top__DOT__u_IFU__DOT__ifetch_pc = 0x80000000ULL;
    if (vlSelf->top__DOT__ifetch_req) {
        vlSelf->top__DOT__u_IFU__DOT__ifetch_pc = ((IData)(vlSelf->ifetch_taken)
                                                    ? vlSelf->ifetch_taken_pc
                                                    : 
                                                   (4ULL 
                                                    + vlSelf->top__DOT__IFU_pc));
    }
    vlSelf->top__DOT__u_IFU__DOT__rreq = ((IData)(vlSelf->top__DOT__ifetch_req) 
                                          | (9U == (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt)));
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
        = ((IData)(vlSelf->top__DOT__in_channel) ? 
           ((IData)(vlSelf->top__DOT__in_channel) & (IData)(vlSelf->top__DOT__axis2_AR_VALID))
            : ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
               | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)));
    vlSelf->top__DOT__axis1_R_READY = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                       | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__u_IFU__DOT__rask = ((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                          & (IData)(vlSelf->top__DOT__axis1_R_READY));
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
        = ((IData)(vlSelf->top__DOT__in_channel) ? 
           ((IData)(vlSelf->top__DOT__in_channel) & (IData)(vlSelf->top__DOT__axis2_R_READY))
            : (IData)(vlSelf->top__DOT__axis1_R_READY));
    vlSelf->mainUpdate_valid = ((IData)(vlSelf->top__DOT__itrace_en)
                                 ? (1U & (IData)(vlSelf->top__DOT__u_IFU__DOT__rask))
                                 : 0U);
    if (((((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID) 
           & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID)) 
          & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY)) 
         & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY))) {
        Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                                                                 : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                                                                 : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)), vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA 
            = vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data = ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 5U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                              >> 4U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 3U)))
                                                    ? 0ULL
                                                    : (QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__in_channel)
                                                                        ? 
                                                                       ((IData)(vlSelf->top__DOT__in_channel)
                                                                         ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                         : 0ULL)
                                                                        : 0ULL))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 3U)))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                                 : 0ULL)
                                                                                 : 0ULL)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                                 : 0ULL)
                                                                                 : 0ULL)))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                              >> 4U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 3U)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__in_channel)
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__in_channel)
                                                      ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                      : 0ULL)
                                                     : 0ULL)
                                                    : 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                                 : 0ULL)
                                                                                 : 0ULL) 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__in_channel)
                                                                        ? 
                                                                       ((IData)(vlSelf->top__DOT__in_channel)
                                                                         ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                         : 0ULL)
                                                                        : 0ULL)))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 3U)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                                 : 0ULL)
                                                                                 : 0ULL) 
                                                                                >> 0xfU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                                 : 0ULL)
                                                                                 : 0ULL))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                                 : 0ULL)
                                                                                 : 0ULL) 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? 
                                                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                                                 ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                                                 : 0ULL)
                                                                                 : 0ULL)))))))));
    vlSelf->top__DOT__axis1_R_DATA = ((IData)(vlSelf->top__DOT__in_channel)
                                       ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA);
    vlSelf->top__DOT__u_EXU__DOT__wb_data = ((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld)
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 0xcU)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__alu_wb_data 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_data)))
                                                  : vlSelf->top__DOT__u_EXU__DOT__alu_wb_data)
                                              : ((IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld)
                                                   ? vlSelf->top__DOT__u_EXU__DOT__csr_wb_data
                                                   : 0ULL)));
    if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__rd))) {
        vlSelf->top__DOT__u_EXU__DOT__wb_data = 0ULL;
    }
    vlSelf->inst = (0xffffffffULL & vlSelf->top__DOT__axis1_R_DATA);
    vlSelf->top__DOT__u_IDU__DOT__ras_rd_link = ((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (0x1ffffffULL 
                                                              & (vlSelf->top__DOT__axis1_R_DATA 
                                                                 >> 7U))))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (0x1ffffffULL 
                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                   >> 7U))))));
    vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link = ((1U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (0x1ffffULL 
                                                               & (vlSelf->top__DOT__axis1_R_DATA 
                                                                  >> 0xfU))))) 
                                                  | (5U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (0x1ffffULL 
                                                                 & (vlSelf->top__DOT__axis1_R_DATA 
                                                                    >> 0xfU))))));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3f3ffU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x13U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       << 0xbU) 
                                                      | ((0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                         << 0xaU)));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3fcffU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((3U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       << 9U) 
                                                      | ((0x1bU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                         << 8U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3ff3fU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x73U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       << 7U) 
                                                      | ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                         << 6U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3ffcfU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       << 5U) 
                                                      | ((0x23U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                         << 4U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3fff3U 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       << 3U) 
                                                      | ((0x33U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                         << 2U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3fffcU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x3bU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       << 1U) 
                                                      | (0x63U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__axis1_R_DATA)))));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x1ffffU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | ((((((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->top__DOT__axis1_R_DATA)))) 
                                                         | (3U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->top__DOT__axis1_R_DATA)))) 
                                                        | (0x1bU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__axis1_R_DATA)))) 
                                                       | (0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA)))) 
                                                      << 0x11U));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x2ffffU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA)))) 
                                                      << 0x10U));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x33fffU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       << 0xfU) 
                                                      | ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                         << 0xeU)));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3dfffU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | (((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                       | (0x3bU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__axis1_R_DATA)))) 
                                                      << 0xdU));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3efffU 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                   | ((0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__axis1_R_DATA))) 
                                                      << 0xcU));
    vlSelf->top__DOT__u_IDU__DOT__imm_pre = ((0x20000U 
                                              & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (0xfffULL 
                                                                               & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x14U)))))))
                                              : ((0x10000U 
                                                  & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1fU)))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(
                                                                             (0xfffffULL 
                                                                              & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))) 
                                                                     << 0xcU))))
                                                  : 
                                                 ((0x8000U 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & ((IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U))) 
                                                                          << 5U)) 
                                                                      | (0x1fU 
                                                                         & (IData)(
                                                                                (0x1ffffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 7U))))))))
                                                   : 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & ((IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                (0xfffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x14U))) 
                                                                              << 0xbU)) 
                                                                          | (0x7feU 
                                                                             & ((IData)(
                                                                                (0x7ffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x15U))) 
                                                                                << 1U)))))))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)
                                                     ? 0ULL
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (1ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & ((IData)(
                                                                                (0x1ffffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 7U))) 
                                                                             << 0xbU)) 
                                                                         | ((0x7e0U 
                                                                             & ((IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U))) 
                                                                                << 5U)) 
                                                                            | (0x1eU 
                                                                               & ((IData)(
                                                                                (0xffffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 8U))) 
                                                                                << 1U)))))))
                                                      : 0ULL))))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1e3ffffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((4U 
                                                                       & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                          >> 1U)) 
                                                                      | ((2U 
                                                                          & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                             >> 9U)) 
                                                                         | (1U 
                                                                            & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))))) 
                                                     << 0x1aU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1feffffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                         >> 3U) 
                                                                        & (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link)) 
                                                                       | (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                            >> 0xaU) 
                                                                           & (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link)) 
                                                                          & (~ (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link)))) 
                                                                      | (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                           >> 0xaU) 
                                                                          & (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link)) 
                                                                         & ((0x1fU 
                                                                             & (IData)(
                                                                                (0x1ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xfU)))) 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(
                                                                                (0x1ffffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 7U))))))))) 
                                                     << 0x18U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ff7fffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                        >> 0xaU) 
                                                                       & (~ (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link))) 
                                                                      & (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link)))) 
                                                     << 0x17U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fdffffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                        >> 0xaU) 
                                                                       & (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link)) 
                                                                      & ((0x1fU 
                                                                          & (IData)(
                                                                                (0x1ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xfU)))) 
                                                                         != 
                                                                         (0x1fU 
                                                                          & (IData)(
                                                                                (0x1ffffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 7U)))))))) 
                                                     << 0x19U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7fffffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((2U 
                                                                       & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                          >> 8U)) 
                                                                      | (1U 
                                                                         & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                            >> 4U))))) 
                                                     << 0x1fU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffff7ffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                         >> 7U)))) 
                                                     << 0xbU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffbffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                       >> 7U) 
                                                                      & (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))))) 
                                                     << 0xaU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffdffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                          >> 7U) 
                                                                         & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))))))))) 
                                                     << 9U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffeffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                        >> 7U) 
                                                                       & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))))) 
                                                                      & (0U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (0xfffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x14U)))))))) 
                                                     << 8U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffffbfULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                        >> 7U) 
                                                                       & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))))) 
                                                                      & (1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (0xfffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x14U)))))))) 
                                                     << 6U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffff7fULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                        >> 7U) 
                                                                       & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))))) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (0xfffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x14U)))))))) 
                                                     << 7U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x19fffffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                         >> 5U)))) 
                                                     << 0x1dU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffbfffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                           >> 0xdU) 
                                                                          & (IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U)))) 
                                                                         & (~ (IData)(
                                                                                (0x3ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xeU)))))))) 
                                                     << 0x16U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffdfffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                           >> 0xdU) 
                                                                          & (IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U)))) 
                                                                         & (IData)(
                                                                                (0x3ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xeU))))))) 
                                                     << 0x15U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffefffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                            >> 0xdU) 
                                                                           & (IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U)))) 
                                                                          & (IData)(
                                                                                (0x3ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xeU)))) 
                                                                         & (IData)(
                                                                                (0x7ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xdU))))))) 
                                                     << 0x14U));
    __Vtemp35 = (1U & (~ ((((((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                               >> 9U) & (IData)((0x3ffffULL 
                                                 & (vlSelf->top__DOT__axis1_R_DATA 
                                                    >> 0xeU)))) 
                             | (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                & (3U == (3U & (IData)(
                                                       (0x7ffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0xdU))))))) 
                            | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                >> 0xbU) & (3U == (7U 
                                                   & (IData)(
                                                             (0xfffffULL 
                                                              & (vlSelf->top__DOT__axis1_R_DATA 
                                                                 >> 0xcU))))))) 
                           | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                               >> 2U) & ((3U == (7U 
                                                 & (IData)(
                                                           (0xfffffULL 
                                                            & (vlSelf->top__DOT__axis1_R_DATA 
                                                               >> 0xcU))))) 
                                         | (((IData)(
                                                     (vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (0x3ffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0xeU)))) 
                                            & (IData)(
                                                      (0xfffffULL 
                                                       & (vlSelf->top__DOT__axis1_R_DATA 
                                                          >> 0xcU))))))) 
                          | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                              >> 1U) & (((IData)((vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                  >> 0x15U)) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->top__DOT__axis1_R_DATA 
                                                       >> 0xeU)))) 
                                        & (IData)((0xfffffULL 
                                                   & (vlSelf->top__DOT__axis1_R_DATA 
                                                      >> 0xcU))))))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffdfffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp35)) 
                                                     << 0xdU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffefffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x102U 
                                                                               & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))))) 
                                                     << 0xcU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffeffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                          >> 0xbU) 
                                                                         & ((1U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))) 
                                                                            | (5U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))))) 
                                                                        | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                            >> 8U) 
                                                                           & ((1U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))) 
                                                                              | (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))))) 
                                                                       | (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                            >> 2U) 
                                                                           & ((1U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))) 
                                                                              | (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))))) 
                                                                          & (~ (IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U)))))) 
                                                                      | (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                           >> 1U) 
                                                                          & ((1U 
                                                                              == 
                                                                              (7U 
                                                                               & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))) 
                                                                             | (5U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))))) 
                                                                         & (~ (IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U)))))))) 
                                                     << 0x10U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffff7fffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                                                >> 0x10U)) 
                                                                         & (IData)(
                                                                                (3ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1eU))))))) 
                                                     << 0xfU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffdffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                        >> 0xbU) 
                                                                       & ((2U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))) 
                                                                          | (3U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))))) 
                                                                      | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                          >> 2U) 
                                                                         & ((2U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU))))) 
                                                                            | (3U 
                                                                               == 
                                                                               (7U 
                                                                                & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))))))) 
                                                     << 0x11U));
    __Vtemp37 = (1U & (((((IData)(((0ULL != (0x20000ULL 
                                             & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre)) 
                                   | (0U != (0x468U 
                                             & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)))) 
                          | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                              >> 0xbU) & (0U == (7U 
                                                 & (IData)(
                                                           (0xfffffULL 
                                                            & (vlSelf->top__DOT__axis1_R_DATA 
                                                               >> 0xcU))))))) 
                         | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                             >> 8U) & (0U == (7U & (IData)(
                                                           (0xfffffULL 
                                                            & (vlSelf->top__DOT__axis1_R_DATA 
                                                               >> 0xcU))))))) 
                        | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                            >> 2U) & ((0U == (7U & (IData)(
                                                           (0xfffffULL 
                                                            & (vlSelf->top__DOT__axis1_R_DATA 
                                                               >> 0xcU))))) 
                                      & (~ (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->top__DOT__axis1_R_DATA 
                                                       >> 0x19U))))))) 
                       | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                           >> 1U) & ((0U == (7U & (IData)(
                                                          (0xfffffULL 
                                                           & (vlSelf->top__DOT__axis1_R_DATA 
                                                              >> 0xcU))))) 
                                     & (~ (IData)((0x7fULL 
                                                   & (vlSelf->top__DOT__axis1_R_DATA 
                                                      >> 0x19U))))))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fff7ffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp37)) 
                                                     << 0x13U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffbffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (((IData)(
                                                                                (vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                                                >> 0x13U)) 
                                                                          & (IData)(
                                                                                (3ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1eU)))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))))))) 
                                                     << 0x12U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffbfffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(
                                                                                ((0x800U 
                                                                                == 
                                                                                (0x800U 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x90000ULL 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre)))) 
                                                                         | ((IData)(
                                                                                ((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)) 
                                                                                & (0ULL 
                                                                                == 
                                                                                (0x90000ULL 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre)))) 
                                                                            & (~ (IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U))))))))) 
                                                     << 0xeU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffffc7ULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (7U 
                                                                      & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))) 
                                                     << 3U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffffdULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (~ 
                                                                         (((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                            >> 4U) 
                                                                           | vlSelf->top__DOT__u_IDU__DOT__inst_type_pre) 
                                                                          | (IData)(
                                                                                (vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                                                >> 9U))))))) 
                                                     << 1U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffffeULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))) 
                                                                         | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                             >> 7U) 
                                                                            & (~ (IData)(
                                                                                (0x3ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xeU)))))))))));
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
