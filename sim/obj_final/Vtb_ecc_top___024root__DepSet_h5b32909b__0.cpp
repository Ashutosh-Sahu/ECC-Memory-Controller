// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_top.h for the primary calling header

#include "Vtb_ecc_top__pch.h"
#include "Vtb_ecc_top___024root.h"

VL_ATTR_COLD void Vtb_ecc_top___024root___eval_initial__TOP(Vtb_ecc_top___024root* vlSelf);
VlCoroutine Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_top___024root* vlSelf);
VlCoroutine Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__1(Vtb_ecc_top___024root* vlSelf);

void Vtb_ecc_top___024root___eval_initial(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_initial\n"); );
    // Body
    Vtb_ecc_top___024root___eval_initial__TOP(vlSelf);
    Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_ecc_top__DOT__clk__0 
        = vlSelf->tb_ecc_top__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_ecc_top__DOT__total_tests;
    tb_ecc_top__DOT__total_tests = 0;
    IData/*31:0*/ tb_ecc_top__DOT__n_clean;
    tb_ecc_top__DOT__n_clean = 0;
    IData/*31:0*/ tb_ecc_top__DOT__n_corrected;
    tb_ecc_top__DOT__n_corrected = 0;
    IData/*31:0*/ tb_ecc_top__DOT__n_detected;
    tb_ecc_top__DOT__n_detected = 0;
    IData/*31:0*/ tb_ecc_top__DOT__mismatches;
    tb_ecc_top__DOT__mismatches = 0;
    IData/*31:0*/ tb_ecc_top__DOT__unnamedblk2__DOT__i;
    tb_ecc_top__DOT__unnamedblk2__DOT__i = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__0__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__a;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__mask;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__0__bad;
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__1__a;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__1__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__2__a;
    __Vtask_tb_ecc_top__DOT__inject__2__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__2__mask;
    __Vtask_tb_ecc_top__DOT__inject__2__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__3__a;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__4__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__a;
    __Vtask_tb_ecc_top__DOT__run_case__4__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__d;
    __Vtask_tb_ecc_top__DOT__run_case__4__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__mask;
    __Vtask_tb_ecc_top__DOT__run_case__4__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__4__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__4__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__4__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__4__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__4__bad;
    __Vtask_tb_ecc_top__DOT__run_case__4__bad = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__5__a;
    __Vtask_tb_ecc_top__DOT__do_write__5__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__5__d;
    __Vtask_tb_ecc_top__DOT__do_write__5__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__6__a;
    __Vtask_tb_ecc_top__DOT__inject__6__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__6__mask;
    __Vtask_tb_ecc_top__DOT__inject__6__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__7__a;
    __Vtask_tb_ecc_top__DOT__do_read__7__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__7__exp;
    __Vtask_tb_ecc_top__DOT__do_read__7__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__8__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__a;
    __Vtask_tb_ecc_top__DOT__run_case__8__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__d;
    __Vtask_tb_ecc_top__DOT__run_case__8__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__mask;
    __Vtask_tb_ecc_top__DOT__run_case__8__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__8__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__8__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__8__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__8__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__8__bad;
    __Vtask_tb_ecc_top__DOT__run_case__8__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__9__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__9__p;
    __Vfunc_tb_ecc_top__DOT__bm__9__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__10__a;
    __Vtask_tb_ecc_top__DOT__do_write__10__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__10__d;
    __Vtask_tb_ecc_top__DOT__do_write__10__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__11__a;
    __Vtask_tb_ecc_top__DOT__inject__11__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__11__mask;
    __Vtask_tb_ecc_top__DOT__inject__11__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__12__a;
    __Vtask_tb_ecc_top__DOT__do_read__12__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__12__exp;
    __Vtask_tb_ecc_top__DOT__do_read__12__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__13__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__a;
    __Vtask_tb_ecc_top__DOT__run_case__13__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__d;
    __Vtask_tb_ecc_top__DOT__run_case__13__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__mask;
    __Vtask_tb_ecc_top__DOT__run_case__13__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__13__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__13__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__13__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__13__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__13__bad;
    __Vtask_tb_ecc_top__DOT__run_case__13__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__14__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__14__p;
    __Vfunc_tb_ecc_top__DOT__bm__14__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__15__a;
    __Vtask_tb_ecc_top__DOT__do_write__15__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__15__d;
    __Vtask_tb_ecc_top__DOT__do_write__15__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__16__a;
    __Vtask_tb_ecc_top__DOT__inject__16__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__16__mask;
    __Vtask_tb_ecc_top__DOT__inject__16__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__17__a;
    __Vtask_tb_ecc_top__DOT__do_read__17__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__17__exp;
    __Vtask_tb_ecc_top__DOT__do_read__17__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__18__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__a;
    __Vtask_tb_ecc_top__DOT__run_case__18__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__d;
    __Vtask_tb_ecc_top__DOT__run_case__18__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__mask;
    __Vtask_tb_ecc_top__DOT__run_case__18__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__18__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__18__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__18__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__18__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__18__bad;
    __Vtask_tb_ecc_top__DOT__run_case__18__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__19__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__19__p;
    __Vfunc_tb_ecc_top__DOT__bm__19__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__20__a;
    __Vtask_tb_ecc_top__DOT__do_write__20__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__20__d;
    __Vtask_tb_ecc_top__DOT__do_write__20__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__21__a;
    __Vtask_tb_ecc_top__DOT__inject__21__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__21__mask;
    __Vtask_tb_ecc_top__DOT__inject__21__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__22__a;
    __Vtask_tb_ecc_top__DOT__do_read__22__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__22__exp;
    __Vtask_tb_ecc_top__DOT__do_read__22__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__23__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__a;
    __Vtask_tb_ecc_top__DOT__run_case__23__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__d;
    __Vtask_tb_ecc_top__DOT__run_case__23__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__mask;
    __Vtask_tb_ecc_top__DOT__run_case__23__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__23__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__23__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__23__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__23__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__23__bad;
    __Vtask_tb_ecc_top__DOT__run_case__23__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__24__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__24__p;
    __Vfunc_tb_ecc_top__DOT__bm__24__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__25__a;
    __Vtask_tb_ecc_top__DOT__do_write__25__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__25__d;
    __Vtask_tb_ecc_top__DOT__do_write__25__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__26__a;
    __Vtask_tb_ecc_top__DOT__inject__26__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__26__mask;
    __Vtask_tb_ecc_top__DOT__inject__26__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__27__a;
    __Vtask_tb_ecc_top__DOT__do_read__27__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__27__exp;
    __Vtask_tb_ecc_top__DOT__do_read__27__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__28__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__a;
    __Vtask_tb_ecc_top__DOT__run_case__28__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__d;
    __Vtask_tb_ecc_top__DOT__run_case__28__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__mask;
    __Vtask_tb_ecc_top__DOT__run_case__28__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__28__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__28__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__28__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__28__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__28__bad;
    __Vtask_tb_ecc_top__DOT__run_case__28__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__29__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__29__p;
    __Vfunc_tb_ecc_top__DOT__bm__29__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__30__a;
    __Vtask_tb_ecc_top__DOT__do_write__30__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__30__d;
    __Vtask_tb_ecc_top__DOT__do_write__30__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__31__a;
    __Vtask_tb_ecc_top__DOT__inject__31__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__31__mask;
    __Vtask_tb_ecc_top__DOT__inject__31__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__32__a;
    __Vtask_tb_ecc_top__DOT__do_read__32__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__32__exp;
    __Vtask_tb_ecc_top__DOT__do_read__32__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__33__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__a;
    __Vtask_tb_ecc_top__DOT__run_case__33__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__d;
    __Vtask_tb_ecc_top__DOT__run_case__33__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__mask;
    __Vtask_tb_ecc_top__DOT__run_case__33__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__33__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__33__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__33__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__33__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__33__bad;
    __Vtask_tb_ecc_top__DOT__run_case__33__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__34__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__34__p;
    __Vfunc_tb_ecc_top__DOT__bm__34__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__35__a;
    __Vtask_tb_ecc_top__DOT__do_write__35__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__35__d;
    __Vtask_tb_ecc_top__DOT__do_write__35__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__36__a;
    __Vtask_tb_ecc_top__DOT__inject__36__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__36__mask;
    __Vtask_tb_ecc_top__DOT__inject__36__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__37__a;
    __Vtask_tb_ecc_top__DOT__do_read__37__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__37__exp;
    __Vtask_tb_ecc_top__DOT__do_read__37__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__38__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__a;
    __Vtask_tb_ecc_top__DOT__run_case__38__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__d;
    __Vtask_tb_ecc_top__DOT__run_case__38__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__mask;
    __Vtask_tb_ecc_top__DOT__run_case__38__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__38__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__38__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__38__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__38__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__38__bad;
    __Vtask_tb_ecc_top__DOT__run_case__38__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__39__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__39__p;
    __Vfunc_tb_ecc_top__DOT__bm__39__p = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__40__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__40__p;
    __Vfunc_tb_ecc_top__DOT__bm__40__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__41__a;
    __Vtask_tb_ecc_top__DOT__do_write__41__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__41__d;
    __Vtask_tb_ecc_top__DOT__do_write__41__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__42__a;
    __Vtask_tb_ecc_top__DOT__inject__42__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__42__mask;
    __Vtask_tb_ecc_top__DOT__inject__42__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__43__a;
    __Vtask_tb_ecc_top__DOT__do_read__43__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__43__exp;
    __Vtask_tb_ecc_top__DOT__do_read__43__exp = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__44__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__a;
    __Vtask_tb_ecc_top__DOT__run_case__44__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__d;
    __Vtask_tb_ecc_top__DOT__run_case__44__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__mask;
    __Vtask_tb_ecc_top__DOT__run_case__44__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__44__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__44__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__44__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__44__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__44__bad;
    __Vtask_tb_ecc_top__DOT__run_case__44__bad = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__45__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__45__p;
    __Vfunc_tb_ecc_top__DOT__bm__45__p = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__46__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__46__p;
    __Vfunc_tb_ecc_top__DOT__bm__46__p = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__47__a;
    __Vtask_tb_ecc_top__DOT__do_write__47__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__47__d;
    __Vtask_tb_ecc_top__DOT__do_write__47__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__48__a;
    __Vtask_tb_ecc_top__DOT__inject__48__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__48__mask;
    __Vtask_tb_ecc_top__DOT__inject__48__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__49__a;
    __Vtask_tb_ecc_top__DOT__do_read__49__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__49__exp;
    __Vtask_tb_ecc_top__DOT__do_read__49__exp = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__50__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__50__p;
    __Vfunc_tb_ecc_top__DOT__bm__50__p = 0;
    QData/*38:0*/ __Vfunc_tb_ecc_top__DOT__bm__51__Vfuncout;
    __Vfunc_tb_ecc_top__DOT__bm__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_top__DOT__bm__51__p;
    __Vfunc_tb_ecc_top__DOT__bm__51__p = 0;
    std::string __Vtask_tb_ecc_top__DOT__run_case__52__name;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__a;
    __Vtask_tb_ecc_top__DOT__run_case__52__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__d;
    __Vtask_tb_ecc_top__DOT__run_case__52__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__mask;
    __Vtask_tb_ecc_top__DOT__run_case__52__mask = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__verbose;
    __Vtask_tb_ecc_top__DOT__run_case__52__verbose = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__nflips;
    __Vtask_tb_ecc_top__DOT__run_case__52__nflips = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__exp_single;
    __Vtask_tb_ecc_top__DOT__run_case__52__exp_single = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__exp_double;
    __Vtask_tb_ecc_top__DOT__run_case__52__exp_double = 0;
    CData/*0:0*/ __Vtask_tb_ecc_top__DOT__run_case__52__bad;
    __Vtask_tb_ecc_top__DOT__run_case__52__bad = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_write__53__a;
    __Vtask_tb_ecc_top__DOT__do_write__53__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_write__53__d;
    __Vtask_tb_ecc_top__DOT__do_write__53__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__inject__54__a;
    __Vtask_tb_ecc_top__DOT__inject__54__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_top__DOT__inject__54__mask;
    __Vtask_tb_ecc_top__DOT__inject__54__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_top__DOT__do_read__55__a;
    __Vtask_tb_ecc_top__DOT__do_read__55__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_top__DOT__do_read__55__exp;
    __Vtask_tb_ecc_top__DOT__do_read__55__exp = 0;
    QData/*63:0*/ __Vtemp_151;
    QData/*63:0*/ __Vtemp_152;
    // Body
    tb_ecc_top__DOT__total_tests = 0U;
    tb_ecc_top__DOT__n_clean = 0U;
    tb_ecc_top__DOT__n_corrected = 0U;
    tb_ecc_top__DOT__n_detected = 0U;
    tb_ecc_top__DOT__mismatches = 0U;
    vlSelf->tb_ecc_top__DOT__assert_fails = 0U;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = 0U;
    vlSelf->tb_ecc_top__DOT__write_data = 0U;
    vlSelf->tb_ecc_top__DOT__expected_data = 0U;
    VL_WRITEF("---- Directed tests ----\n");
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000000U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double = 0U;
    __Vtask_tb_ecc_top__DOT__do_write__1__d = 0x10000000U;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = 0U;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000001U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 1U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000002U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 2U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000003U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 3U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000004U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 4U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000005U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 5U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000006U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 6U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000007U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 7U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000008U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 8U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x10000009U;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 9U;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x1000000aU;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0xaU;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x1000000bU;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0xbU;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x1000000cU;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0xcU;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x1000000dU;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0xdU;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x1000000eU;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0xeU;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__0__verbose = 0U;
    __Vtask_tb_ecc_top__DOT__run_case__0__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__0__d = 0x1000000fU;
    __Vtask_tb_ecc_top__DOT__run_case__0__a = 0xfU;
    __Vtask_tb_ecc_top__DOT__run_case__0__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__0__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__0__mask);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__0__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__1__d = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_write__1__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__1__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__0__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__2__mask = __Vtask_tb_ecc_top__DOT__run_case__0__mask;
        __Vtask_tb_ecc_top__DOT__inject__2__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__2__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__2__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__2__mask);
    }
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    __Vtask_tb_ecc_top__DOT__do_read__3__exp = __Vtask_tb_ecc_top__DOT__run_case__0__d;
    __Vtask_tb_ecc_top__DOT__do_read__3__a = __Vtask_tb_ecc_top__DOT__run_case__0__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__3__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__3__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__0__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__0__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__0__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__0__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__0__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__0__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__0__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__0__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__0__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__0__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__0__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__0__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__4__verbose = 1U;
    __Vtask_tb_ecc_top__DOT__run_case__4__mask = 0ULL;
    __Vtask_tb_ecc_top__DOT__run_case__4__d = 0xdeadbeefU;
    __Vtask_tb_ecc_top__DOT__run_case__4__a = 3U;
    __Vtask_tb_ecc_top__DOT__run_case__4__name = std::string{"clean write/read"};
    __Vtask_tb_ecc_top__DOT__run_case__4__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__4__mask);
    __Vtask_tb_ecc_top__DOT__run_case__4__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__4__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__4__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__4__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__5__d = __Vtask_tb_ecc_top__DOT__run_case__4__d;
    __Vtask_tb_ecc_top__DOT__do_write__5__a = __Vtask_tb_ecc_top__DOT__run_case__4__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__5__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__4__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__6__mask = __Vtask_tb_ecc_top__DOT__run_case__4__mask;
        __Vtask_tb_ecc_top__DOT__inject__6__a = __Vtask_tb_ecc_top__DOT__run_case__4__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__6__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__6__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__6__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__7__exp = __Vtask_tb_ecc_top__DOT__run_case__4__d;
    __Vtask_tb_ecc_top__DOT__do_read__7__a = __Vtask_tb_ecc_top__DOT__run_case__4__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__7__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__7__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__4__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__4__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__4__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__4__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__4__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__4__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__4__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__4__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__4__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__4__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__4__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__4__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__4__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__4__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__4__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__4__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__4__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__4__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__4__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__4__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__4__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__8__verbose = 1U;
    __Vfunc_tb_ecc_top__DOT__bm__9__p = 3U;
    __Vfunc_tb_ecc_top__DOT__bm__9__Vfuncout = (0x7fffffffffULL 
                                                & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__9__p));
    __Vtask_tb_ecc_top__DOT__run_case__8__mask = __Vfunc_tb_ecc_top__DOT__bm__9__Vfuncout;
    __Vtask_tb_ecc_top__DOT__run_case__8__d = 0xa5a5a5a5U;
    __Vtask_tb_ecc_top__DOT__run_case__8__a = 5U;
    __Vtask_tb_ecc_top__DOT__run_case__8__name = std::string{"1-bit data flip pos3"};
    __Vtask_tb_ecc_top__DOT__run_case__8__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__8__mask);
    __Vtask_tb_ecc_top__DOT__run_case__8__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__8__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__8__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__8__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__10__d = __Vtask_tb_ecc_top__DOT__run_case__8__d;
    __Vtask_tb_ecc_top__DOT__do_write__10__a = __Vtask_tb_ecc_top__DOT__run_case__8__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__10__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__10__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__8__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__11__mask = __Vtask_tb_ecc_top__DOT__run_case__8__mask;
        __Vtask_tb_ecc_top__DOT__inject__11__a = __Vtask_tb_ecc_top__DOT__run_case__8__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__11__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__11__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__11__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__12__exp = __Vtask_tb_ecc_top__DOT__run_case__8__d;
    __Vtask_tb_ecc_top__DOT__do_read__12__a = __Vtask_tb_ecc_top__DOT__run_case__8__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__12__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__12__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__8__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__8__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__8__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__8__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__8__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__8__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__8__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__8__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__8__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__8__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__8__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__8__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__8__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__8__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__8__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__8__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__8__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__8__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__8__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__8__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__8__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__13__verbose = 1U;
    __Vfunc_tb_ecc_top__DOT__bm__14__p = 0x14U;
    __Vfunc_tb_ecc_top__DOT__bm__14__Vfuncout = (0x7fffffffffULL 
                                                 & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__14__p));
    __Vtask_tb_ecc_top__DOT__run_case__13__mask = __Vfunc_tb_ecc_top__DOT__bm__14__Vfuncout;
    __Vtask_tb_ecc_top__DOT__run_case__13__d = 0xa5a5a5a5U;
    __Vtask_tb_ecc_top__DOT__run_case__13__a = 5U;
    __Vtask_tb_ecc_top__DOT__run_case__13__name = std::string{"1-bit data flip pos20"};
    __Vtask_tb_ecc_top__DOT__run_case__13__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__13__mask);
    __Vtask_tb_ecc_top__DOT__run_case__13__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__13__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__13__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__13__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__15__d = __Vtask_tb_ecc_top__DOT__run_case__13__d;
    __Vtask_tb_ecc_top__DOT__do_write__15__a = __Vtask_tb_ecc_top__DOT__run_case__13__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__15__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__15__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__13__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__16__mask = __Vtask_tb_ecc_top__DOT__run_case__13__mask;
        __Vtask_tb_ecc_top__DOT__inject__16__a = __Vtask_tb_ecc_top__DOT__run_case__13__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__16__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__16__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__16__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__17__exp = __Vtask_tb_ecc_top__DOT__run_case__13__d;
    __Vtask_tb_ecc_top__DOT__do_read__17__a = __Vtask_tb_ecc_top__DOT__run_case__13__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__17__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__17__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__13__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__13__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__13__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__13__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__13__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__13__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__13__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__13__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__13__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__13__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__13__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__13__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__13__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__13__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__13__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__13__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__13__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__13__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__13__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__13__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__13__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__18__verbose = 1U;
    __Vfunc_tb_ecc_top__DOT__bm__19__p = 0x26U;
    __Vfunc_tb_ecc_top__DOT__bm__19__Vfuncout = (0x7fffffffffULL 
                                                 & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__19__p));
    __Vtask_tb_ecc_top__DOT__run_case__18__mask = __Vfunc_tb_ecc_top__DOT__bm__19__Vfuncout;
    __Vtask_tb_ecc_top__DOT__run_case__18__d = 0xa5a5a5a5U;
    __Vtask_tb_ecc_top__DOT__run_case__18__a = 5U;
    __Vtask_tb_ecc_top__DOT__run_case__18__name = std::string{"1-bit data flip pos38"};
    __Vtask_tb_ecc_top__DOT__run_case__18__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__18__mask);
    __Vtask_tb_ecc_top__DOT__run_case__18__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__18__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__18__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__18__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__20__d = __Vtask_tb_ecc_top__DOT__run_case__18__d;
    __Vtask_tb_ecc_top__DOT__do_write__20__a = __Vtask_tb_ecc_top__DOT__run_case__18__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__20__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__20__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__18__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__21__mask = __Vtask_tb_ecc_top__DOT__run_case__18__mask;
        __Vtask_tb_ecc_top__DOT__inject__21__a = __Vtask_tb_ecc_top__DOT__run_case__18__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__21__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__21__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__21__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__22__exp = __Vtask_tb_ecc_top__DOT__run_case__18__d;
    __Vtask_tb_ecc_top__DOT__do_read__22__a = __Vtask_tb_ecc_top__DOT__run_case__18__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__22__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__22__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__18__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__18__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__18__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__18__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__18__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__18__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__18__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__18__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__18__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__18__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__18__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__18__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__18__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__18__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__18__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__18__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__18__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__18__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__18__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__18__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__18__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__23__verbose = 1U;
    __Vfunc_tb_ecc_top__DOT__bm__24__p = 8U;
    __Vfunc_tb_ecc_top__DOT__bm__24__Vfuncout = (0x7fffffffffULL 
                                                 & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__24__p));
    __Vtask_tb_ecc_top__DOT__run_case__23__mask = __Vfunc_tb_ecc_top__DOT__bm__24__Vfuncout;
    __Vtask_tb_ecc_top__DOT__run_case__23__d = 0x5a5a5a5aU;
    __Vtask_tb_ecc_top__DOT__run_case__23__a = 7U;
    __Vtask_tb_ecc_top__DOT__run_case__23__name = std::string{"1-bit parity flip P8"};
    __Vtask_tb_ecc_top__DOT__run_case__23__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__23__mask);
    __Vtask_tb_ecc_top__DOT__run_case__23__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__23__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__23__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__23__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__25__d = __Vtask_tb_ecc_top__DOT__run_case__23__d;
    __Vtask_tb_ecc_top__DOT__do_write__25__a = __Vtask_tb_ecc_top__DOT__run_case__23__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__25__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__25__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__23__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__26__mask = __Vtask_tb_ecc_top__DOT__run_case__23__mask;
        __Vtask_tb_ecc_top__DOT__inject__26__a = __Vtask_tb_ecc_top__DOT__run_case__23__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__26__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__26__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__26__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__27__exp = __Vtask_tb_ecc_top__DOT__run_case__23__d;
    __Vtask_tb_ecc_top__DOT__do_read__27__a = __Vtask_tb_ecc_top__DOT__run_case__23__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__27__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__27__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__23__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__23__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__23__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__23__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__23__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__23__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__23__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__23__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__23__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__23__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__23__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__23__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__23__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__23__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__23__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__23__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__23__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__23__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__23__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__23__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__23__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__28__verbose = 1U;
    __Vfunc_tb_ecc_top__DOT__bm__29__p = 0x20U;
    __Vfunc_tb_ecc_top__DOT__bm__29__Vfuncout = (0x7fffffffffULL 
                                                 & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__29__p));
    __Vtask_tb_ecc_top__DOT__run_case__28__mask = __Vfunc_tb_ecc_top__DOT__bm__29__Vfuncout;
    __Vtask_tb_ecc_top__DOT__run_case__28__d = 0x5a5a5a5aU;
    __Vtask_tb_ecc_top__DOT__run_case__28__a = 7U;
    __Vtask_tb_ecc_top__DOT__run_case__28__name = std::string{"1-bit parity flip P32"};
    __Vtask_tb_ecc_top__DOT__run_case__28__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__28__mask);
    __Vtask_tb_ecc_top__DOT__run_case__28__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__28__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__28__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__28__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__30__d = __Vtask_tb_ecc_top__DOT__run_case__28__d;
    __Vtask_tb_ecc_top__DOT__do_write__30__a = __Vtask_tb_ecc_top__DOT__run_case__28__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__30__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__30__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__28__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__31__mask = __Vtask_tb_ecc_top__DOT__run_case__28__mask;
        __Vtask_tb_ecc_top__DOT__inject__31__a = __Vtask_tb_ecc_top__DOT__run_case__28__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__31__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__31__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__31__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__32__exp = __Vtask_tb_ecc_top__DOT__run_case__28__d;
    __Vtask_tb_ecc_top__DOT__do_read__32__a = __Vtask_tb_ecc_top__DOT__run_case__28__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__32__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__32__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__28__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__28__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__28__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__28__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__28__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__28__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__28__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__28__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__28__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__28__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__28__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__28__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__28__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__28__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__28__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__28__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__28__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__28__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__28__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__28__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__28__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__33__verbose = 1U;
    __Vfunc_tb_ecc_top__DOT__bm__34__p = 0U;
    __Vfunc_tb_ecc_top__DOT__bm__34__Vfuncout = (0x7fffffffffULL 
                                                 & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__34__p));
    __Vtask_tb_ecc_top__DOT__run_case__33__mask = __Vfunc_tb_ecc_top__DOT__bm__34__Vfuncout;
    __Vtask_tb_ecc_top__DOT__run_case__33__d = 0x5a5a5a5aU;
    __Vtask_tb_ecc_top__DOT__run_case__33__a = 7U;
    __Vtask_tb_ecc_top__DOT__run_case__33__name = std::string{"1-bit parity flip P_all"};
    __Vtask_tb_ecc_top__DOT__run_case__33__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__33__mask);
    __Vtask_tb_ecc_top__DOT__run_case__33__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__33__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__33__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__33__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__35__d = __Vtask_tb_ecc_top__DOT__run_case__33__d;
    __Vtask_tb_ecc_top__DOT__do_write__35__a = __Vtask_tb_ecc_top__DOT__run_case__33__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__35__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__35__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__33__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__36__mask = __Vtask_tb_ecc_top__DOT__run_case__33__mask;
        __Vtask_tb_ecc_top__DOT__inject__36__a = __Vtask_tb_ecc_top__DOT__run_case__33__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__36__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__36__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__36__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__37__exp = __Vtask_tb_ecc_top__DOT__run_case__33__d;
    __Vtask_tb_ecc_top__DOT__do_read__37__a = __Vtask_tb_ecc_top__DOT__run_case__33__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__37__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__37__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__33__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__33__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__33__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__33__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__33__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__33__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__33__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__33__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__33__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__33__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__33__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__33__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__33__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__33__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__33__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__33__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__33__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__33__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__33__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__33__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__33__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__38__verbose = 1U;
    __Vtask_tb_ecc_top__DOT__run_case__38__mask = (
                                                   ([&]() {
                __Vfunc_tb_ecc_top__DOT__bm__39__p = 3U;
                __Vfunc_tb_ecc_top__DOT__bm__39__Vfuncout 
                    = (0x7fffffffffULL & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__39__p));
            }(), __Vfunc_tb_ecc_top__DOT__bm__39__Vfuncout) 
                                                   | ([&]() {
                __Vfunc_tb_ecc_top__DOT__bm__40__p = 0x26U;
                __Vfunc_tb_ecc_top__DOT__bm__40__Vfuncout 
                    = (0x7fffffffffULL & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__40__p));
            }(), __Vfunc_tb_ecc_top__DOT__bm__40__Vfuncout));
    __Vtask_tb_ecc_top__DOT__run_case__38__d = 0xcafef00dU;
    __Vtask_tb_ecc_top__DOT__run_case__38__a = 9U;
    __Vtask_tb_ecc_top__DOT__run_case__38__name = std::string{"2-bit data flip 3,38"};
    __Vtask_tb_ecc_top__DOT__run_case__38__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__38__mask);
    __Vtask_tb_ecc_top__DOT__run_case__38__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__38__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__38__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__38__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__41__d = __Vtask_tb_ecc_top__DOT__run_case__38__d;
    __Vtask_tb_ecc_top__DOT__do_write__41__a = __Vtask_tb_ecc_top__DOT__run_case__38__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__41__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__41__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__38__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__42__mask = __Vtask_tb_ecc_top__DOT__run_case__38__mask;
        __Vtask_tb_ecc_top__DOT__inject__42__a = __Vtask_tb_ecc_top__DOT__run_case__38__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__42__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__42__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__42__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__43__exp = __Vtask_tb_ecc_top__DOT__run_case__38__d;
    __Vtask_tb_ecc_top__DOT__do_read__43__a = __Vtask_tb_ecc_top__DOT__run_case__38__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__43__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__43__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__38__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__38__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__38__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__38__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__38__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__38__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__38__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__38__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__38__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__38__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__38__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__38__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__38__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__38__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__38__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__38__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__38__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__38__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__38__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__38__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__38__nflips);
        }
    }
    __Vtask_tb_ecc_top__DOT__run_case__44__verbose = 1U;
    __Vtask_tb_ecc_top__DOT__run_case__44__mask = (
                                                   ([&]() {
                __Vfunc_tb_ecc_top__DOT__bm__45__p = 5U;
                __Vfunc_tb_ecc_top__DOT__bm__45__Vfuncout 
                    = (0x7fffffffffULL & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__45__p));
            }(), __Vfunc_tb_ecc_top__DOT__bm__45__Vfuncout) 
                                                   | ([&]() {
                __Vfunc_tb_ecc_top__DOT__bm__46__p = 6U;
                __Vfunc_tb_ecc_top__DOT__bm__46__Vfuncout 
                    = (0x7fffffffffULL & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__46__p));
            }(), __Vfunc_tb_ecc_top__DOT__bm__46__Vfuncout));
    __Vtask_tb_ecc_top__DOT__run_case__44__d = 0xcafef00dU;
    __Vtask_tb_ecc_top__DOT__run_case__44__a = 9U;
    __Vtask_tb_ecc_top__DOT__run_case__44__name = std::string{"2-bit data flip 5,6"};
    __Vtask_tb_ecc_top__DOT__run_case__44__nflips = 
        VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__44__mask);
    __Vtask_tb_ecc_top__DOT__run_case__44__exp_single 
        = (1U == __Vtask_tb_ecc_top__DOT__run_case__44__nflips);
    __Vtask_tb_ecc_top__DOT__run_case__44__exp_double 
        = (2U == __Vtask_tb_ecc_top__DOT__run_case__44__nflips);
    __Vtask_tb_ecc_top__DOT__do_write__47__d = __Vtask_tb_ecc_top__DOT__run_case__44__d;
    __Vtask_tb_ecc_top__DOT__do_write__47__a = __Vtask_tb_ecc_top__DOT__run_case__44__a;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       51);
    vlSelf->tb_ecc_top__DOT__write_en = 1U;
    vlSelf->tb_ecc_top__DOT__read_en = 0U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__47__a;
    vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__47__d;
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       53);
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__44__mask)) {
        __Vtask_tb_ecc_top__DOT__inject__48__mask = __Vtask_tb_ecc_top__DOT__run_case__44__mask;
        __Vtask_tb_ecc_top__DOT__inject__48__a = __Vtask_tb_ecc_top__DOT__run_case__44__a;
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__48__a] 
            = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
               [__Vtask_tb_ecc_top__DOT__inject__48__a] 
               ^ __Vtask_tb_ecc_top__DOT__inject__48__mask);
    }
    __Vtask_tb_ecc_top__DOT__do_read__49__exp = __Vtask_tb_ecc_top__DOT__run_case__44__d;
    __Vtask_tb_ecc_top__DOT__do_read__49__a = __Vtask_tb_ecc_top__DOT__run_case__44__a;
    vlSelf->tb_ecc_top__DOT__write_en = 0U;
    vlSelf->tb_ecc_top__DOT__read_en = 1U;
    vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__49__a;
    vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__49__exp;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_top.sv", 
                                       66);
    tb_ecc_top__DOT__total_tests = ((IData)(1U) + tb_ecc_top__DOT__total_tests);
    __Vtask_tb_ecc_top__DOT__run_case__44__bad = 0U;
    if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__44__exp_single))) {
        __Vtask_tb_ecc_top__DOT__run_case__44__bad = 1U;
        __Vtask_tb_ecc_top__DOT__run_case__44__bad = 1U;
    }
    if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
         != (IData)(__Vtask_tb_ecc_top__DOT__run_case__44__exp_double))) {
        __Vtask_tb_ecc_top__DOT__run_case__44__bad = 1U;
    }
    if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
        __Vtask_tb_ecc_top__DOT__run_case__44__bad = 1U;
    }
    if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__44__exp_double)) 
         & (vlSelf->tb_ecc_top__DOT__read_data != __Vtask_tb_ecc_top__DOT__run_case__44__d))) {
        __Vtask_tb_ecc_top__DOT__run_case__44__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__44__bad)) {
        tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                       + tb_ecc_top__DOT__mismatches);
        VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                  -1,&(__Vtask_tb_ecc_top__DOT__run_case__44__name),
                  4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__44__a),
                  32,__Vtask_tb_ecc_top__DOT__run_case__44__d,
                  39,__Vtask_tb_ecc_top__DOT__run_case__44__mask,
                  32,vlSelf->tb_ecc_top__DOT__read_data,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                  1,vlSelf->tb_ecc_top__DOT__double_error,
                  1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
    } else {
        if ((0U == __Vtask_tb_ecc_top__DOT__run_case__44__nflips)) {
            tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                        + tb_ecc_top__DOT__n_clean);
        } else if (__Vtask_tb_ecc_top__DOT__run_case__44__exp_single) {
            tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_corrected);
        } else {
            tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                           + tb_ecc_top__DOT__n_detected);
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__44__verbose)) {
            VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__44__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__44__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__44__nflips);
        }
    }
    VL_WRITEF("---- Randomized tests (500 iterations) ----\n");
    tb_ecc_top__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1f4U, tb_ecc_top__DOT__unnamedblk2__DOT__i)) {
        vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a 
            = (0xfU & VL_RANDOM_I());
        vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__d 
            = VL_RANDOM_I();
        vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__kind 
            = VL_URANDOM_RANGE_I(0U, 2U);
        vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__p 
            = VL_URANDOM_RANGE_I(0U, 0x26U);
        vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__q 
            = VL_URANDOM_RANGE_I(0U, 0x26U);
        while ((vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__q 
                == vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__p)) {
            vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__q 
                = VL_URANDOM_RANGE_I(0U, 0x26U);
        }
        vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m = 0ULL;
        if (VL_LTES_III(32, 1U, vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__kind)) {
            __Vtemp_151 = (vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m 
                           | ([&]() {
                        __Vfunc_tb_ecc_top__DOT__bm__50__p 
                            = vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__p;
                        __Vfunc_tb_ecc_top__DOT__bm__50__Vfuncout 
                            = (0x7fffffffffULL & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__50__p));
                    }(), __Vfunc_tb_ecc_top__DOT__bm__50__Vfuncout));
            vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m 
                = __Vtemp_151;
        }
        if ((2U == vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__kind)) {
            __Vtemp_152 = (vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m 
                           | ([&]() {
                        __Vfunc_tb_ecc_top__DOT__bm__51__p 
                            = vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__q;
                        __Vfunc_tb_ecc_top__DOT__bm__51__Vfuncout 
                            = (0x7fffffffffULL & VL_SHIFTL_QQI(39,39,32, 1ULL, __Vfunc_tb_ecc_top__DOT__bm__51__p));
                    }(), __Vfunc_tb_ecc_top__DOT__bm__51__Vfuncout));
            vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m 
                = __Vtemp_152;
        }
        __Vtask_tb_ecc_top__DOT__run_case__52__verbose = 0U;
        __Vtask_tb_ecc_top__DOT__run_case__52__mask 
            = vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__m;
        __Vtask_tb_ecc_top__DOT__run_case__52__d = vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__d;
        __Vtask_tb_ecc_top__DOT__run_case__52__a = vlSelf->tb_ecc_top__DOT__unnamedblk2__DOT__unnamedblk3__DOT__a;
        __Vtask_tb_ecc_top__DOT__run_case__52__name = 
            std::string{"random"};
        __Vtask_tb_ecc_top__DOT__run_case__52__nflips 
            = VL_COUNTONES_Q(__Vtask_tb_ecc_top__DOT__run_case__52__mask);
        __Vtask_tb_ecc_top__DOT__run_case__52__exp_single 
            = (1U == __Vtask_tb_ecc_top__DOT__run_case__52__nflips);
        __Vtask_tb_ecc_top__DOT__run_case__52__exp_double 
            = (2U == __Vtask_tb_ecc_top__DOT__run_case__52__nflips);
        __Vtask_tb_ecc_top__DOT__do_write__53__d = __Vtask_tb_ecc_top__DOT__run_case__52__d;
        __Vtask_tb_ecc_top__DOT__do_write__53__a = __Vtask_tb_ecc_top__DOT__run_case__52__a;
        co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_ecc_top.clk)", 
                                                           "tb/tb_ecc_top.sv", 
                                                           51);
        vlSelf->tb_ecc_top__DOT__write_en = 1U;
        vlSelf->tb_ecc_top__DOT__read_en = 0U;
        vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_write__53__a;
        vlSelf->tb_ecc_top__DOT__write_data = __Vtask_tb_ecc_top__DOT__do_write__53__d;
        co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge tb_ecc_top.clk)", 
                                                           "tb/tb_ecc_top.sv", 
                                                           53);
        vlSelf->tb_ecc_top__DOT__write_en = 0U;
        if ((0ULL != __Vtask_tb_ecc_top__DOT__run_case__52__mask)) {
            __Vtask_tb_ecc_top__DOT__inject__54__mask 
                = __Vtask_tb_ecc_top__DOT__run_case__52__mask;
            __Vtask_tb_ecc_top__DOT__inject__54__a 
                = __Vtask_tb_ecc_top__DOT__run_case__52__a;
            vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_top__DOT__inject__54__a] 
                = (vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
                   [__Vtask_tb_ecc_top__DOT__inject__54__a] 
                   ^ __Vtask_tb_ecc_top__DOT__inject__54__mask);
        }
        __Vtask_tb_ecc_top__DOT__do_read__55__exp = __Vtask_tb_ecc_top__DOT__run_case__52__d;
        __Vtask_tb_ecc_top__DOT__do_read__55__a = __Vtask_tb_ecc_top__DOT__run_case__52__a;
        vlSelf->tb_ecc_top__DOT__write_en = 0U;
        vlSelf->tb_ecc_top__DOT__read_en = 1U;
        vlSelf->tb_ecc_top__DOT__addr = __Vtask_tb_ecc_top__DOT__do_read__55__a;
        vlSelf->tb_ecc_top__DOT__expected_data = __Vtask_tb_ecc_top__DOT__do_read__55__exp;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_ecc_top.sv", 
                                           66);
        tb_ecc_top__DOT__total_tests = ((IData)(1U) 
                                        + tb_ecc_top__DOT__total_tests);
        __Vtask_tb_ecc_top__DOT__run_case__52__bad = 0U;
        if (((IData)(vlSelf->tb_ecc_top__DOT__single_error) 
             != (IData)(__Vtask_tb_ecc_top__DOT__run_case__52__exp_single))) {
            __Vtask_tb_ecc_top__DOT__run_case__52__bad = 1U;
            __Vtask_tb_ecc_top__DOT__run_case__52__bad = 1U;
        }
        if (((IData)(vlSelf->tb_ecc_top__DOT__double_error) 
             != (IData)(__Vtask_tb_ecc_top__DOT__run_case__52__exp_double))) {
            __Vtask_tb_ecc_top__DOT__run_case__52__bad = 1U;
        }
        if (vlSelf->tb_ecc_top__DOT__uncorrectable) {
            __Vtask_tb_ecc_top__DOT__run_case__52__bad = 1U;
        }
        if (((~ (IData)(__Vtask_tb_ecc_top__DOT__run_case__52__exp_double)) 
             & (vlSelf->tb_ecc_top__DOT__read_data 
                != __Vtask_tb_ecc_top__DOT__run_case__52__d))) {
            __Vtask_tb_ecc_top__DOT__run_case__52__bad = 1U;
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__52__bad)) {
            tb_ecc_top__DOT__mismatches = ((IData)(1U) 
                                           + tb_ecc_top__DOT__mismatches);
            VL_WRITEF("[FAIL] %@ a=%0# data=%x mask=%x | got d=%x s=%b d=%b u=%b\n",
                      -1,&(__Vtask_tb_ecc_top__DOT__run_case__52__name),
                      4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__52__a),
                      32,__Vtask_tb_ecc_top__DOT__run_case__52__d,
                      39,__Vtask_tb_ecc_top__DOT__run_case__52__mask,
                      32,vlSelf->tb_ecc_top__DOT__read_data,
                      1,(IData)(vlSelf->tb_ecc_top__DOT__single_error),
                      1,vlSelf->tb_ecc_top__DOT__double_error,
                      1,(IData)(vlSelf->tb_ecc_top__DOT__uncorrectable));
        } else {
            if ((0U == __Vtask_tb_ecc_top__DOT__run_case__52__nflips)) {
                tb_ecc_top__DOT__n_clean = ((IData)(1U) 
                                            + tb_ecc_top__DOT__n_clean);
            } else if (__Vtask_tb_ecc_top__DOT__run_case__52__exp_single) {
                tb_ecc_top__DOT__n_corrected = ((IData)(1U) 
                                                + tb_ecc_top__DOT__n_corrected);
            } else {
                tb_ecc_top__DOT__n_detected = ((IData)(1U) 
                                               + tb_ecc_top__DOT__n_detected);
            }
            if (VL_UNLIKELY(__Vtask_tb_ecc_top__DOT__run_case__52__verbose)) {
                VL_WRITEF("[PASS] %@ (a=%0#, flips=%0d)\n",
                          -1,&(__Vtask_tb_ecc_top__DOT__run_case__52__name),
                          4,(IData)(__Vtask_tb_ecc_top__DOT__run_case__52__a),
                          32,__Vtask_tb_ecc_top__DOT__run_case__52__nflips);
            }
        }
        tb_ecc_top__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                + tb_ecc_top__DOT__unnamedblk2__DOT__i);
    }
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       152);
    co_await vlSelf->__VtrigSched_h6a8fa2ea__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_top.clk)", 
                                                       "tb/tb_ecc_top.sv", 
                                                       152);
    VL_WRITEF("==========================================\n ECC TESTBENCH SUMMARY\n==========================================\n Total tests          : %0d\n Clean (no error)     : %0d\n Corrected (1-bit)    : %0d\n Detected (2-bit)     : %0d\n Mismatches           : %0d\n Assertion failures   : %0d\n",
              32,tb_ecc_top__DOT__total_tests,32,tb_ecc_top__DOT__n_clean,
              32,tb_ecc_top__DOT__n_corrected,32,tb_ecc_top__DOT__n_detected,
              32,tb_ecc_top__DOT__mismatches,32,vlSelf->tb_ecc_top__DOT__assert_fails);
    if (((0U == tb_ecc_top__DOT__mismatches) & (0U 
                                                == vlSelf->tb_ecc_top__DOT__assert_fails))) {
        VL_WRITEF(" RESULT: PASS\n");
    } else {
        VL_WRITEF(" RESULT: FAIL\n");
    }
    VL_WRITEF("==========================================\n");
    VL_FINISH_MT("tb/tb_ecc_top.sv", 166, "");
}

