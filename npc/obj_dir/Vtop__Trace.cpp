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
    VlWide<3>/*95:0*/ __Vtemp103;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp106;
    VlWide<3>/*95:0*/ __Vtemp112;
    VlWide<3>/*95:0*/ __Vtemp114;
    VlWide<3>/*95:0*/ __Vtemp115;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp123;
    VlWide<3>/*95:0*/ __Vtemp124;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__IFU_pc),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__IDU_pc),64);
            tracep->chgQData(oldp+4,((0xffffffffULL 
                                      & vlSelf->top__DOT__axis1_R_DATA)),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__IDU_inst),64);
            tracep->chgBit(oldp+8,(vlSelf->top__DOT__ifetch_req));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__u_IFU__DOT__rask));
            tracep->chgBit(oldp+10,(vlSelf->top__DOT__IDU_vld));
            tracep->chgCData(oldp+11,(vlSelf->top__DOT__rd),5);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__rs2),5);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__imm),64);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__op),32);
            tracep->chgQData(oldp+17,(vlSelf->top__DOT__inst_act),33);
            tracep->chgIData(oldp+19,(vlSelf->top__DOT__inst_type),18);
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__axis1_AW_READY));
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__axis1_W_READY));
            tracep->chgBit(oldp+24,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+25,(vlSelf->top__DOT__axis1_B_READY));
            tracep->chgBit(oldp+26,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq) 
                                     | (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg))));
            tracep->chgBit(oldp+27,(((~ (IData)(vlSelf->top__DOT__in_channel)) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__axis1_R_VALID));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__axis1_R_READY));
            tracep->chgQData(oldp+30,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                        : 0ULL)),64);
            tracep->chgQData(oldp+32,(((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                        ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                        : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__axis1_R_DATA),64);
            tracep->chgQData(oldp+36,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                        : 0ULL)),64);
            tracep->chgCData(oldp+38,(((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                        ? (0xffU & (IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg))
                                        : 0U)),8);
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__axis2_AW_VALID));
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__axis2_AW_READY));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__axis2_W_VALID));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__axis2_W_READY));
            tracep->chgBit(oldp+43,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID))));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__axis2_B_READY));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__axis2_AR_VALID));
            tracep->chgBit(oldp+46,(((IData)(vlSelf->top__DOT__in_channel) 
                                     & (IData)(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY))));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__axis2_R_VALID));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__axis2_R_READY));
            tracep->chgQData(oldp+49,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                            : 0ULL))),64);
            tracep->chgQData(oldp+51,(((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                        : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)),64);
            tracep->chgQData(oldp+53,(((IData)(vlSelf->top__DOT__in_channel)
                                        ? ((IData)(vlSelf->top__DOT__in_channel)
                                            ? vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA
                                            : 0ULL)
                                        : 0ULL)),64);
            tracep->chgQData(oldp+55,(((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                        ? vlSelf->top__DOT__u_EXU__DOT__src2
                                        : ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                            ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                            : 0ULL))),64);
            tracep->chgCData(oldp+57,((0xffU & ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM)
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg)
                                                  : 0U)))),8);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__in_channel));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__itrace_en));
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__u_IFU__DOT__ifetch_pc),64);
            tracep->chgCData(oldp+62,(vlSelf->top__DOT__u_IFU__DOT__pre_cnt),6);
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__u_IFU__DOT__rreq));
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__u_IDU__DOT__inst_act_pre),33);
            tracep->chgIData(oldp+75,(vlSelf->top__DOT__u_IDU__DOT__inst_type_pre),18);
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__u_IDU__DOT__ras_rd_link));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__ras_rs1_link));
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__u_IDU__DOT__imm_pre),64);
            tracep->chgCData(oldp+80,((0x1fU & (IData)(
                                                       (0x1ffffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 7U))))),5);
            tracep->chgCData(oldp+81,((0x1fU & (IData)(
                                                       (0x1ffffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0xfU))))),5);
            tracep->chgCData(oldp+82,((0x1fU & (IData)(
                                                       (0xfffULL 
                                                        & (vlSelf->top__DOT__axis1_R_DATA 
                                                           >> 0x14U))))),5);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__u_EXU__DOT__rd_r),5);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__u_EXU__DOT__rs1_r),5);
            tracep->chgCData(oldp+85,(vlSelf->top__DOT__u_EXU__DOT__rs2_r),5);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__u_EXU__DOT__imm_r),64);
            tracep->chgIData(oldp+88,(vlSelf->top__DOT__u_EXU__DOT__op_r),32);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__u_EXU__DOT__inst_act_r),33);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__u_EXU__DOT__pc_r),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__u_EXU__DOT__inst_r),64);
            tracep->chgCData(oldp+95,(vlSelf->top__DOT__u_EXU__DOT__rd),5);
            tracep->chgCData(oldp+96,(vlSelf->top__DOT__u_EXU__DOT__rs1),5);
            tracep->chgCData(oldp+97,(vlSelf->top__DOT__u_EXU__DOT__rs2),5);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_EXU__DOT__imm),64);
            tracep->chgIData(oldp+100,(vlSelf->top__DOT__u_EXU__DOT__op),32);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__u_EXU__DOT__inst_act),33);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__u_EXU__DOT__pc),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__u_EXU__DOT__inst),64);
            tracep->chgBit(oldp+107,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld));
            tracep->chgCData(oldp+108,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr),5);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__u_EXU__DOT__alu_wb_data),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__u_EXU__DOT__src1),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__u_EXU__DOT__src2),64);
            tracep->chgBit(oldp+115,((((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld) 
                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)) 
                                      | (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld))));
            tracep->chgCData(oldp+116,(((IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_vld)
                                         ? (IData)(vlSelf->top__DOT__u_EXU__DOT__alu_wb_addr)
                                         : ((IData)(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld)
                                             ? (IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r)
                                             : ((IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld)
                                                 ? (IData)(vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr)
                                                 : 0U)))),5);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__u_EXU__DOT__wb_data),64);
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__u_EXU__DOT__bmu_vld));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_vld));
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_id_r),5);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__u_EXU__DOT__lsu_wb_data),64);
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__u_EXU__DOT__lsu_data_vld));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__u_EXU__DOT__ld_req));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__u_EXU__DOT__st_req));
            tracep->chgBit(oldp+127,(vlSelf->top__DOT__u_EXU__DOT__sys_req));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__u_EXU__DOT__csr_data_vld));
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_data),64);
            tracep->chgCData(oldp+131,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_addr),5);
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__u_EXU__DOT__csr_wb_vld));
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__u_EXU__DOT__csrf_rdata),64);
            tracep->chgCData(oldp+135,(vlSelf->top__DOT__u_EXU__DOT__csrf_raddr),2);
            tracep->chgQData(oldp+136,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 0xa00001800ULL
                                         : ((2U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                            >> 8U)))
                                                 ? vlSelf->top__DOT__u_EXU__DOT__pc
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                             >> 0xaU)))
                                                  ? 
                                                 ((1U 
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
                                             : ((3U 
                                                 == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                                 ? 0xbULL
                                                 : 0ULL)))),64);
            tracep->chgCData(oldp+138,(((0x342U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr))
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
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__wen));
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_valid));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_out_vld));
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mini_alu_result),64);
            tracep->chgBit(oldp+144,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_out_vld));
            tracep->chgBit(oldp+145,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_out_vld));
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_out_vld));
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_data_out),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_data_out),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_data_out),64);
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_req));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_dir));
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0xfU)))));
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt),6);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_result),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_result),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src0),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_src1),64);
            tracep->chgBit(oldp+165,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_AorS));
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req));
            tracep->chgQData(oldp+167,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__adder_sum),64);
            __Vtemp103[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp103[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp103[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp105[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp105[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp105[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp106, __Vtemp103, __Vtemp105);
            tracep->chgBit(oldp+169,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp106[2U])
                                              : 0U) 
                                            >> 2U))));
            __Vtemp112[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp112[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp112[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp114[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp114[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp114[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp115, __Vtemp112, __Vtemp114);
            tracep->chgBit(oldp+170,((1U & (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                              ? (7U 
                                                 & __Vtemp115[2U])
                                              : 0U) 
                                            >> 1U))));
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_result),64);
            tracep->chgBit(oldp+173,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_req));
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__lgc_src1),64);
            tracep->chgBit(oldp+176,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_req));
            tracep->chgBit(oldp+177,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__mul_out_valid));
            tracep->chgQData(oldp+178,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[2U])))),64);
            tracep->chgQData(oldp+180,((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg[0U])))),64);
            tracep->chgBit(oldp+182,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_req));
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__div_out_valid));
            tracep->chgQData(oldp+184,((((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                         ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q)),64);
            tracep->chgQData(oldp+186,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                         : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)),64);
            tracep->chgQData(oldp+188,(((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0x14U)))
                                         ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign)
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2)
                                         : (((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign) 
                                             ^ (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign))
                                             ? (1ULL 
                                                + (~ vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))
                                             : vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q))),64);
            tracep->chgBit(oldp+190,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0xcU)))));
            tracep->chgQData(oldp+191,(((1U & (IData)(
                                                      (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                       >> 0xcU)))
                                         ? 0ULL : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                               >> 0xfU)))
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
                                                     << (IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__shift_shamt)))))),64);
            tracep->chgIData(oldp+193,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_shift__DOT__w_inst_shift_res),32);
            tracep->chgBit(oldp+194,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0xdU)))));
            tracep->chgWData(oldp+195,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend),129);
            __Vtemp121[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp121[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp121[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[2U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            __Vtemp123[0U] = (((IData)((((QData)((IData)(
                                                         vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U])))) 
                               << 1U) | (1U & vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[4U]));
            __Vtemp123[1U] = (((IData)((((QData)((IData)(
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
            __Vtemp123[2U] = ((2U & (vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U] 
                                     >> 0x1eU)) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__addend[0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x1fU));
            VL_ADD_W(3, __Vtemp124, __Vtemp121, __Vtemp123);
            tracep->chgBit(oldp+200,(((IData)(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__add_req)
                                       ? (1U & __Vtemp124[0U])
                                       : 0U)));
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__alu_add__DOT__adder_sum_temp),64);
            tracep->chgCData(oldp+203,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__cnt),7);
            tracep->chgQData(oldp+204,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplicand_r),64);
            tracep->chgQData(oldp+206,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__multiplier_r),64);
            tracep->chgWData(oldp+208,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_mul__DOT__result_reg),128);
            tracep->chgCData(oldp+212,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__count),6);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_q),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_b),64);
            tracep->chgBit(oldp+219,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__r_sign));
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__dividend_sign));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__divisor_sign));
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_dividend),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__op_divisor),64);
            tracep->chgWData(oldp+226,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__sub_add),65);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__reg_r2),64);
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__u_EXU__DOT__u_alu__DOT__u_div__DOT__busy_r));
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[0]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[1]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[2]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[3]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[4]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[5]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[6]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[7]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[8]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[9]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[10]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[11]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[12]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[13]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[14]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[15]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[16]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[17]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[18]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[19]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[20]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[21]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[22]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[23]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[24]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[25]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[26]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[27]),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[28]),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[29]),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[30]),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__u_EXU__DOT__u_gpr__DOT__rf[31]),64);
            tracep->chgBit(oldp+297,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+298,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+300,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 9U)))));
            tracep->chgCData(oldp+301,((7U & (IData)(
                                                     (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                      >> 3U)))),3);
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pre));
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__ifetch_taken_pc_pre),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_src1),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__u_EXU__DOT__u_BJU__DOT__add_sum),64);
            tracep->chgBit(oldp+309,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 1U)))));
            tracep->chgBit(oldp+310,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dst_vld_r));
            tracep->chgQData(oldp+311,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM),64);
            tracep->chgQData(oldp+313,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM),64);
            tracep->chgCData(oldp+315,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__wmaskM),8);
            tracep->chgBit(oldp+316,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__dataM_valid));
            tracep->chgQData(oldp+317,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg),64);
            tracep->chgQData(oldp+319,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg),64);
            tracep->chgQData(oldp+321,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg),64);
            tracep->chgCData(oldp+323,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_strb_reg),8);
            tracep->chgBit(oldp+324,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg));
            tracep->chgBit(oldp+325,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg));
            tracep->chgBit(oldp+326,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__ar_valid_reg));
            tracep->chgBit(oldp+327,(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_ready_reg));
            tracep->chgBit(oldp+328,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+329,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 8U)))));
            tracep->chgBit(oldp+330,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 6U)))));
            tracep->chgBit(oldp+331,((1U & (IData)(
                                                   (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                    >> 7U)))));
            tracep->chgSData(oldp+332,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__raddr),12);
            tracep->chgSData(oldp+333,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__waddr),12);
            tracep->chgCData(oldp+334,(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state),2);
            tracep->chgCData(oldp+335,(((0U == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                         ? 2U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__u_EXU__DOT__u_sysc__DOT__state))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__u_EXU__DOT__sys_req) 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__u_EXU__DOT__inst_act 
                                                              >> 8U)))
                                                   ? 3U
                                                   : 2U)
                                                  : 2U))),2);
            tracep->chgQData(oldp+336,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[0]),64);
            tracep->chgQData(oldp+338,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[1]),64);
            tracep->chgQData(oldp+340,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[2]),64);
            tracep->chgQData(oldp+342,(vlSelf->top__DOT__u_EXU__DOT__u_csrf__DOT__csrf[3]),64);
            tracep->chgBit(oldp+344,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_VALID));
            tracep->chgBit(oldp+345,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_VALID));
            tracep->chgBit(oldp+346,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_READY));
            tracep->chgBit(oldp+347,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_VALID));
            tracep->chgBit(oldp+348,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_READY));
            tracep->chgBit(oldp+349,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__B_VALID));
            tracep->chgQData(oldp+350,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__waddrM
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__aw_valid_reg)
                                             ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_addr_reg
                                             : 0ULL))),64);
            tracep->chgQData(oldp+352,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__ld_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__raddrM
                                                 : vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg)
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__rreq)
                                             ? vlSelf->top__DOT__u_IFU__DOT__ifetch_pc
                                             : vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__r_addr_reg))),64);
            tracep->chgQData(oldp+354,(((IData)(vlSelf->top__DOT__in_channel)
                                         ? ((IData)(vlSelf->top__DOT__in_channel)
                                             ? ((IData)(vlSelf->top__DOT__u_EXU__DOT__st_req)
                                                 ? vlSelf->top__DOT__u_EXU__DOT__src2
                                                 : 
                                                ((IData)(vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                                  ? vlSelf->top__DOT__u_EXU__DOT__u_LSU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                                  : 0ULL))
                                             : 0ULL)
                                         : ((IData)(vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_valid_reg)
                                             ? vlSelf->top__DOT__u_IFU__DOT__u1_AXI_master_SRAM__DOT__w_data_reg
                                             : 0ULL))),64);
            tracep->chgCData(oldp+356,((0xffU & ((IData)(vlSelf->top__DOT__in_channel)
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
                                                   : 0U)))),8);
            tracep->chgBit(oldp+357,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AR_READY));
            tracep->chgBit(oldp+358,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_VALID));
            tracep->chgBit(oldp+359,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__AW_READY));
            tracep->chgBit(oldp+360,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__W_READY));
            tracep->chgQData(oldp+361,(vlSelf->top__DOT__u_AXI_arbiter_SRAM__DOT__R_DATA),64);
        }
        tracep->chgBit(oldp+363,(vlSelf->clk));
        tracep->chgBit(oldp+364,(vlSelf->rst_n));
        tracep->chgCData(oldp+365,(vlSelf->jmp_type),8);
        tracep->chgBit(oldp+366,(vlSelf->ifetch_taken));
        tracep->chgQData(oldp+367,(vlSelf->ifetch_taken_pc),64);
        tracep->chgBit(oldp+369,(vlSelf->mainUpdate_valid));
        tracep->chgQData(oldp+370,(vlSelf->inst),64);
        tracep->chgQData(oldp+372,(vlSelf->pc),64);
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
