// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsw.h"
#include "Vsw__Syms.h"

//============================================================
// Constructors

Vsw::Vsw(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsw__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsw::Vsw(const char* _vcname__)
    : Vsw(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsw::~Vsw() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsw___024root___eval_initial(Vsw___024root* vlSelf);
void Vsw___024root___eval_settle(Vsw___024root* vlSelf);
void Vsw___024root___eval(Vsw___024root* vlSelf);
QData Vsw___024root___change_request(Vsw___024root* vlSelf);
#ifdef VL_DEBUG
void Vsw___024root___eval_debug_assertions(Vsw___024root* vlSelf);
#endif  // VL_DEBUG
void Vsw___024root___final(Vsw___024root* vlSelf);

static void _eval_initial_loop(Vsw__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsw___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsw___024root___eval_settle(&(vlSymsp->TOP));
        Vsw___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsw___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/crofy/ysyx-workbench/npc/vsrc/sw.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsw___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsw::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsw::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsw___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsw___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsw___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/crofy/ysyx-workbench/npc/vsrc/sw.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsw___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vsw::final() {
    Vsw___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vsw::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsw::name() const {
    return vlSymsp->name();
}
