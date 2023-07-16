// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp110;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<3>/*95:0*/ __Vtemp128;
    VlWide<3>/*95:0*/ __Vtemp130;
    VlWide<3>/*95:0*/ __Vtemp131;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->top__DOT__u_ifetch__DOT__rask));
            tracep->chgQData(oldp+1,(vlSelf->top__DOT__ifetch_inst_pc),64);
            tracep->chgQData(oldp+3,((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst))),64);
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__dec_inst_vld));
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__dec_inst_pc),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__dec_inst),64);
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__exu_inst_vld));
            tracep->chgQData(oldp+11,(vlSelf->top__DOT__exu_inst_pc),64);
            tracep->chgQData(oldp+13,(vlSelf->top__DOT__exu_inst),64);
            tracep->chgBit(oldp+15,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d) 
                                     & (~ (((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld) 
                                              | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid)) 
                                             | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)) 
                                            | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)) 
                                           | (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld))))));
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__rd),5);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__rs2),5);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+21,(vlSelf->top__DOT__op),32);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__inst_act),33);
            tracep->chgIData(oldp+24,(vlSelf->top__DOT__inst_type),18);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__src2),64);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__alu_wb_vld));
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__alu_wb_addr),5);
            tracep->chgQData(oldp+31,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out
                                            : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld)
                                                ? vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out
                                                : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld)
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
                                                     : 0ULL)))))),64);
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__csr_wb_vld));
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__csr_wb_data),64);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__csr_wb_addr),5);
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__lsu_wb_vld));
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r),5);
            tracep->chgQData(oldp+39,(((4U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                        ? ((2U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? 0ULL
                                                : (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA)))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                                : (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))
                                        : ((2U & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? vlSelf->top__DOT__axis2_R_DATA
                                                : (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__axis2_R_DATA))))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__axis2_R_DATA)))))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__axis2_R_DATA 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__axis2_R_DATA))))))))),64);
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__axis1_AW_READY));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__axis1_W_READY));
            tracep->chgBit(oldp+45,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__axis1_B_READY));
            tracep->chgBit(oldp+47,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ) 
                                     | (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
            tracep->chgBit(oldp+48,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__axis1_R_VALID));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__axis1_R_READY));
            tracep->chgQData(oldp+51,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                        ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgQData(oldp+55,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? 0ULL : vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA)),64);
            tracep->chgQData(oldp+57,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                        : 0ULL)),64);
            tracep->chgCData(oldp+59,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? (0xffU & (IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                        : 0U)),8);
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__axis2_AW_VALID));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__axis2_AW_READY));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__axis2_W_VALID));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__axis2_W_READY));
            tracep->chgBit(oldp+64,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__axis2_B_READY));
            tracep->chgBit(oldp+66,(vlSelf->top__DOT__axis2_AR_VALID));
            tracep->chgBit(oldp+67,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__axis2_R_VALID));
            tracep->chgBit(oldp+69,(vlSelf->top__DOT__axis2_R_READY));
            tracep->chgQData(oldp+70,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__axis2_R_DATA),64);
            tracep->chgQData(oldp+76,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__src2
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                            : 0ULL))),64);
            tracep->chgCData(oldp+78,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__in_channel));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__itrace_en));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__commit_vld));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__commit_inst_pc),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__commit_inst),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__u_ifetch__DOT__pc_raddr),64);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__u_ifetch__DOT__pre_cnt),6);
            tracep->chgIData(oldp+89,(vlSelf->top__DOT__u_ifetch__DOT__inst),32);
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__u_ifetch__DOT__rreq));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__u_ifetch__DOT__icache_hit));
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__u_ifetch__DOT__icache_inv));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__u_ifetch__DOT__icache_rep));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__u_ifetch__DOT__icache_l2_rreq));
            tracep->chgQData(oldp+95,(vlSelf->top__DOT__u_ifetch__DOT__icache_l2_raddr),64);
            tracep->chgWData(oldp+97,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_RDATA),256);
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__MEM_ASK));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__u_ifetch__DOT__AXI_RREQ));
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__u_ifetch__DOT__AXI_RASK));
            tracep->chgBit(oldp+108,(((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg) 
                                      & (IData)(vlSelf->top__DOT__axis1_W_READY))));
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__u_ifetch__DOT__AXI_RADDR),64);
            tracep->chgWData(oldp+111,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__entry),1240);
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__op_line),2);
            tracep->chgCData(oldp+151,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__state),2);
            tracep->chgCData(oldp+152,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__next_state),2);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_raddr_d),64);
            tracep->chgWData(oldp+155,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rdat_d),1240);
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wr));
            tracep->chgCData(oldp+195,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wadr),6);
            tracep->chgWData(oldp+196,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_wdat),1240);
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_rd));
            tracep->chgCData(oldp+236,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__sram_radr),6);
            tracep->chgWData(oldp+237,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT____Vcellout__icache_array__rdat),1240);
            tracep->chgIData(oldp+276,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+277,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__RD_CONTROL__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+278,(vlSelf->top__DOT__u_ifetch__DOT__u_icache__DOT__icache_array__DOT__unnamedblk1__DOT__i),32);
            tracep->chgCData(oldp+279,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__state),3);
            tracep->chgCData(oldp+280,(vlSelf->top__DOT__u_ifetch__DOT__u_icache_axi__DOT__next_state),3);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgCData(oldp+285,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgQData(oldp+288,(vlSelf->top__DOT__u_dec__DOT__inst_act_pre),33);
            tracep->chgIData(oldp+290,(vlSelf->top__DOT__u_dec__DOT__inst_type_pre),18);
            tracep->chgBit(oldp+291,(vlSelf->top__DOT__u_dec__DOT__ras_rd_link));
            tracep->chgBit(oldp+292,(vlSelf->top__DOT__u_dec__DOT__ras_rs1_link));
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__u_dec__DOT__imm_pre),64);
            tracep->chgCData(oldp+295,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+296,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+297,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->top__DOT__u_ifetch__DOT__inst)) 
                                                         >> 0x14U)))),5);
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__u_EXU__DOT__bju_data_vld));
            tracep->chgBit(oldp+299,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
            tracep->chgBit(oldp+300,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
            tracep->chgBit(oldp+301,(vlSelf->top__DOT__u_EXU__DOT__st_req));
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
            tracep->chgQData(oldp+304,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
            tracep->chgCData(oldp+306,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
            tracep->chgQData(oldp+307,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 0xa00001800ULL
                                         : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 8U)))
                                                 ? vlSelf->top__DOT__dec_inst_pc
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 0xaU)))
                                                  ? 
                                                 ((1U 
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
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                                 ? 0xbULL
                                                 : 0ULL)))),64);
            tracep->chgCData(oldp+309,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                         ? 0U : ((0x300U 
                                                  == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                  ? 1U
                                                  : 
                                                 ((0x341U 
                                                   == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                   ? 2U
                                                   : 
                                                  ((0x305U 
                                                    == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
                                                    ? 3U
                                                    : 0U))))),2);
            tracep->chgBit(oldp+310,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
            tracep->chgBit(oldp+311,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__dec_inst_vld_d));
            tracep->chgBit(oldp+312,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld));
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld));
            tracep->chgBit(oldp+314,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
            tracep->chgQData(oldp+315,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out),64);
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out),64);
            tracep->chgBit(oldp+321,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d));
            tracep->chgBit(oldp+322,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d));
            tracep->chgBit(oldp+323,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req));
            tracep->chgBit(oldp+324,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir));
            tracep->chgBit(oldp+325,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xfU)))));
            tracep->chgCData(oldp+326,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt),6);
            tracep->chgQData(oldp+327,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req)
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0xcU)))
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res)))
                                             : ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 0xcU)))
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 0xfU)))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                   ? 
                                                  VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                   : 
                                                  (vlSelf->top__DOT__src1 
                                                   << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                   ? 
                                                  (vlSelf->top__DOT__src1 
                                                   >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                   : 
                                                  (vlSelf->top__DOT__src1 
                                                   << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))))))
                                         : 0ULL)),64);
            __Vtemp110[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp110[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp110[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp112[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp112[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp112[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp113, __Vtemp110, __Vtemp112);
            tracep->chgQData(oldp+329,(((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0x11U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__inst_act 
                                                           >> 0xdU)))
                                             ? ((1U 
                                                 & ((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                                       ? 
                                                      (7U 
                                                       & __Vtemp113[2U])
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
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum)),64);
            tracep->chgQData(oldp+331,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0),64);
            tracep->chgQData(oldp+333,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1),64);
            tracep->chgBit(oldp+335,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
            tracep->chgBit(oldp+336,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req));
            tracep->chgQData(oldp+337,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum),64);
            __Vtemp119[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp119[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp119[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp121[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp121[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp121[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp122, __Vtemp119, __Vtemp121);
            tracep->chgBit(oldp+339,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp122[2U])
                                              : 0U) 
                                            >> 2U))));
            __Vtemp128[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp128[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp128[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp130[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp130[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp130[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp131, __Vtemp128, __Vtemp130);
            tracep->chgBit(oldp+340,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp131[2U])
                                              : 0U) 
                                            >> 1U))));
            tracep->chgQData(oldp+341,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req)
                                         ? ((7U == 
                                             (7U & (IData)(
                                                           (vlSelf->top__DOT__inst_act 
                                                            >> 3U))))
                                             ? (vlSelf->top__DOT__src1 
                                                & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__inst_act 
                                                             >> 3U))))
                                                 ? 
                                                (vlSelf->top__DOT__src1 
                                                 | vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 3U))))
                                                  ? 
                                                 (vlSelf->top__DOT__src1 
                                                  ^ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1)
                                                  : 0ULL)))
                                         : 0ULL)),64);
            tracep->chgBit(oldp+343,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req));
            tracep->chgQData(oldp+344,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1),64);
            tracep->chgBit(oldp+346,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_vld));
            tracep->chgQData(oldp+347,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__w_inst_d)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U] 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U])))
                                         : (((QData)((IData)(
                                                             vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out[0U]))))),64);
            tracep->chgBit(oldp+349,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_req));
            tracep->chgBit(oldp+350,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xdU)))));
            tracep->chgWData(oldp+351,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mult_data_out),128);
            tracep->chgBit(oldp+355,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req));
            tracep->chgBit(oldp+356,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid));
            tracep->chgQData(oldp+357,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                         ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q)),64);
            tracep->chgQData(oldp+359,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)),64);
            tracep->chgQData(oldp+361,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_rem_d)
                                         ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                         : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                             ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))),64);
            tracep->chgBit(oldp+363,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xcU)))));
            tracep->chgQData(oldp+364,(((1U & (IData)(
                                                      (vlSelf->top__DOT__inst_act 
                                                       >> 0xcU)))
                                         ? 0ULL : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__inst_act 
                                                               >> 0xfU)))
                                                    ? 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                     ? 
                                                    VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                     : 
                                                    (vlSelf->top__DOT__src1 
                                                     << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir)
                                                     ? 
                                                    (vlSelf->top__DOT__src1 
                                                     >> (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt))
                                                     : 
                                                    (vlSelf->top__DOT__src1 
                                                     << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))))),64);
            tracep->chgIData(oldp+366,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res),32);
            tracep->chgWData(oldp+367,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend),129);
            __Vtemp137[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp137[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp137[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp139[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp139[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp139[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp140, __Vtemp137, __Vtemp139);
            tracep->chgBit(oldp+372,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                       ? (1U & __Vtemp140[0U])
                                       : 0U)));
            tracep->chgQData(oldp+373,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp),64);
            tracep->chgCData(oldp+375,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count),6);
            tracep->chgQData(oldp+376,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q),64);
            tracep->chgQData(oldp+378,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r),64);
            tracep->chgQData(oldp+380,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b),64);
            tracep->chgBit(oldp+382,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign));
            tracep->chgBit(oldp+383,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign));
            tracep->chgBit(oldp+384,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign));
            tracep->chgQData(oldp+385,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend),64);
            tracep->chgQData(oldp+387,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor),64);
            tracep->chgWData(oldp+389,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add),65);
            tracep->chgQData(oldp+392,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2),64);
            tracep->chgBit(oldp+394,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy));
            tracep->chgBit(oldp+395,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
            tracep->chgBit(oldp+396,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+397,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+398,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+399,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 9U)))));
            tracep->chgCData(oldp+400,((7U & (IData)(
                                                     (vlSelf->top__DOT__inst_act 
                                                      >> 3U)))),3);
            tracep->chgBit(oldp+401,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre));
            tracep->chgQData(oldp+402,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre),64);
            tracep->chgQData(oldp+404,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1),64);
            tracep->chgQData(oldp+406,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum),64);
            tracep->chgBit(oldp+408,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 1U)))));
            tracep->chgCData(oldp+409,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__func3_d),3);
            tracep->chgBit(oldp+410,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
            tracep->chgQData(oldp+411,((vlSelf->top__DOT__src1 
                                        + vlSelf->top__DOT__imm)),64);
            tracep->chgQData(oldp+413,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
            tracep->chgCData(oldp+415,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
            tracep->chgQData(oldp+416,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+418,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgCData(oldp+420,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+421,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+422,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+423,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+424,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgBit(oldp+425,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+426,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 8U)))));
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 6U)))));
            tracep->chgBit(oldp+428,((1U & (IData)(
                                                   (vlSelf->top__DOT__inst_act 
                                                    >> 7U)))));
            tracep->chgSData(oldp+429,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
            tracep->chgSData(oldp+430,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
            tracep->chgCData(oldp+431,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
            tracep->chgCData(oldp+432,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__inst_act 
                                                              >> 8U)))
                                                   ? 3U
                                                   : 2U)
                                                  : 2U))),2);
            tracep->chgQData(oldp+433,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
            tracep->chgQData(oldp+435,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
            tracep->chgQData(oldp+437,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
            tracep->chgQData(oldp+439,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
            tracep->chgBit(oldp+441,(vlSelf->top__DOT__u_RMU__DOT__wb_vld));
            tracep->chgCData(oldp+442,(vlSelf->top__DOT__u_RMU__DOT__wb_addr),5);
            tracep->chgQData(oldp+443,(vlSelf->top__DOT__u_RMU__DOT__wb_data),64);
            tracep->chgQData(oldp+445,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                       [vlSelf->top__DOT__rs1]),64);
            tracep->chgQData(oldp+447,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf
                                       [vlSelf->top__DOT__rs2]),64);
            tracep->chgQData(oldp+449,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+451,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+453,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+455,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+457,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+459,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+461,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+463,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+465,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+467,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+469,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+471,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+473,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+475,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+477,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+479,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+481,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+483,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+485,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+487,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+489,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+491,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+493,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+495,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+497,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+499,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+501,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+503,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+505,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+507,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+509,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+511,(vlSelf->top__DOT__u_RMU__DOT__u1_gpr__DOT__rf[31]),64);
            tracep->chgBit(oldp+513,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
            tracep->chgBit(oldp+514,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
            tracep->chgBit(oldp+515,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
            tracep->chgBit(oldp+516,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
            tracep->chgBit(oldp+517,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
            tracep->chgBit(oldp+518,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
            tracep->chgQData(oldp+519,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                             ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                             : 0ULL))),64);
            tracep->chgQData(oldp+521,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg
                                             : 0ULL)
                                         : vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
            tracep->chgQData(oldp+523,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__src2
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                             ? vlSelf->top__DOT__u_ifetch__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                             : 0ULL))),64);
            tracep->chgCData(oldp+525,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
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
                                                   : 0U)))),8);
            tracep->chgBit(oldp+526,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
            tracep->chgBit(oldp+527,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
            tracep->chgBit(oldp+528,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
            tracep->chgBit(oldp+529,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
            tracep->chgQData(oldp+530,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        }
        tracep->chgBit(oldp+532,(vlSelf->clk));
        tracep->chgBit(oldp+533,(vlSelf->rst_n));
        tracep->chgCData(oldp+534,(vlSelf->jmp_type),8);
        tracep->chgBit(oldp+535,(vlSelf->ifetch_taken));
        tracep->chgQData(oldp+536,(vlSelf->ifetch_taken_pc),64);
        tracep->chgBit(oldp+538,(vlSelf->mainUpdate_valid));
        tracep->chgQData(oldp+539,(vlSelf->pc),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
