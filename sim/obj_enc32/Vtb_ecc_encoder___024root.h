// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ecc_encoder.h for the primary calling header

#ifndef VERILATED_VTB_ECC_ENCODER___024ROOT_H_
#define VERILATED_VTB_ECC_ENCODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ecc_encoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ecc_encoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ecc_encoder__DOT__data;
    IData/*31:0*/ __VactIterCount;
    QData/*38:0*/ tb_ecc_encoder__DOT__codeword;
    VlUnpacked<IData/*31:0*/, 6> tb_ecc_encoder__DOT__covers;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ecc_encoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ecc_encoder___024root(Vtb_ecc_encoder__Syms* symsp, const char* v__name);
    ~Vtb_ecc_encoder___024root();
    VL_UNCOPYABLE(Vtb_ecc_encoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
