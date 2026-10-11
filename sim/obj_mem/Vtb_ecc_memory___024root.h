// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ecc_memory.h for the primary calling header

#ifndef VERILATED_VTB_ECC_MEMORY___024ROOT_H_
#define VERILATED_VTB_ECC_MEMORY___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ecc_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ecc_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ecc_memory__DOT__clk;
    CData/*0:0*/ tb_ecc_memory__DOT__we;
    CData/*3:0*/ tb_ecc_memory__DOT__addr;
    CData/*0:0*/ __Vdlyvval__tb_ecc_memory__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_ecc_memory__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ecc_memory__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*38:0*/ tb_ecc_memory__DOT__wdata;
    QData/*38:0*/ tb_ecc_memory__DOT__rdata;
    VlUnpacked<QData/*38:0*/, 16> tb_ecc_memory__DOT__dut__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h12620f55__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ecc_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ecc_memory___024root(Vtb_ecc_memory__Syms* symsp, const char* v__name);
    ~Vtb_ecc_memory___024root();
    VL_UNCOPYABLE(Vtb_ecc_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
