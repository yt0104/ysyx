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
    vlSelf->top__DOT__itrace_en = 0U;
    vlSelf->top__DOT__u_EXU__DOT__pc_r = 0x80000000ULL;
    vlSelf->top__DOT__IDU_pc = 0x80000000ULL;
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf);
    vlSelf->top__DOT__IFU_pc = 0x80000000ULL;
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_IDU__DOT__sim_exit_TOP(IData/*31:0*/ state);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp66;
    CData/*31:0*/ __Vtemp71;
    CData/*31:0*/ __Vtemp73;
    // Body
    __Vtemp43[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp43[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp43[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp44, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp45, __Vtemp43, __Vtemp44);
    __Vtemp46[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp46[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp46[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp45[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp45[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp45[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp48[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp48[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp48[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid 
        = ((~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy)) 
           & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
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
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__rs2;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__imm;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__rs1;
        vlSelf->top__DOT__u_EXU__DOT__inst_act = vlSelf->top__DOT__inst_act;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__IDU_pc;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__u_EXU__DOT__op_r;
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__u_EXU__DOT__inst_r;
        vlSelf->top__DOT__u_EXU__DOT__rd = vlSelf->top__DOT__u_EXU__DOT__rd_r;
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__u_EXU__DOT__rs2_r;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__u_EXU__DOT__imm_r;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__u_EXU__DOT__rs1_r;
        vlSelf->top__DOT__u_EXU__DOT__inst_act = vlSelf->top__DOT__u_EXU__DOT__inst_act_r;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__u_EXU__DOT__pc_r;
    }
    vlSelf->pc = vlSelf->top__DOT__IFU_pc;
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_out_valid) 
                                                 | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                                | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_out_vld));
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs2];
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs1];
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr 
        = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
            ? 0x300U : (0xfffU & ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                   ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                     >> 7U)))
                                       ? 0x341U : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 9U)))
                                                    ? (IData)(vlSelf->top__DOT__u_EXU__DOT__imm)
                                                    : 0U))
                                   : ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                       ? 0x342U : 0U))));
    vlSelf->top__DOT__u_EXU__DOT__sys_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                        >> 0xaU)));
    vlSelf->top__DOT__u_EXU__DOT__alu_req = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                             & (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x700000ULL 
                                                         & vlSelf->top__DOT__u_EXU__DOT__inst_act))));
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_data = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_out_vld)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_result
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
                                                                >> 0x13U)))
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
                                                    : 0ULL)));
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 3U))) ? ((1U & (IData)(
                                                    (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                     >> 2U)))
                                       ? 0xffU : 0xfU)
            : ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 2U))) ? 3U : 1U));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir 
        = (IData)((0x1010ULL == (0x1010ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)));
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 7U))) ? 0x305U : ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                           >> 6U)))
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS 
        = (IData)((0ULL != (0x18000ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)));
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
                          >> 0xeU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0x12U)))
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt 
        = (0x3fU & ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                   >> 0xeU))) ? ((1U 
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
                          >> 0xeU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0x12U)))
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
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pre = 0U;
    if ((IData)((0ULL != (0x18000100ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)))) {
        vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pre = 1U;
    } else if ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 0x1aU)))) {
        vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pre 
            = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 4U))) ? ((1U & (IData)(
                                                        (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                         >> 3U)))
                                           ? ((1U & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 2U)))
                                               ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  >= vlSelf->top__DOT__u_EXU__DOT__src2)
                                               : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                  < vlSelf->top__DOT__u_EXU__DOT__src2))
                                           : ((1U & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 2U)))
                                               ? VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)
                                               : VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__u_EXU__DOT__src1, vlSelf->top__DOT__u_EXU__DOT__src2)))
                : ((~ (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                               >> 3U))) & ((1U & (IData)(
                                                         (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                          >> 2U)))
                                            ? (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               != vlSelf->top__DOT__u_EXU__DOT__src2)
                                            : (vlSelf->top__DOT__u_EXU__DOT__src1 
                                               == vlSelf->top__DOT__u_EXU__DOT__src2))));
    }
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM 
        = (vlSelf->top__DOT__u_EXU__DOT__src1 + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 
        = ((IData)((0ULL != (0x58000000ULL & vlSelf->top__DOT__u_EXU__DOT__inst_act)))
            ? vlSelf->top__DOT__u_EXU__DOT__pc : vlSelf->top__DOT__u_EXU__DOT__src1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM 
        = (vlSelf->top__DOT__u_EXU__DOT__src1 + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__nstate 
        = ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
            ? 2U : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                     ? (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                         & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                    >> 7U))) ? 3U : 2U)
                     : 2U));
    if ((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen 
            = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 7U))) ? (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req)
                : ((IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                            >> 9U)) & (IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req)));
    } else if ((3U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))) {
        vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen = 1U;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_valid 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_req) 
           & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                      >> 0x15U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_valid 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_req) 
           & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                      >> 0x14U)));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_valid 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_req) 
           & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                      >> 0x16U)));
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
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0xeU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0xbU)))
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
                                                                               >> 0xeU)))))))) 
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
                                                                                >> 0xeU)))))))) 
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
                                                                               >> 0xeU)))))))) 
                                     << 0x20U)) & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
        = (IData)((((0xffffffffULL | ((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                                >> 0xeU)))))))) 
                                      << 0x20U)) & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0) 
                   >> 0x20U));
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_src1 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0x1bU))) ? vlSelf->top__DOT__u_EXU__DOT__src1
            : vlSelf->top__DOT__u_EXU__DOT__pc);
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_sum 
        = (vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_src1 
           + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pc_pre 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0x1bU))) ? (0xfffffffffffffffeULL 
                                         & vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_sum)
            : ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 8U))) ? vlSelf->top__DOT__u_EXU__DOT__csrf_rdata
                : vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_sum));
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_result 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0xeU))) ? (((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res)))
            : ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                              >> 0xeU))) ? 0ULL : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 0xbU)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                     ? 
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_EXU__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                     : 
                                                    (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                     ? 
                                                    (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                     : 
                                                    (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                     << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))))));
    __Vtemp53[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp53[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp53[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    __Vtemp55[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp55[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp55[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    VL_ADD_W(3, __Vtemp56, __Vtemp53, __Vtemp55);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp 
        = (((QData)((IData)(((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                            >> 0x11U)))
                              ? (7U & __Vtemp56[2U])
                              : 0U))) << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                                >> 0x11U)))
                                                                      ? 
                                                                     __Vtemp56[1U]
                                                                      : 0U))) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                                >> 0x11U)))
                                                                        ? 
                                                                       __Vtemp56[0U]
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
                          >> 0xeU))) ? (((QData)((IData)(
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
    __Vtemp63[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp63[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp63[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    __Vtemp65[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp65[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp65[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    VL_ADD_W(3, __Vtemp66, __Vtemp63, __Vtemp65);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_result 
        = ((1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__inst_act 
                          >> 0xfU))) ? ((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0x12U)))
                                         ? ((1U & (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                                 >> 0x11U)))
                                                      ? 
                                                     (7U 
                                                      & __Vtemp66[2U])
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
                                             ((2U & 
                                               ((IData)(
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
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__ld_req_r));
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
                                                             >> 4U)))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 2U)))
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
                                                               >> 2U)))
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
                                                              >> 3U)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 2U)))
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
                                                               >> 2U)))
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
                                                             >> 0xeU)))
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
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffbffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                         >> 7U)))) 
                                                     << 0xaU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffdffULL 
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
                                                     << 9U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffffeffULL 
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
                                                     << 8U));
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
                                                                      & (0U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (0xfffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x14U)))))))) 
                                                     << 7U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffffdfULL 
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
                                                     << 5U));
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
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(
                                                                                (0xfffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x14U)))))))) 
                                                     << 6U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x19fffffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                         >> 5U)))) 
                                                     << 0x1dU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffbfffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)((IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x102U 
                                                                               & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))))) 
                                                     << 0xeU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffbfffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((((IData)(
                                                                                (0x20000U 
                                                                                == 
                                                                                (0x20280U 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))) 
                                                                           | (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                              >> 0x10U)) 
                                                                          | (vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                             >> 0xeU)) 
                                                                         | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                             >> 0xdU) 
                                                                            & (~ (IData)(
                                                                                (0x7fULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x19U))))))))) 
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
                                                                         & (~ (IData)(
                                                                                (0x3ffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xeU)))))))) 
                                                     << 0x15U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffefffffULL 
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
                                                     << 0x14U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fff7ffffULL 
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
                                                     << 0x13U));
    __Vtemp71 = (1U & (~ ((((((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
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
                                                      >> 0x14U)) 
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
                                                  >> 0x14U)) 
                                         & (IData)(
                                                   (0x3ffffULL 
                                                    & (vlSelf->top__DOT__axis1_R_DATA 
                                                       >> 0xeU)))) 
                                        & (IData)((0xfffffULL 
                                                   & (vlSelf->top__DOT__axis1_R_DATA 
                                                      >> 0xcU))))))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffbffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp71)) 
                                                     << 0x12U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffefffULL 
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
                                                                       | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
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
                                                                                >> 0xcU)))))))) 
                                                                      | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
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
                                                                                >> 0xcU)))))))))) 
                                                     << 0xcU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffff7ffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                                                >> 0xcU)) 
                                                                         & (IData)(
                                                                                (3ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1eU))))))) 
                                                     << 0xbU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffff7fffULL 
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
                                                     << 0xfU));
    __Vtemp73 = (1U & (((((IData)(((0ULL != (0x8000ULL 
                                             & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre)) 
                                   | (0U != (0x448U 
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
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffdffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(__Vtemp73)) 
                                                     << 0x11U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1fffeffffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (((IData)(
                                                                                (vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                                                >> 0x11U)) 
                                                                          & (IData)(
                                                                                (3ULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0x1eU)))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))))))) 
                                                     << 0x10U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffffe3ULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (7U 
                                                                      & (IData)(
                                                                                (0xfffffULL 
                                                                                & (vlSelf->top__DOT__axis1_R_DATA 
                                                                                >> 0xcU)))))) 
                                                     << 2U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x1ffffdfffULL 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x16000U 
                                                                                & vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))) 
                                                                         | ((vlSelf->top__DOT__u_IDU__DOT__inst_type_pre 
                                                                             >> 0x11U) 
                                                                            & (~ (IData)(
                                                                                (vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                                                >> 8U)))))))) 
                                                     << 0xdU));
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
    vlSelf->jmp_type = 0;
    vlSelf->ifetch_taken = VL_RAND_RESET_I(1);
    vlSelf->ifetch_taken_pc = VL_RAND_RESET_Q(64);
    vlSelf->mainUpdate_valid = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_Q(64);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ifetch_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__op = 0;
    vlSelf->top__DOT__inst_act = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__inst_type = VL_RAND_RESET_I(18);
    vlSelf->top__DOT__axis1_AW_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_W_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_B_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_R_DATA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__axis2_AW_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AW_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_W_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_W_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_B_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AR_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__in_channel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__itrace_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IFU__DOT__ifetch_pc = VL_RAND_RESET_Q(64);
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
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = VL_RAND_RESET_I(18);
    vlSelf->top__DOT__u_IDU__DOT__ras_rd_link = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IDU__DOT__imm_pre = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs1_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs2_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op_r = 0;
    vlSelf->top__DOT__u_EXU__DOT__inst_act_r = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__u_EXU__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op = 0;
    vlSelf->top__DOT__u_EXU__DOT__inst_act = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__u_EXU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__alu_wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__alu_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__bmu_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__lsu_data_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__ld_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__st_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__sys_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__csr_data_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__csr_wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__csrf_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__csrf_raddr = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_out_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplicand_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplier_r = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(129, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pre = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__ifetch_taken_pc_pre = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_BMU__DOT__add_sum = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__ld_req_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__st_req_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__nstate = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[__Vi0] = VL_RAND_RESET_Q(64);
    }
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
