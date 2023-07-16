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

void Vtop___024root____Vdpiimwrap_top__DOT__u_RMU__DOT__u1_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__itrace_en = 0U;
    Vtop___024root____Vdpiimwrap_top__DOT__u_RMU__DOT__u1_gpr__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf);
    vlSelf->top__DOT__dec_inst_pc = 0x80000000ULL;
    vlSelf->top__DOT__ifetch_inst_pc = 0x80000000ULL;
}

void Vtop___024root____Vdpiimwrap_top__DOT__u_dec__DOT__sim_exit_TOP(IData/*31:0*/ state);
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_c5a71c1e_0;
void Vtop___024root____Vdpiimwrap_top__DOT__u_AXI_arbiter_SRAM__DOT__u_AXI_slave_SRAM__DOT__pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    CData/*4:0*/ __Vtableidx1;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp52;
    CData/*31:0*/ __Vtemp57;
    CData/*31:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<3>/*95:0*/ __Vtemp67;
    VlWide<3>/*95:0*/ __Vtemp68;
    // Body
    __Vtemp47[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp47[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp47[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_ADD_W(3, __Vtemp49, __Vtemp47, __Vtemp48);
    __Vtemp50[0U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      << 1U) | (1U & (IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q 
                                              >> 0x3fU))));
    __Vtemp50[1U] = (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r) 
                      >> 0x1fU) | ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp50[2U] = ((IData)((vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
                              >> 0x20U)) >> 0x1fU);
    VL_EXTEND_WQ(65,64, __Vtemp51, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    VL_SUB_W(3, __Vtemp52, __Vtemp50, __Vtemp51);
    if (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign) {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp49[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp49[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp49[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r 
               + vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b);
    } else {
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[0U] 
            = __Vtemp52[0U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[1U] 
            = __Vtemp52[1U];
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add[2U] 
            = (1U & __Vtemp52[2U]);
        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2 
            = vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid 
        = ((~ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy)) 
           & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
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
    vlSelf->top__DOT__axis1_R_READY = ((IData)(vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) 
                                       | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
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
    vlSelf->pc = vlSelf->top__DOT__ifetch_inst_pc;
    vlSelf->top__DOT__alu_wb_vld = (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
                                     | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
                                    | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
    vlSelf->top__DOT__u_EXU__DOT__csrf_rdata = vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf
        [vlSelf->top__DOT__u_EXU__DOT__csrf_raddr];
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U] 
        = (1U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
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
    __Vtemp57 = (1U & (~ ((((((vlSelf->top__DOT__u_dec__DOT__inst_type_pre 
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
                                                  | ((QData)((IData)(__Vtemp57)) 
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
    __Vtemp59 = (1U & (((((IData)(((0ULL != (0x20000ULL 
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
                                                  | ((QData)((IData)(__Vtemp59)) 
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
    __Vtemp65[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp65[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp65[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    __Vtemp67[0U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
    __Vtemp67[1U] = (((IData)((((QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                      >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp67[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                            >> 0x1eU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                   >> 0x20U)) 
                                          >> 0x1fU));
    VL_ADD_W(3, __Vtemp68, __Vtemp65, __Vtemp67);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp 
        = (((QData)((IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                              ? (7U & __Vtemp68[2U])
                              : 0U))) << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                      ? 
                                                                     __Vtemp68[1U]
                                                                      : 0U))) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                                        ? 
                                                                       __Vtemp68[0U]
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
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ifetch_inst_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__dec_inst_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dec_inst_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__dec_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_inst_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exu_inst_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exu_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__op = 0;
    vlSelf->top__DOT__inst_act = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__inst_type = VL_RAND_RESET_I(18);
    vlSelf->top__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu_wb_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__csr_wb_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__csr_wb_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__csr_wb_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__lsu_wb_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_AW_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_W_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_B_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis1_R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AW_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AW_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_W_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_W_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_B_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_AR_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_R_VALID = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_R_READY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__axis2_R_DATA = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__in_channel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__itrace_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__commit_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__commit_inst_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__commit_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ifetch__DOT__pc_raddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ifetch__DOT__pre_cnt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_ifetch__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ifetch__DOT__rask = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__rreq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__icache_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__icache_inv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__icache_rep = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1240, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1240, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wadr = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(1240, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(1240, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(256, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound1);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound2 = VL_RAND_RESET_Q(53);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(1240, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__memory[__Vi0]);
    }
    vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__unnamedblk1__DOT__i = 0;
    VL_RAND_RESET_W(1240, vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT____Vlvbound1);
    VL_RAND_RESET_W(256, vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_ASK = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_dec__DOT__inst_act_pre = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__u_dec__DOT__inst_type_pre = VL_RAND_RESET_I(18);
    vlSelf->top__DOT__u_dec__DOT__ras_rd_link = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_dec__DOT__ras_rs1_link = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_dec__DOT__imm_pre = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__bju_data_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__ld_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__st_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__sys_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__csr_data_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__csrf_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__csrf_raddr = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(129, vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend);
    vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp = VL_RAND_RESET_Q(64);
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
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__u_RMU__DOT__wb_vld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_RMU__DOT__wb_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_RMU__DOT__wb_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
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
