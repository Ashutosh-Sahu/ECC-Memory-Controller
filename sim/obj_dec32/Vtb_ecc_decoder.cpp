// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_ecc_decoder__pch.h"

//============================================================
// Constructors

Vtb_ecc_decoder::Vtb_ecc_decoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_ecc_decoder__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_ecc_decoder::Vtb_ecc_decoder(const char* _vcname__)
    : Vtb_ecc_decoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_ecc_decoder::~Vtb_ecc_decoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_ecc_decoder___024root___eval_debug_assertions(Vtb_ecc_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_ecc_decoder___024root___eval_static(Vtb_ecc_decoder___024root* vlSelf);
void Vtb_ecc_decoder___024root___eval_initial(Vtb_ecc_decoder___024root* vlSelf);
void Vtb_ecc_decoder___024root___eval_settle(Vtb_ecc_decoder___024root* vlSelf);
void Vtb_ecc_decoder___024root___eval(Vtb_ecc_decoder___024root* vlSelf);

void Vtb_ecc_decoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_ecc_decoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_ecc_decoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_ecc_decoder___024root___eval_static(&(vlSymsp->TOP));
        Vtb_ecc_decoder___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_ecc_decoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_ecc_decoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_ecc_decoder::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_ecc_decoder::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_ecc_decoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_ecc_decoder___024root___eval_final(Vtb_ecc_decoder___024root* vlSelf);

VL_ATTR_COLD void Vtb_ecc_decoder::final() {
    Vtb_ecc_decoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_ecc_decoder::hierName() const { return vlSymsp->name(); }
const char* Vtb_ecc_decoder::modelName() const { return "Vtb_ecc_decoder"; }
unsigned Vtb_ecc_decoder::threads() const { return 1; }
void Vtb_ecc_decoder::prepareClone() const { contextp()->prepareClone(); }
void Vtb_ecc_decoder::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_ecc_decoder::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_ecc_decoder::trace()' called on model that was Verilated without --trace option");
}
