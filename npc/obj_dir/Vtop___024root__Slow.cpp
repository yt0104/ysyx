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
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus = 0xa00001800ULL;
    Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__u_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf);
    vlSelf->top__DOT__IFU_pc = 0x80000000ULL;
    vlSelf->ifetch_pc = 0x80000000ULL;
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__sim_exit_TOP(IData/*31:0*/ state);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    // Body
    __Vtemp23[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp23[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp23[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp24, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp25, __Vtemp23, __Vtemp24);
    __Vtemp26[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp26[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp26[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
    if (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp25[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp25[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp25[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp28[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp28[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp28[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__div_out_valid = (
                                                   (~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy)) 
                                                   & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__busy_r));
    vlSelf->top__DOT__u_EXU__DOT__quotient = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__divisor_sign) 
                                               ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign))
                                               ? (1ULL 
                                                  + 
                                                  (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q))
                                               : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_q);
    vlSelf->top__DOT__u_IFU__DOT__rreq = ((IData)(vlSelf->top__DOT__ifetch_req) 
                                          | (9U == (IData)(vlSelf->top__DOT__u_IFU__DOT__pre_cnt)));
    if (vlSelf->top__DOT__IDU_vld) {
        vlSelf->top__DOT__u_EXU__DOT__rd = vlSelf->top__DOT__rd;
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__IDU_inst;
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__op;
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__rs2;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__imm;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__rs1;
        vlSelf->top__DOT__u_EXU__DOT__inst_act = vlSelf->top__DOT__inst_act;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__IDU_pc;
    } else {
        vlSelf->top__DOT__u_EXU__DOT__rd = vlSelf->top__DOT__u_EXU__DOT__rd_r;
        vlSelf->top__DOT__u_EXU__DOT__inst = vlSelf->top__DOT__u_EXU__DOT__inst_r;
        vlSelf->top__DOT__u_EXU__DOT__op = vlSelf->top__DOT__u_EXU__DOT__op_r;
        vlSelf->top__DOT__u_EXU__DOT__rs2 = vlSelf->top__DOT__u_EXU__DOT__rs2_r;
        vlSelf->top__DOT__u_EXU__DOT__imm = vlSelf->top__DOT__u_EXU__DOT__imm_r;
        vlSelf->top__DOT__u_EXU__DOT__rs1 = vlSelf->top__DOT__u_EXU__DOT__rs1_r;
        vlSelf->top__DOT__u_EXU__DOT__inst_act = vlSelf->top__DOT__u_EXU__DOT__inst_act_r;
        vlSelf->top__DOT__u_EXU__DOT__pc = vlSelf->top__DOT__u_EXU__DOT__pc_r;
    }
    vlSelf->pc = vlSelf->top__DOT__IFU_pc;
    vlSelf->top__DOT__u_EXU__DOT__remainder = ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__dividend_sign)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2))
                                                : vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__reg_r2);
    vlSelf->top__DOT__axis1_AR_VALID = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                        | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__axis1_R_READY = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                       | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    if (vlSelf->top__DOT__IDU_vld) {
        if ((0x40U == vlSelf->top__DOT__u_EXU__DOT__op)) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__sim_exit_TOP(0U);
        } else if ((0U == vlSelf->top__DOT__u_EXU__DOT__op)) {
            Vtop___024root____Vdpiimwrap_top__DOT__u_EXU__DOT__sim_exit_TOP(1U);
        }
    }
    vlSelf->top__DOT__u_EXU__DOT__instCSR = ((0x3eU 
                                              == vlSelf->top__DOT__u_EXU__DOT__op)
                                              ? 2U : 
                                             ((0x3fU 
                                               == vlSelf->top__DOT__u_EXU__DOT__op)
                                               ? 1U
                                               : 0U));
    vlSelf->top__DOT__u_EXU__DOT__src2 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs2];
    vlSelf->top__DOT__u_EXU__DOT__src1 = vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf
        [vlSelf->top__DOT__u_EXU__DOT__rs1];
    vlSelf->top__DOT__u_EXU__DOT__mul_valid = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                               & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                  >> 7U));
    vlSelf->top__DOT__u_EXU__DOT__div_valid = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                               & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                  >> 6U));
    vlSelf->top__DOT__u_EXU__DOT__wmaskM = ((2U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                             ? ((1U 
                                                 & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                                 ? 0xffU
                                                 : 0xfU)
                                             : ((1U 
                                                 & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                                                 ? 3U
                                                 : 1U));
    vlSelf->top__DOT__u_EXU__DOT__wenM = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                          & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                             >> 0x13U));
    vlSelf->top__DOT__u_EXU__DOT__renM = ((IData)(vlSelf->top__DOT__IDU_vld) 
                                          & (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                             >> 0x14U));
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
    if ((8U & vlSelf->top__DOT__u_EXU__DOT__inst_act)) {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
            = ((0x10U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__src2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src2)));
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
            = ((0x10U & vlSelf->top__DOT__u_EXU__DOT__inst_act)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_EXU__DOT__src1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)))
                : (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__src1)));
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_divisor 
            = vlSelf->top__DOT__u_EXU__DOT__src2;
        vlSelf->top__DOT__u_EXU__DOT__u_div__DOT__op_dividend 
            = vlSelf->top__DOT__u_EXU__DOT__src1;
    }
    vlSelf->top__DOT__u_EXU__DOT__waddrM = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                            + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__u_EXU__DOT__raddrM = (vlSelf->top__DOT__u_EXU__DOT__src1 
                                            + vlSelf->top__DOT__u_EXU__DOT__imm);
    vlSelf->top__DOT__axis2_W_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
    vlSelf->top__DOT__axis2_AW_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__wenM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
    vlSelf->top__DOT__axis2_R_READY = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
    vlSelf->top__DOT__axis2_AR_VALID = ((IData)(vlSelf->top__DOT__u_EXU__DOT__renM) 
                                        | (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
    vlSelf->top__DOT__in_channel = ((IData)(vlSelf->top__DOT__axis2_AW_VALID) 
                                    | (IData)(vlSelf->top__DOT__axis2_AR_VALID));
    vlSelf->top__DOT__axis1_AR_READY = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                        & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
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
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_AW_VALID));
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = ((IData)(vlSelf->top__DOT__in_channel) 
               & (IData)(vlSelf->top__DOT__axis2_W_VALID));
        vlSelf->top__DOT__axis2_W_READY = ((IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY) 
                                           & 1U);
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
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID 
            = vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg;
        vlSelf->top__DOT__axis2_W_READY = 0U;
        vlSelf->top__DOT__axis2_R_VALID = 0U;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID 
            = vlSelf->top__DOT__axis1_AR_VALID;
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY 
            = vlSelf->top__DOT__axis1_R_READY;
    }
    vlSelf->top__DOT__axis1_R_VALID = ((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                       & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
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
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__waddrM
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
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
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__src2
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
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
                                                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__wmaskM)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                                                 : 0U))
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                                                 ? (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                                                 : 0U))));
    }
    vlSelf->top__DOT__u_EXU__DOT__dataM_valid = (((IData)(vlSelf->top__DOT__axis2_R_READY) 
                                                  & (IData)(vlSelf->top__DOT__axis2_R_VALID)) 
                                                 | ((IData)(vlSelf->top__DOT__axis2_W_READY) 
                                                    & (IData)(vlSelf->top__DOT__axis2_W_VALID)));
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
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__raddrM
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))
                                                                                 : 0ULL)
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                                                                 ? vlSelf->ifetch_pc
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg)
                                                                                 ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                                                                 : 0ULL))), vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata);
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA 
            = vlSelf->__Vtask_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read__4__rdata;
    } else {
        vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA = 0ULL;
    }
    vlSelf->top__DOT__u_IFU__DOT__rask = ((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                          & (IData)(vlSelf->top__DOT__axis1_R_READY));
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
                                                   | (0x1bU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op))
                                                   ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                   : 
                                                  (((((((((0x1cU 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op) 
                                                          | (0x1dU 
                                                             == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                         | (0x1eU 
                                                            == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                        | (0x26U 
                                                           == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                       | (0x2cU 
                                                          == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                      | (0x2eU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                     | (0x2fU 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)) 
                                                    | (0x30U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op))
                                                    ? 
                                                   ((0x1cU 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                     : 
                                                    ((0x1dU 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                      : 
                                                     ((0x1eU 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? (IData)(vlSelf->top__DOT__u_EXU__DOT__dataM_valid)
                                                       : 
                                                      ((0x26U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (IData)(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid)
                                                        : 
                                                       ((0x2cU 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__mul_out_valid)
                                                         : (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid))))))
                                                    : 
                                                   ((0x31U 
                                                     == vlSelf->top__DOT__u_EXU__DOT__op)
                                                     ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                     : 
                                                    ((0x32U 
                                                      == vlSelf->top__DOT__u_EXU__DOT__op)
                                                      ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                      : 
                                                     ((0x33U 
                                                       == vlSelf->top__DOT__u_EXU__DOT__op)
                                                       ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                       : 
                                                      ((0x36U 
                                                        == vlSelf->top__DOT__u_EXU__DOT__op)
                                                        ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                        : 
                                                       ((0x37U 
                                                         == vlSelf->top__DOT__u_EXU__DOT__op)
                                                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__div_out_valid)
                                                         : 
                                                        ((0U 
                                                          != vlSelf->top__DOT__u_EXU__DOT__op) 
                                                         & (IData)(vlSelf->top__DOT__IDU_vld))))))))));
    vlSelf->top__DOT__u_EXU__DOT__rdataM = (((IData)(vlSelf->top__DOT__axis2_R_VALID) 
                                             & (IData)(vlSelf->top__DOT__axis2_R_READY))
                                             ? ((IData)(vlSelf->top__DOT__in_channel)
                                                 ? 
                                                ((IData)(vlSelf->top__DOT__in_channel)
                                                  ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                                  : 0ULL)
                                                 : 0ULL)
                                             : 0ULL);
    vlSelf->mainUpdate_valid = ((IData)(vlSelf->top__DOT__itrace_en)
                                 ? (1U & (IData)(vlSelf->top__DOT__u_IFU__DOT__rask))
                                 : 0U);
    vlSelf->top__DOT__IFU_inst = ((IData)(vlSelf->top__DOT__u_IFU__DOT__rask)
                                   ? (((IData)(vlSelf->top__DOT__axis1_R_VALID) 
                                       & (IData)(vlSelf->top__DOT__axis1_R_READY))
                                       ? ((IData)(vlSelf->top__DOT__in_channel)
                                           ? 0ULL : 
                                          (0xffffffffULL 
                                           & vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA))
                                       : 0ULL) : 0ULL);
    vlSelf->inst = vlSelf->top__DOT__IFU_inst;
    vlSelf->top__DOT__u_IDU__DOT__ras_rd_flag = ((1U 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__IFU_inst 
                                                              >> 7U)))) 
                                                 | (5U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__IFU_inst 
                                                                >> 7U)))));
    vlSelf->top__DOT__u_IDU__DOT__ras_rs1_flag = ((1U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__IFU_inst 
                                                               >> 0xfU)))) 
                                                  | (5U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__IFU_inst 
                                                                 >> 0xfU)))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x3fffffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                     << 0x16U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x67ffffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (((3U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                      << 0x14U) 
                                                     | ((0x23U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                        << 0x13U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x79ffffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (((0x1bU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                      << 0x12U) 
                                                     | ((0x73U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                        << 0x11U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7e7fffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                      << 0x10U) 
                                                     | ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                        << 0xfU)));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7fcfffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                      << 0xdU) 
                                                     | ((0x3bU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                        << 0xcU)));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7ff7ffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                     << 0xbU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7fbfffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                     << 0xeU));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x5fffffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                     << 0x15U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7ffdffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (((0x7fffe00U 
                                                       & ((vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                           >> 5U) 
                                                          & ((IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_flag) 
                                                             << 9U))) 
                                                      | (0xffe00U 
                                                         & (((vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                              >> 0xcU) 
                                                             & ((IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_flag) 
                                                                << 9U)) 
                                                            & ((~ (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_flag)) 
                                                               << 9U)))) 
                                                     | (0xffe00U 
                                                        & (((vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                             >> 0xcU) 
                                                            & ((IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_flag) 
                                                               << 9U)) 
                                                           & (((0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__IFU_inst 
                                                                           >> 0xfU))) 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__IFU_inst 
                                                                           >> 7U)))) 
                                                              << 9U)))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7ffeffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (0x7ff00U 
                                                     & (((vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                          >> 0xdU) 
                                                         & ((~ (IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_flag)) 
                                                            << 8U)) 
                                                        & ((IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_flag) 
                                                           << 8U))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7ffbffU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (0x1ffc00U 
                                                     & (((vlSelf->top__DOT__u_IDU__DOT__inst_act_pre 
                                                          >> 0xbU) 
                                                         & ((IData)(vlSelf->top__DOT__u_IDU__DOT__ras_rd_flag) 
                                                            << 0xaU)) 
                                                        & (((0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__IFU_inst 
                                                                        >> 0xfU))) 
                                                            != 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__IFU_inst 
                                                                        >> 7U)))) 
                                                           << 0xaU))));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x1fU 
                                                    & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)) 
                                                   | ((((((0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                          | (0x67U 
                                                             == 
                                                             (0x7fU 
                                                              & (IData)(vlSelf->top__DOT__IFU_inst)))) 
                                                         | (3U 
                                                            == 
                                                            (0x7fU 
                                                             & (IData)(vlSelf->top__DOT__IFU_inst)))) 
                                                        | (0x1bU 
                                                           == 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->top__DOT__IFU_inst)))) 
                                                       | (0x73U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__IFU_inst)))) 
                                                      << 5U));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x2fU 
                                                    & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)) 
                                                   | (((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__IFU_inst)))) 
                                                      << 4U));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x33U 
                                                    & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)) 
                                                   | (((0x23U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                       << 3U) 
                                                      | ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                         << 2U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3dU 
                                                    & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)) 
                                                   | (((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                       | (0x3bU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->top__DOT__IFU_inst)))) 
                                                      << 1U));
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = (
                                                   (0x3eU 
                                                    & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre)) 
                                                   | (0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->top__DOT__IFU_inst))));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7ffff7U 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (((0x3bU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->top__DOT__IFU_inst))) 
                                                      | (0x1bU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->top__DOT__IFU_inst)))) 
                                                     << 3U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7fff7fU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (0x80U 
                                                     & ((IData)(
                                                                ((2U 
                                                                  == 
                                                                  (2U 
                                                                   & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))) 
                                                                 & (0x2000000ULL 
                                                                    == 
                                                                    (0x2004000ULL 
                                                                     & vlSelf->top__DOT__IFU_inst)))) 
                                                        << 7U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7fffbfU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | ((IData)(
                                                             ((2U 
                                                               == 
                                                               (2U 
                                                                & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))) 
                                                              & (0x2004000ULL 
                                                                 == 
                                                                 (0x2004000ULL 
                                                                  & vlSelf->top__DOT__IFU_inst)))) 
                                                     << 6U));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7fffdfU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (0x20U 
                                                     & ((IData)(
                                                                ((2U 
                                                                  == 
                                                                  (2U 
                                                                   & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))) 
                                                                 & (0x2006000ULL 
                                                                    == 
                                                                    (0x2006000ULL 
                                                                     & vlSelf->top__DOT__IFU_inst)))) 
                                                        << 5U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7fffefU 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (0x10U 
                                                     & ((IData)(
                                                                ((2U 
                                                                  == 
                                                                  (2U 
                                                                   & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))) 
                                                                 & (0x2000000ULL 
                                                                    == 
                                                                    (0x2001000ULL 
                                                                     & vlSelf->top__DOT__IFU_inst)))) 
                                                        << 4U)));
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = ((0x7ffff8U 
                                                   & vlSelf->top__DOT__u_IDU__DOT__inst_act_pre) 
                                                  | (7U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__IFU_inst 
                                                                >> 0xcU))));
    vlSelf->top__DOT__u_IDU__DOT__imm_pre = ((0x20U 
                                              & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__IFU_inst 
                                                                               >> 0x14U))))))
                                              : ((0x10U 
                                                  & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(
                                                                             (vlSelf->top__DOT__IFU_inst 
                                                                              >> 0xcU)) 
                                                                     << 0xcU))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                          << 5U)) 
                                                                      | (0x1fU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0xcU)) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x14U)) 
                                                                              << 0xbU)) 
                                                                          | (0x7feU 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))
                                                     ? 0ULL
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x1fU)))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 7U)) 
                                                                             << 0xbU)) 
                                                                         | ((0x7e0U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                            | (0x1eU 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__IFU_inst 
                                                                                >> 8U)) 
                                                                                << 1U)))))))
                                                      : 0ULL))))));
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
    vlSelf->ifetch_pc = VL_RAND_RESET_Q(64);
    vlSelf->mainUpdate_valid = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_Q(64);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IFU_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__IDU_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ifetch_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__op = 0;
    vlSelf->top__DOT__inst_act = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__inst_type = VL_RAND_RESET_I(6);
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
    vlSelf->top__DOT__u_IDU__DOT__inst_act_pre = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__u_IDU__DOT__inst_type_pre = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_IDU__DOT__ras_rd_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IDU__DOT__ras_rs1_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_IDU__DOT__imm_pre = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__rd_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs1_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs2_r = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op_r = 0;
    vlSelf->top__DOT__u_EXU__DOT__inst_act_r = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__u_EXU__DOT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_EXU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__op = 0;
    vlSelf->top__DOT__u_EXU__DOT__inst_act = VL_RAND_RESET_I(23);
    vlSelf->top__DOT__u_EXU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__exe_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__exe_finish_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wenR = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__temp = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__mul_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__div_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__remainder = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__raddrM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__rdataM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__waddrM = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wmaskM = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__wenM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__renM = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__dataM_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__rCSR = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wCSR1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__wCSR2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__instCSR = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__u_EXU__DOT__wenC = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
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
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_csr__DOT__mtvec = VL_RAND_RESET_Q(64);
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
