// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ecc_decoder.h for the primary calling header

#ifndef VERILATED_VTB_ECC_DECODER___024ROOT_H_
#define VERILATED_VTB_ECC_DECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ecc_decoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ecc_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ecc_decoder__DOT__single_error;
    CData/*0:0*/ tb_ecc_decoder__DOT__double_error;
    CData/*0:0*/ tb_ecc_decoder__DOT__uncorrectable;
    CData/*0:0*/ tb_ecc_decoder__DOT__dec__DOT____Vlvbound_h479adeca__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ecc_decoder__DOT__data;
    IData/*31:0*/ tb_ecc_decoder__DOT__corrected_data;
    IData/*31:0*/ tb_ecc_decoder__DOT__errors;
    IData/*31:0*/ tb_ecc_decoder__DOT__n_none;
    IData/*31:0*/ tb_ecc_decoder__DOT__n_single;
    IData/*31:0*/ tb_ecc_decoder__DOT__n_double;
    IData/*31:0*/ tb_ecc_decoder__DOT__n_uncorr;
    IData/*31:0*/ tb_ecc_decoder__DOT__unnamedblk4__DOT__i;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__18__d;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__test_data__20__d;
    IData/*31:0*/ __VactIterCount;
    QData/*38:0*/ tb_ecc_decoder__DOT__codeword;
    QData/*38:0*/ tb_ecc_decoder__DOT__rx;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__7__mask;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__11__mask;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__18__mask;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__19__mask;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__23__mask;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ecc_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ecc_decoder___024root(Vtb_ecc_decoder__Syms* symsp, const char* v__name);
    ~Vtb_ecc_decoder___024root();
    VL_UNCOPYABLE(Vtb_ecc_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