VL_INLINE_OPT VlCoroutine Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__1(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/tb_ecc_top.sv", 
                                           18);
        vlSelf->__Vdlyvval__tb_ecc_top__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_ecc_top__DOT__clk)));
        vlSelf->__Vdlyvset__tb_ecc_top__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vtb_ecc_top___024root___act_comb__TOP__0(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___act_comb__TOP__0\n"); );
    // Init
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__stored_cw;
    tb_ecc_top__DOT__dut__DOT__stored_cw = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_single;
    tb_ecc_top__DOT__dut__DOT__dec_single = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_double;
    tb_ecc_top__DOT__dut__DOT__dec_double = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_uncorr;
    tb_ecc_top__DOT__dut__DOT__dec_uncorr = 0;
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 = 0;
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed = 0;
    CData/*5:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 = 0;
    // Body
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0ULL;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & vlSelf->tb_ecc_top__DOT__write_data);
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffff7ULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 1U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffdfULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 2U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffbfULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 6U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 3U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffff7fULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 7U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 4U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffdffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 9U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 5U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffbffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xaU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 6U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffff7ffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xbU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 7U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffefffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xcU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 8U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffdfffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xdU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 9U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffbfffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xeU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xaU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffff7fffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xfU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xbU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffdffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x11U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xcU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffbffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x12U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xdU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffff7ffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x13U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xeU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffefffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x14U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xfU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffdfffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x15U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x10U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffbfffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x16U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x11U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fff7fffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x17U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x12U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffeffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x18U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x13U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffdffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x19U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x14U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffbffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1aU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x15U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ff7ffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1bU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x16U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fefffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1cU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x17U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fdfffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1dU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x18U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fbfffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1eU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x19U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7f7fffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1fU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1aU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7dffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x21U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1bU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7bffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x22U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1cU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x77ffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x23U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1dU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x6fffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x24U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1eU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x5fffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x25U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (vlSelf->tb_ecc_top__DOT__write_data >> 0x1fU);
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x3fffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 5U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 9U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x11U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x21U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffdULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffbULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 5U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffefULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 9U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffeffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 8U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x11U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffeffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x10U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x21U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7effffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x20U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffeULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | (IData)((IData)((1U & VL_REDXOR_64((0x3fffffffffULL 
                                                 & (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                                                    >> 1U)))))));
    vlSelf->tb_ecc_top__DOT__dut__DOT__enc_cw = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
    vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid = 
        ((~ (IData)(vlSelf->tb_ecc_top__DOT__write_en)) 
         & (IData)(vlSelf->tb_ecc_top__DOT__read_en));
    tb_ecc_top__DOT__dut__DOT__stored_cw = vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
        [vlSelf->tb_ecc_top__DOT__addr];
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn = 0U;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                         >> 1U)));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 3U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 5U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 9U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x11U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x21U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 2U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 3U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x26U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 4U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 5U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x26U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 8U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 9U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x10U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x11U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x20U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x21U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (IData)((((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                    >> 5U) ^ (tb_ecc_top__DOT__dut__DOT__stored_cw 
                              >> 0x26U)));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr 
        = (1U & VL_REDXOR_64(tb_ecc_top__DOT__dut__DOT__stored_cw));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
        = tb_ecc_top__DOT__dut__DOT__stored_cw;
    tb_ecc_top__DOT__dut__DOT__dec_single = 0U;
    tb_ecc_top__DOT__dut__DOT__dec_double = 0U;
    tb_ecc_top__DOT__dut__DOT__dec_uncorr = 0U;
    if (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr) {
        if ((0U == (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
            tb_ecc_top__DOT__dut__DOT__dec_single = 1U;
        } else if ((0x26U >= (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
            vlSelf->tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0 
                = (1U & (~ ((0x26U >= (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
                            && (1U & (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                              >> (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)))))));
            tb_ecc_top__DOT__dut__DOT__dec_single = 1U;
            if ((0x26U >= (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
                tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                    = (((~ (1ULL << (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) 
                        & tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed) 
                       | (0x7fffffffffULL & ((QData)((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0)) 
                                             << (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))));
            }
        } else {
            tb_ecc_top__DOT__dut__DOT__dec_uncorr = 1U;
        }
    } else if ((0U != (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
        tb_ecc_top__DOT__dut__DOT__dec_double = 1U;
    }
    vlSelf->tb_ecc_top__DOT__read_data = 0U;
    vlSelf->tb_ecc_top__DOT__read_data = ((0xfffffff8U 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((4U & 
                                              ((IData)(
                                                       (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                        >> 6U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                              >> 3U))))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xffffffc7U 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((0x20U 
                                              & ((IData)(
                                                         (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                          >> 0xaU)) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 9U)) 
                                                    << 4U)) 
                                                | (8U 
                                                   & ((IData)(
                                                              (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                               >> 7U)) 
                                                      << 3U)))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xffffe03fU 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                          >> 0x12U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 0x11U)) 
                                                    << 0xbU)) 
                                                | (0x7c0U 
                                                   & ((IData)(
                                                              (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                               >> 0xbU)) 
                                                      << 6U)))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xf0001fffU 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((0x8000000U 
                                              & ((IData)(
                                                         (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                          >> 0x22U)) 
                                                 << 0x1bU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 0x21U)) 
                                                    << 0x1aU)) 
                                                | (0x3ffe000U 
                                                   & ((IData)(
                                                              (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                               >> 0x13U)) 
                                                      << 0xdU)))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xfffffffU 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((IData)(
                                                     (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                      >> 0x23U)) 
                                             << 0x1cU));
    vlSelf->tb_ecc_top__DOT__single_error = ((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid) 
                                             & (IData)(tb_ecc_top__DOT__dut__DOT__dec_single));
    vlSelf->tb_ecc_top__DOT__double_error = ((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid) 
                                             & (IData)(tb_ecc_top__DOT__dut__DOT__dec_double));
    vlSelf->tb_ecc_top__DOT__uncorrectable = ((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid) 
                                              & (IData)(tb_ecc_top__DOT__dut__DOT__dec_uncorr));
}

void Vtb_ecc_top___024root___eval_act(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_ecc_top___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ecc_top___024root___nba_sequent__TOP__1(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_ecc_top__DOT__clk__v0) {
        vlSelf->tb_ecc_top__DOT__clk = vlSelf->__Vdlyvval__tb_ecc_top__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_ecc_top__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vtb_ecc_top___024root___nba_comb__TOP__0(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___nba_comb__TOP__0\n"); );
    // Init
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 = 0;
    // Body
    vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid = 
        ((~ (IData)(vlSelf->tb_ecc_top__DOT__write_en)) 
         & (IData)(vlSelf->tb_ecc_top__DOT__read_en));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0ULL;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & vlSelf->tb_ecc_top__DOT__write_data);
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffff7ULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 1U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffdfULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 2U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffbfULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 6U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 3U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffff7fULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 7U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 4U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffdffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 9U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 5U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffbffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xaU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 6U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffff7ffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xbU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 7U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffefffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xcU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 8U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffdfffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xdU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 9U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffbfffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xeU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xaU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffff7fffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xfU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xbU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffdffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x11U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xcU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffbffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x12U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xdU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffff7ffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x13U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xeU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffefffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x14U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0xfU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffdfffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x15U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x10U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffbfffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x16U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x11U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fff7fffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x17U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x12U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffeffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x18U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x13U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffdffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x19U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x14U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffbffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1aU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x15U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ff7ffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1bU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x16U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fefffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1cU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x17U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fdfffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1dU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x18U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fbfffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1eU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x19U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7f7fffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1fU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1aU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7dffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x21U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1bU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7bffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x22U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1cU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x77ffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x23U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1dU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x6fffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x24U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_top__DOT__write_data 
                 >> 0x1eU));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x5fffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x25U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (vlSelf->tb_ecc_top__DOT__write_data >> 0x1fU);
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x3fffffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 5U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 9U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x11U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x21U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffdULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffbULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 5U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffefULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 9U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffeffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 8U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x11U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffeffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x10U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x21U)));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7effffffffULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_top__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x20U));
    tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffeULL & tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | (IData)((IData)((1U & VL_REDXOR_64((0x3fffffffffULL 
                                                 & (tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                                                    >> 1U)))))));
    vlSelf->tb_ecc_top__DOT__dut__DOT__enc_cw = tb_ecc_top__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
}

VL_INLINE_OPT void Vtb_ecc_top___024root___nba_comb__TOP__1(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___nba_comb__TOP__1\n"); );
    // Init
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__stored_cw;
    tb_ecc_top__DOT__dut__DOT__stored_cw = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_single;
    tb_ecc_top__DOT__dut__DOT__dec_single = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_double;
    tb_ecc_top__DOT__dut__DOT__dec_double = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__dec_uncorr;
    tb_ecc_top__DOT__dut__DOT__dec_uncorr = 0;
    QData/*38:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed = 0;
    CData/*5:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr = 0;
    CData/*0:0*/ tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 = 0;
    // Body
    tb_ecc_top__DOT__dut__DOT__stored_cw = vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem
        [vlSelf->tb_ecc_top__DOT__addr];
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn = 0U;
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                         >> 1U)));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 3U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 5U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 9U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x11U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x21U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                            >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 2U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 3U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x26U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 4U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 5U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 6U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 7U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x26U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 8U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 9U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xaU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xbU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xcU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xdU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x10U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x11U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x12U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x13U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x14U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x15U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x18U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x19U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x20U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x21U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x22U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x23U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x24U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                    >> 0x25U))));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (IData)((((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                    >> 5U) ^ (tb_ecc_top__DOT__dut__DOT__stored_cw 
                              >> 0x26U)));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr 
        = (1U & VL_REDXOR_64(tb_ecc_top__DOT__dut__DOT__stored_cw));
    tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
        = tb_ecc_top__DOT__dut__DOT__stored_cw;
    tb_ecc_top__DOT__dut__DOT__dec_single = 0U;
    tb_ecc_top__DOT__dut__DOT__dec_double = 0U;
    tb_ecc_top__DOT__dut__DOT__dec_uncorr = 0U;
    if (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr) {
        if ((0U == (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
            tb_ecc_top__DOT__dut__DOT__dec_single = 1U;
        } else if ((0x26U >= (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
            vlSelf->tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0 
                = (1U & (~ ((0x26U >= (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
                            && (1U & (IData)((tb_ecc_top__DOT__dut__DOT__stored_cw 
                                              >> (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)))))));
            tb_ecc_top__DOT__dut__DOT__dec_single = 1U;
            if ((0x26U >= (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
                tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                    = (((~ (1ULL << (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) 
                        & tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed) 
                       | (0x7fffffffffULL & ((QData)((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0)) 
                                             << (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))));
            }
        } else {
            tb_ecc_top__DOT__dut__DOT__dec_uncorr = 1U;
        }
    } else if ((0U != (IData)(tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
        tb_ecc_top__DOT__dut__DOT__dec_double = 1U;
    }
    vlSelf->tb_ecc_top__DOT__read_data = 0U;
    vlSelf->tb_ecc_top__DOT__read_data = ((0xfffffff8U 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((4U & 
                                              ((IData)(
                                                       (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                        >> 6U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                              >> 3U))))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xffffffc7U 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((0x20U 
                                              & ((IData)(
                                                         (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                          >> 0xaU)) 
                                                 << 5U)) 
                                             | ((0x10U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 9U)) 
                                                    << 4U)) 
                                                | (8U 
                                                   & ((IData)(
                                                              (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                               >> 7U)) 
                                                      << 3U)))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xffffe03fU 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((0x1000U 
                                              & ((IData)(
                                                         (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                          >> 0x12U)) 
                                                 << 0xcU)) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 0x11U)) 
                                                    << 0xbU)) 
                                                | (0x7c0U 
                                                   & ((IData)(
                                                              (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                               >> 0xbU)) 
                                                      << 6U)))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xf0001fffU 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((0x8000000U 
                                              & ((IData)(
                                                         (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                          >> 0x22U)) 
                                                 << 0x1bU)) 
                                             | ((0x4000000U 
                                                 & ((IData)(
                                                            (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 0x21U)) 
                                                    << 0x1aU)) 
                                                | (0x3ffe000U 
                                                   & ((IData)(
                                                              (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                               >> 0x13U)) 
                                                      << 0xdU)))));
    vlSelf->tb_ecc_top__DOT__read_data = ((0xfffffffU 
                                           & vlSelf->tb_ecc_top__DOT__read_data) 
                                          | ((IData)(
                                                     (tb_ecc_top__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                      >> 0x23U)) 
                                             << 0x1cU));
    vlSelf->tb_ecc_top__DOT__single_error = ((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid) 
                                             & (IData)(tb_ecc_top__DOT__dut__DOT__dec_single));
    vlSelf->tb_ecc_top__DOT__double_error = ((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid) 
                                             & (IData)(tb_ecc_top__DOT__dut__DOT__dec_double));
    vlSelf->tb_ecc_top__DOT__uncorrectable = ((IData)(vlSelf->tb_ecc_top__DOT__dut__DOT__read_valid) 
                                              & (IData)(tb_ecc_top__DOT__dut__DOT__dec_uncorr));
}

void Vtb_ecc_top___024root___nba_sequent__TOP__0(Vtb_ecc_top___024root* vlSelf);

void Vtb_ecc_top___024root___eval_nba(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_top___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_ecc_top___024root___timing_resume(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6a8fa2ea__0.resume("@(negedge tb_ecc_top.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_ecc_top___024root___timing_commit(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6a8fa2ea__0.commit("@(negedge tb_ecc_top.clk)");
    }
}

void Vtb_ecc_top___024root___eval_triggers__act(Vtb_ecc_top___024root* vlSelf);

bool Vtb_ecc_top___024root___eval_phase__act(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ecc_top___024root___eval_triggers__act(vlSelf);
    Vtb_ecc_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_ecc_top___024root___timing_resume(vlSelf);
        Vtb_ecc_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ecc_top___024root___eval_phase__nba(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ecc_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_top___024root___dump_triggers__nba(Vtb_ecc_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_top___024root___dump_triggers__act(Vtb_ecc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ecc_top___024root___eval(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval\n"); );
    // Init
    vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__write_en 
        = vlSelf->tb_ecc_top__DOT__write_en;
    vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__read_en 
        = vlSelf->tb_ecc_top__DOT__read_en;
    vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__single_error 
        = vlSelf->tb_ecc_top__DOT__single_error;
    vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__double_error 
        = vlSelf->tb_ecc_top__DOT__double_error;
    vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__uncorrectable 
        = vlSelf->tb_ecc_top__DOT__uncorrectable;
    vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__read_data 
        = vlSelf->tb_ecc_top__DOT__read_data;
    vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__expected_data 
        = vlSelf->tb_ecc_top__DOT__expected_data;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ecc_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_ecc_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ecc_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_ecc_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_ecc_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_ecc_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ecc_top___024root___eval_debug_assertions(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
