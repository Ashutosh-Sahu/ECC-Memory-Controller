// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ecc_faults.h for the primary calling header

#ifndef VERILATED_VTB_ECC_FAULTS___024ROOT_H_
#define VERILATED_VTB_ECC_FAULTS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ecc_faults__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ecc_faults___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ecc_faults__DOT__clk;
    CData/*0:0*/ tb_ecc_faults__DOT__write_en;
    CData/*0:0*/ tb_ecc_faults__DOT__read_en;
    CData/*3:0*/ tb_ecc_faults__DOT__addr;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__dec_single;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__dec_double;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__dec_uncorr;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__read_valid;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__run_double__8__a;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_write__9__a;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__inject__10__a;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__run_double__12__a;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__inject__14__a;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_read__15__a;
    CData/*0:0*/ __Vdlyvval__tb_ecc_faults__DOT__clk__v0;
    CData/*0:0*/ __Vdlyvset__tb_ecc_faults__DOT__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ecc_faults__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ecc_faults__DOT__write_data;
    IData/*31:0*/ tb_ecc_faults__DOT__read_data;
    IData/*31:0*/ tb_ecc_faults__DOT__errors;
    IData/*31:0*/ tb_ecc_faults__DOT__n_single;
    IData/*31:0*/ tb_ecc_faults__DOT__n_double;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__run_double__8__d;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__do_write__9__d;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__run_double__12__d;
    IData/*31:0*/ __VactIterCount;
    QData/*38:0*/ tb_ecc_faults__DOT__dut__DOT__enc_cw;
    QData/*38:0*/ __Vtask_tb_ecc_faults__DOT__inject__10__mask;
    QData/*38:0*/ __Vtask_tb_ecc_faults__DOT__inject__14__mask;
    VlUnpacked<QData/*38:0*/, 16> tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4b7f8849__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ecc_faults__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ecc_faults___024root(Vtb_ecc_faults__Syms* symsp, const char* v__name);
    ~Vtb_ecc_faults___024root();
    VL_UNCOPYABLE(Vtb_ecc_faults___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
