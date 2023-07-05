// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

void Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP(IData/*31:0*/ state);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    CData/*1:0*/ __Vdlyvdim0__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    IData/*31:0*/ __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i;
    IData/*31:0*/ __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i;
    VlWide<5>/*159:0*/ __Vtemp694;
    VlWide<5>/*159:0*/ __Vtemp695;
    VlWide<5>/*159:0*/ __Vtemp698;
    VlWide<5>/*159:0*/ __Vtemp699;
    VlWide<5>/*159:0*/ __Vtemp700;
    VlWide<3>/*95:0*/ __Vtemp703;
    VlWide<3>/*95:0*/ __Vtemp704;
    VlWide<3>/*95:0*/ __Vtemp705;
    VlWide<3>/*95:0*/ __Vtemp706;
    VlWide<3>/*95:0*/ __Vtemp707;
    VlWide<3>/*95:0*/ __Vtemp708;
    VlWide<3>/*95:0*/ __Vtemp713;
    VlWide<3>/*95:0*/ __Vtemp715;
    VlWide<3>/*95:0*/ __Vtemp716;
    CData/*31:0*/ __Vtemp720;
    CData/*31:0*/ __Vtemp722;
    VlWide<9>/*263:0*/ __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout;
    VlWide<9>/*263:0*/ __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    // Body
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i = 0U;
    while (VL_GTES_III(1,32,32, 0x83U, __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i)) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound30 
            = (1U & (IData)((((0x83U >= (0xffU & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i))
                               ? vlSelf->__Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__wallace_tree_34b_to_2b_1_bit_outputs
                              [(0xffU & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i)]
                               : 0ULL) >> 0x1fU)));
        if (VL_LIKELY((0x107U >= ((IData)(0x84U) + 
                                  (0xffU & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i))))) {
            __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[(
                                                                                ((IData)(0x84U) 
                                                                                + 
                                                                                (0xffU 
                                                                                & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i)) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x84U) 
                                                 + 
                                                 (0xffU 
                                                  & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i))))) 
                    & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[
                    (((IData)(0x84U) + (0xffU & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i)) 
                     >> 5U)]) | ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT____Vlvbound30) 
                                 << (0x1fU & ((IData)(0x84U) 
                                              + (0xffU 
                                                 & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i)))));
        }
        __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i 
            = ((IData)(1U) + __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk21__DOT__i);
    }
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i = 0U;
    while (VL_GTES_III(1,32,32, 0x83U, __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i)) {
        __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[(7U 
                                                                                & (__Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i))) 
                & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[
                (7U & (__Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i 
                       >> 5U))]) | (((0U != __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i) 
                                     & (IData)((((0x83U 
                                                  >= 
                                                  (0xffU 
                                                   & (__Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->__Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__wallace_tree_34b_to_2b_1_bit_outputs
                                                 [(0xffU 
                                                   & (__Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i 
                                                      - (IData)(1U)))]
                                                  : 0ULL) 
                                                >> 0x20U))) 
                                    << (0x1fU & __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i)));
        __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i 
            = ((IData)(1U) + __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__unnamedblk22__DOT__i);
    }
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[0U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[0U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[1U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[1U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[2U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[2U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[3U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[3U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[4U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[4U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[5U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[5U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[6U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[6U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[7U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[7U];
    __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[8U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__f_output[8U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[0U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[0U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[1U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[1U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[2U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[2U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[3U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[3U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[4U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[4U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[5U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[5U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[6U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[6U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[7U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[7U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[8U] 
        = __Vfunc_top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__wallace_tree_34b_to_2b_132_bit_f__2__Vfuncout[8U];
    if (vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 
            = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                ? 0xa00001800ULL : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                     ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 8U)))
                                         ? vlSelf->top__DOT__IDU_pc
                                         : ((1U & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0xaU)))
                                             ? ((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U))))
                                                 ? vlSelf->top__DOT__u_EXU__DOT__src1
                                                 : 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 3U))))
                                                  ? 
                                                 (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  | vlSelf->top__DOT__u_EXU__DOT__csrf_rdata)
                                                  : 0ULL))
                                             : 0ULL))
                                     : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 0xbULL : 0ULL)));
        vlSelf->__Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0 
            = ((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                ? 0U : ((0x300U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                         ? 1U : ((0x341U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                  ? 2U : ((0x305U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                           ? 3U : 0U))));
    }
    if ((((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld) 
          | (IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)) 
         | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld))) {
        __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 
            = vlSelf->top__DOT__u_EXU__DOT__wb_data;
        vlSelf->__Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0 
            = vlSelf->top__DOT__u_EXU__DOT__wb_addr;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req) {
            vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
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
            vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count = 0U;
            vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy = 1U;
        } else if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy) {
            vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                = ((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                    << 1U) | (QData)((IData)((1U & 
                                              (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U])))));
            vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count)));
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                = (((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U])));
            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign 
                = (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U]);
            if ((0x3fU == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count))) {
                vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count = 0U;
        vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign = 0U;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r = 0ULL;
        vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q = 0ULL;
    }
    if (vlSelf->top__DOT__u_EXU__DOT__ld_req) {
        vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d 
            = (7U & (IData)((vlSelf->top__DOT__inst_act 
                             >> 3U)));
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
    if (vlSelf->top__DOT__IDU_vld) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d 
            = (1U & (IData)((vlSelf->top__DOT__inst_act 
                             >> 0x14U)));
    }
    if (vlSelf->top__DOT__IDU_vld) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d 
            = (1U & (IData)((vlSelf->top__DOT__inst_act 
                             >> 0xcU)));
    }
    vlSelf->top__DOT__u_EXU__DOT__bmu_vld = ((IData)(vlSelf->rst_n) 
                                             & ((IData)(vlSelf->top__DOT__IDU_vld) 
                                                & (IData)(
                                                          (0ULL 
                                                           != 
                                                           (0x1c000200ULL 
                                                            & vlSelf->top__DOT__inst_act)))));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__inst_act 
                                                         >> 0x16U)));
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY 
        = vlSelf->__Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID 
        = vlSelf->__Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID 
        = vlSelf->__Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID;
    vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY 
        = vlSelf->__Vdly__top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY;
    if (vlSelf->__Vdlyvset__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0) {
        vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[__Vdlyvdim0__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0] 
            = __Vdlyvval__top__DOT__u_EXU__DOT__u_csrf__DOT__csrf__v0;
    }
    if (vlSelf->__Vdlyvset__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0) {
        vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[__Vdlyvdim0__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__u_EXU__DOT__u_gpr__DOT__rf__v0;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count 
        = vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
        = vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy 
        = vlSelf->__Vdly__top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy;
    vlSelf->top__DOT__rd = (0x1fU & (IData)((0x1ffffffULL 
                                             & (vlSelf->top__DOT__axis1_R_DATA 
                                                >> 7U))));
    __Vtemp694[0U] = ((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[5U] 
                       << 0x1cU) | (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[4U] 
                                    >> 4U));
    __Vtemp694[1U] = ((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[6U] 
                       << 0x1cU) | (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[5U] 
                                    >> 4U));
    __Vtemp694[2U] = ((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[7U] 
                       << 0x1cU) | (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[6U] 
                                    >> 4U));
    __Vtemp694[3U] = ((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[8U] 
                       << 0x1cU) | (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[7U] 
                                    >> 4U));
    __Vtemp694[4U] = (0xfU & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[8U] 
                              >> 4U));
    VL_EXTEND_WW(133,132, __Vtemp695, __Vtemp694);
    __Vtemp698[0U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[0U];
    __Vtemp698[1U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[1U];
    __Vtemp698[2U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[2U];
    __Vtemp698[3U] = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[3U];
    __Vtemp698[4U] = (0xfU & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_stage1_res[4U]);
    VL_EXTEND_WW(133,132, __Vtemp699, __Vtemp698);
    VL_ADD_W(5, __Vtemp700, __Vtemp695, __Vtemp699);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U] 
        = __Vtemp700[0U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[1U] 
        = __Vtemp700[1U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[2U] 
        = __Vtemp700[2U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[3U] 
        = __Vtemp700[3U];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[4U] 
        = (0x1fU & __Vtemp700[4U]);
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state 
            = vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__nstate;
        vlSelf->top__DOT__IDU_pc = vlSelf->top__DOT__IFU_pc;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state = 0U;
        vlSelf->top__DOT__IDU_pc = 0x80000000ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__rs2];
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld = ((IData)(vlSelf->rst_n) 
                                                & ((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 1U))));
    __Vtemp703[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                       << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                               >> 0x3fU))));
    __Vtemp703[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                       >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp703[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                               >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp704, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp705, __Vtemp703, __Vtemp704);
    __Vtemp706[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                       << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                               >> 0x3fU))));
    __Vtemp706[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                       >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp706[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                               >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp707, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp708, __Vtemp706, __Vtemp707);
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp705[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp705[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp705[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp708[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp708[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp708[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid 
        = ((~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy)) 
           & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
    vlSelf->top__DOT__IDU_vld = ((IData)(vlSelf->rst_n) 
                                 & (IData)(vlSelf->top__DOT__u_IFU__DOT__rask));
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM 
        = (vlSelf->top__DOT__u_EXU__DOT__src1 + vlSelf->top__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM 
        = (vlSelf->top__DOT__u_EXU__DOT__src1 + vlSelf->top__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld = (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
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
    vlSelf->top__DOT__inst_act = vlSelf->top__DOT__u_IDU__DOT__inst_act_pre;
    if (vlSelf->top__DOT__IDU_vld) {
        if (VL_UNLIKELY((0x40U == vlSelf->top__DOT__op))) {
            VL_WRITEF("ebreak\n");
            Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP(0U);
        } else if ((0U == vlSelf->top__DOT__op)) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP(1U);
        }
    }
    vlSelf->pc = vlSelf->top__DOT__IFU_pc;
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__inst_act 
                                                         >> 0x10U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__inst_act 
                                                         >> 0xeU)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__inst_act 
                                                         >> 0x15U)));
    if ((1U & (IData)((vlSelf->top__DOT__inst_act >> 0xcU)))) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend 
            = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 0xdU))) ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)));
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor 
            = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                              >> 0xdU))) ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__src2 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)));
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend 
            = vlSelf->top__DOT__u_EXU__DOT__src1;
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor 
            = vlSelf->top__DOT__u_EXU__DOT__src2;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1 
        = ((1U & (IData)(vlSelf->top__DOT__inst_act))
            ? vlSelf->top__DOT__imm : vlSelf->top__DOT__u_EXU__DOT__src2);
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
                                               ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  >= vlSelf->top__DOT__u_EXU__DOT__src2)
                                               : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  < vlSelf->top__DOT__u_EXU__DOT__src2))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U)))
                                               ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                               : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)))
                : ((~ (IData)((vlSelf->top__DOT__inst_act 
                               >> 4U))) & ((1U & (IData)(
                                                         (vlSelf->top__DOT__inst_act 
                                                          >> 3U)))
                                            ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               != vlSelf->top__DOT__u_EXU__DOT__src2)
                                            : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               == vlSelf->top__DOT__u_EXU__DOT__src2))));
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt 
        = (0x3fU & ((1U & (IData)((vlSelf->top__DOT__inst_act 
                                   >> 0xcU))) ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__inst_act))
                                                  ? (IData)(vlSelf->top__DOT__imm)
                                                  : 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
                     : ((1U & (IData)(vlSelf->top__DOT__inst_act))
                         ? (IData)(vlSelf->top__DOT__imm)
                         : (IData)(vlSelf->top__DOT__u_EXU__DOT__src2))));
    vlSelf->top__DOT__u_EXU__DOT__sys_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__inst_act 
                                                        >> 0xbU)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req 
        = ((IData)(vlSelf->top__DOT__IDU_vld) & (IData)(
                                                        (vlSelf->top__DOT__inst_act 
                                                         >> 0x13U)));
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 
        = ((IData)((0ULL != (0x58000000ULL & vlSelf->top__DOT__inst_act)))
            ? vlSelf->top__DOT__IDU_pc : ((1U & (IData)(
                                                        (vlSelf->top__DOT__inst_act 
                                                         >> 0x1dU)))
                                           ? 0ULL : vlSelf->top__DOT__u_EXU__DOT__src1));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1 
        = ((IData)((0ULL != (0x18000000ULL & vlSelf->top__DOT__inst_act)))
            ? 4ULL : ((1U & (IData)(vlSelf->top__DOT__inst_act))
                       ? vlSelf->top__DOT__imm : vlSelf->top__DOT__u_EXU__DOT__src2));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS 
        = (IData)((0ULL != (0x60000ULL & vlSelf->top__DOT__inst_act)));
    vlSelf->top__DOT__u_EXU__DOT__st_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0x1fU)));
    vlSelf->top__DOT__u_EXU__DOT__ld_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                            & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0x20U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0xcU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
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
    vlSelf->top__DOT__u_EXU__DOT__csrf_rdata = vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf
        [vlSelf->top__DOT__u_EXU__DOT__csrf_raddr];
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U] 
        = (1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
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
    vlSelf->top__DOT__axis2_W_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
    vlSelf->top__DOT__axis2_AW_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
    vlSelf->top__DOT__axis2_R_READY = ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__axis2_AR_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1 
        = ((1U & (IData)((vlSelf->top__DOT__inst_act 
                          >> 0x1bU))) ? vlSelf->top__DOT__u_EXU__DOT__src1
            : vlSelf->top__DOT__IDU_pc);
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
    __Vtemp713[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                       << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp713[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp713[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                             >> 0x1eU)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                    >> 0x20U)) 
                                           >> 0x1fU));
    __Vtemp715[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                       << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp715[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                             >> 0x20U)) 
                                    << 1U));
    __Vtemp715[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                             >> 0x1eU)) | ((IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                    >> 0x20U)) 
                                           >> 0x1fU));
    VL_ADD_W(3, __Vtemp716, __Vtemp713, __Vtemp715);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                              ? (7U & __Vtemp716[2U])
                              : 0U))) << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                      ? 
                                                                     __Vtemp716[1U]
                                                                      : 0U))) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                        ? 
                                                                       __Vtemp716[0U]
                                                                        : 0U))) 
                                                      >> 1U)));
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
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
    vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid) 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
    vlSelf->top__DOT__ifetch_req = ((((IData)(vlSelf->top__DOT__u_EXU__DOT__bmu_vld) 
                                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld)) 
                                     | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid)) 
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
                                                                                 : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)), vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__28__rdata);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA 
            = vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__28__rdata;
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = 0ULL;
    }
    vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data = ((4U 
                                                  & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
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
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
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
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
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
                                                    & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
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
    if (vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld) {
        vlSelf->top__DOT__u_EXU__DOT__wb_data = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
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
                                                                                (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U] 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U])))
                                                      : 
                                                     (((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_mult__DOT__mult_data_out_ext[0U]))))
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
        vlSelf->top__DOT__u_EXU__DOT__wb_addr = vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr;
    } else if (vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld) {
        vlSelf->top__DOT__u_EXU__DOT__wb_data = vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data;
        vlSelf->top__DOT__u_EXU__DOT__wb_addr = vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r;
    } else if (vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld) {
        vlSelf->top__DOT__u_EXU__DOT__wb_data = vlSelf->top__DOT__u_EXU__DOT__csr_wb_data;
        vlSelf->top__DOT__u_EXU__DOT__wb_addr = vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__wb_data = 0ULL;
        vlSelf->top__DOT__u_EXU__DOT__wb_addr = 0U;
    }
    if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__wb_addr))) {
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
    __Vtemp720 = (1U & (~ ((((((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                >> 9U) & (IData)((0x3ffffULL 
                                                  & (vlSelf->top__DOT__axis1_R_DATA 
                                                     >> 0xeU)))) 
                              | (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                 & (3U == (3U & (IData)(
                                                        (0x7ffffULL 
                                                         & (vlSelf->top__DOT__axis1_R_DATA 
                                                            >> 0xdU))))))) 
                             | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                 >> 0xbU) & (3U == 
                                             (7U & (IData)(
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
                                         & (IData)(
                                                   (0xfffffULL 
                                                    & (vlSelf->top__DOT__axis1_R_DATA 
                                                       >> 0xcU))))))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffdfffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp720)) 
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
    __Vtemp722 = (1U & (((((IData)(((0ULL != (0x20000ULL 
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
                                      & (~ (IData)(
                                                   (0x7fULL 
                                                    & (vlSelf->top__DOT__axis1_R_DATA 
                                                       >> 0x19U))))))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fff7ffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp722)) 
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

void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtop___024root___sequent__TOP__3(vlSelf);
        Vtop___024root___sequent__TOP__4(vlSelf);
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
