// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_ecc_top__pch.h"

//============================================================
// Constructors

Vtb_ecc_top::Vtb_ecc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_ecc_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_ecc_top::Vtb_ecc_top(const char* _vcname__)
    : Vtb_ecc_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_ecc_top::~Vtb_ecc_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_ecc_top___024root___eval_debug_assertions(Vtb_ecc_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_ecc_top___024root___eval_static(Vtb_ecc_top___024root* vlSelf);
void Vtb_ecc_top___024root___eval_initial(Vtb_ecc_top___024root* vlSelf);
void Vtb_ecc_top___024root___eval_settle(Vtb_ecc_top___024root* vlSelf);
void Vtb_ecc_top___024root___eval(Vtb_ecc_top___024root* vlSelf);

void Vtb_ecc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_ecc_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_ecc_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_ecc_top___024root___eval_static(&(vlSymsp->TOP));
        Vtb_ecc_top___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_ecc_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_ecc_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_ecc_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_ecc_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_ecc_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_ecc_top___024root___eval_final(Vtb_ecc_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_ecc_top::final() {
    Vtb_ecc_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_ecc_top::hierName() const { return vlSymsp->name(); }
const char* Vtb_ecc_top::modelName() const { return "Vtb_ecc_top"; }
unsigned Vtb_ecc_top::threads() const { return 1; }
void Vtb_ecc_top::prepareClone() const { contextp()->prepareClone(); }
void Vtb_ecc_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_ecc_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_ecc_top::trace()' called on model that was Verilated without --trace option");
}
