// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdiv.h"
#include "Vdiv__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdiv::Vdiv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdiv__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , sign_div{vlSymsp->TOP.sign_div}
    , divw{vlSymsp->TOP.divw}
    , dividend{vlSymsp->TOP.dividend}
    , divisor{vlSymsp->TOP.divisor}
    , div_valid{vlSymsp->TOP.div_valid}
    , quotient{vlSymsp->TOP.quotient}
    , remainder{vlSymsp->TOP.remainder}
    , out_valid{vlSymsp->TOP.out_valid}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdiv::Vdiv(const char* _vcname__)
    : Vdiv(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdiv::~Vdiv() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdiv___024root___eval_initial(Vdiv___024root* vlSelf);
void Vdiv___024root___eval_settle(Vdiv___024root* vlSelf);
void Vdiv___024root___eval(Vdiv___024root* vlSelf);
QData Vdiv___024root___change_request(Vdiv___024root* vlSelf);
#ifdef VL_DEBUG
void Vdiv___024root___eval_debug_assertions(Vdiv___024root* vlSelf);
#endif  // VL_DEBUG
void Vdiv___024root___final(Vdiv___024root* vlSelf);

static void _eval_initial_loop(Vdiv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdiv___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdiv___024root___eval_settle(&(vlSymsp->TOP));
        Vdiv___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdiv___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("div.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdiv___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vdiv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdiv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdiv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdiv___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vdiv___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("div.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vdiv___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vdiv::final() {
    Vdiv___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vdiv::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdiv::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vdiv___024root__traceInitTop(Vdiv___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vdiv___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vdiv___024root__traceRegister(Vdiv___024root* vlSelf, VerilatedVcd* tracep);

void Vdiv::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vdiv___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
