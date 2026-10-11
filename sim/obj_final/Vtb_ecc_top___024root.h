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
    CData/*0:0*/ tb_ecc_top__DOT__single_error;
    CData/*0:0*/ tb_ecc_top__DOT__double_error;
    CData/*0:0*/ tb_ecc_top__DOT__uncorrectable;
    CData/*3:0*/ tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__read_valid;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0;
    CData/*0:0*/ __Vdlyvval__tb_ecc_top__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_ecc_top__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ecc_top__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    CData/*0:0*/ __Vsampled__TOP__tb_ecc_top__DOT__write_en;
    CData/*0:0*/ __Vsampled__TOP__tb_ecc_top__DOT__read_en;
    CData/*0:0*/ __Vsampled__TOP__tb_ecc_top__DOT__single_error;
    CData/*0:0*/ __Vsampled__TOP__tb_ecc_top__DOT__double_error;
    CData/*0:0*/ __Vsampled__TOP__tb_ecc_top__DOT__uncorrectable;
    IData/*31:0*/ tb_ecc_top__DOT__write_data;
    IData/*31:0*/ tb_ecc_top__DOT__read_data;
    IData/*31:0*/ tb_ecc_top__DOT__expected_data;
    IData/*31:0*/ tb_ecc_top__DOT__assert_fails;
    IData/*31:0*/ tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__d;
    IData/*31:0*/ tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__kind;
    IData/*31:0*/ tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__p;
    IData/*31:0*/ tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__q;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __Vsampled__TOP__tb_ecc_top__DOT__read_data;
    IData/*31:0*/ __Vsampled__TOP__tb_ecc_top__DOT__expected_data;
    QData/*38:0*/ tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m;
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__enc_cw;
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
