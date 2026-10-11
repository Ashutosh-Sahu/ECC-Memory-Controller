// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ecc_top.h for the primary calling header

#ifndef VERILATED_VTB_ECC_TOP___024ROOT_H_
#define VERILATED_VTB_ECC_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ecc_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ecc_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ecc_top__DOT__clk;
    CData/*0:0*/ tb_ecc_top__DOT__write_en;
    CData/*0:0*/ tb_ecc_top__DOT__read_en;
    CData/*3:0*/ tb_ecc_top__DOT__addr;
    CData/*3:0*/ tb_ecc_top__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_single;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_double;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_uncorr;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__read_valid;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0;
    CData/*0:0*/ __Vdlyvval__tb_ecc_top__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_ecc_top__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ecc_top__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ecc_top__DOT__write_data;
    IData/*31:0*/ tb_ecc_top__DOT__read_data;
    IData/*31:0*/ __VactIterCount;
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__enc_cw;
    VlUnpacked<IData/*31:0*/, 16> tb_ecc_top__DOT__model;
    VlUnpacked<QData/*38:0*/, 16> tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6a8fa2ea__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ecc_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ecc_top___024root(Vtb_ecc_top__Syms* symsp, const char* v__name);
    ~Vtb_ecc_top___024root();
    VL_UNCOPYABLE(Vtb_ecc_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
