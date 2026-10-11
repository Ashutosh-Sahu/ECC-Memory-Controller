// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_decoder.h for the primary calling header

#include "Vtb_ecc_decoder__pch.h"
#include "Vtb_ecc_decoder___024root.h"

VlCoroutine Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__15(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__15\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__28__d;
    __Vtask_tb_ecc_decoder__DOT__apply__28__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__28__mask;
    __Vtask_tb_ecc_decoder__DOT__apply__28__mask = 0;
    // Body
    __Vtask_tb_ecc_decoder__DOT__apply__28__mask = 0x100010002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__28__d = 0xdeadbeefU;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__28__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__28__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_uncorr = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_uncorr);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error))))) {
        VL_WRITEF("FAIL uncorrectable case\n");
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    VL_WRITEF("cases: none=%0d single=%0d double=%0d uncorr=%0d\n",
              32,vlSelf->tb_ecc_decoder__DOT__n_none,
              32,vlSelf->tb_ecc_decoder__DOT__n_single,
              32,vlSelf->tb_ecc_decoder__DOT__n_double,
              32,vlSelf->tb_ecc_decoder__DOT__n_uncorr);
    if ((0U == vlSelf->tb_ecc_decoder__DOT__errors)) {
        VL_WRITEF("ALL DECODER TESTS PASSED\n");
    } else {
        VL_WRITEF("DECODER TESTS FAILED: %0d\n",32,
                  vlSelf->tb_ecc_decoder__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_ecc_decoder.sv", 75, "");
}

VL_INLINE_OPT void Vtb_ecc_decoder___024root___act_sequent__TOP__0(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___act_sequent__TOP__0\n"); );
    // Init
    QData/*38:0*/ tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw = 0;
    CData/*0:0*/ tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par = 0;
    CData/*0:0*/ tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0;
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 = 0;
    CData/*0:0*/ tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0;
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0 = 0;
    QData/*38:0*/ tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed;
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed = 0;
    CData/*5:0*/ tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn;
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn = 0;
    CData/*0:0*/ tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__ovr;
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__ovr = 0;
    CData/*0:0*/ tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0;
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 = 0;
    // Body
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw = 0ULL;
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & vlSelf->tb_ecc_decoder__DOT__data);
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffff7ULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 3U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 1U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffdfULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 5U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 2U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffbfULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 6U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 3U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffff7fULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 7U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 4U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffdffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 9U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 5U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffbffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xaU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 6U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffff7ffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xbU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 7U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffefffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xcU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 8U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffdfffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xdU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 9U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffbfffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xeU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0xaU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffff7fffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xfU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0xbU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffdffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x11U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0xcU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffbffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x12U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0xdU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffff7ffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x13U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0xeU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffefffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x14U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0xfU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffdfffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x15U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x10U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffbfffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x16U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x11U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fff7fffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x17U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x12U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffeffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x18U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x13U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffdffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x19U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x14U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffbffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1aU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x15U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ff7ffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1bU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x16U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fefffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1cU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x17U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fdfffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1dU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x18U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fbfffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1eU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x19U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7f7fffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1fU));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x1aU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7dffffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x21U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x1bU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7bffffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x22U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x1cU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x77ffffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x23U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x1dU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x6fffffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x24U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_decoder__DOT__data 
                 >> 0x1eU));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x5fffffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x25U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0 
        = (vlSelf->tb_ecc_decoder__DOT__data >> 0x1fU);
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x3fffffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x26U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 5U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 9U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x11U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x21U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffdULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 1U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffbULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 2U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                         >> 5U)));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffefULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 4U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                         >> 9U)));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffeffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 8U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x11U)));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffeffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x10U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x21U)));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7effffffffULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_decoder__DOT__enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x20U));
    tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffeULL & tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw) 
           | (IData)((IData)((1U & VL_REDXOR_64((0x3fffffffffULL 
                                                 & (tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw 
                                                    >> 1U)))))));
    vlSelf->tb_ecc_decoder__DOT__codeword = tb_ecc_decoder__DOT__enc__DOT__unnamedblk1__DOT__cw;
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn = 0U;
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                         >> 1U)));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 3U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 5U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 7U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 9U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0xbU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0xdU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0xfU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x11U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x13U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x15U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x17U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x19U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x1bU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x1dU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x1fU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x21U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x23U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                            >> 0x25U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 2U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 3U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 6U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 7U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xaU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xbU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xeU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xfU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x12U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x13U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x16U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x17U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1aU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1bU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1eU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1fU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x22U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x23U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x26U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 4U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 5U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 6U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 7U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xcU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xdU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xeU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xfU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x14U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x15U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x16U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x17U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1cU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1dU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1eU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1fU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x24U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x25U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x26U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 8U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 9U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xaU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xbU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xcU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xdU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xeU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0xfU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x18U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x19U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1aU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1bU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1cU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1dU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1eU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1fU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x10U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x11U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x12U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x13U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x14U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x15U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x16U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x17U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x18U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x19U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1aU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1bU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1cU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1dU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1eU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x1fU))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x20U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x21U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x22U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x23U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x24U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                    >> 0x25U))));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0 
        = (IData)((((IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn) 
                    >> 5U) ^ (vlSelf->tb_ecc_decoder__DOT__rx 
                              >> 0x26U)));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_decoder__DOT__dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__ovr 
        = (1U & VL_REDXOR_64(vlSelf->tb_ecc_decoder__DOT__rx));
    tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
        = vlSelf->tb_ecc_decoder__DOT__rx;
    vlSelf->tb_ecc_decoder__DOT__single_error = 0U;
    vlSelf->tb_ecc_decoder__DOT__double_error = 0U;
    vlSelf->tb_ecc_decoder__DOT__uncorrectable = 0U;
    if (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__ovr) {
        if ((0U == (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn))) {
            vlSelf->tb_ecc_decoder__DOT__single_error = 1U;
        } else if ((0x26U >= (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn))) {
            vlSelf->tb_ecc_decoder__DOT__dec__DOT____Vlvbound_h479adeca__0 
                = (1U & (~ ((0x26U >= (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)) 
                            && (1U & (IData)((vlSelf->tb_ecc_decoder__DOT__rx 
                                              >> (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn)))))));
            vlSelf->tb_ecc_decoder__DOT__single_error = 1U;
            if ((0x26U >= (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn))) {
                tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                    = (((~ (1ULL << (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn))) 
                        & tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed) 
                       | (0x7fffffffffULL & ((QData)((IData)(vlSelf->tb_ecc_decoder__DOT__dec__DOT____Vlvbound_h479adeca__0)) 
                                             << (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn))));
            }
        } else {
            vlSelf->tb_ecc_decoder__DOT__uncorrectable = 1U;
        }
    } else if ((0U != (IData)(tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__syn))) {
        vlSelf->tb_ecc_decoder__DOT__double_error = 1U;
    }
    vlSelf->tb_ecc_decoder__DOT__corrected_data = 0U;
    vlSelf->tb_ecc_decoder__DOT__corrected_data = (
                                                   (0xfffffff8U 
                                                    & vlSelf->tb_ecc_decoder__DOT__corrected_data) 
                                                   | ((4U 
                                                       & ((IData)(
                                                                  (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                   >> 6U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & ((IData)(
                                                                     (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                      >> 5U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                       >> 3U))))));
    vlSelf->tb_ecc_decoder__DOT__corrected_data = (
                                                   (0xffffffc7U 
                                                    & vlSelf->tb_ecc_decoder__DOT__corrected_data) 
                                                   | ((0x20U 
                                                       & ((IData)(
                                                                  (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                   >> 0xaU)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((IData)(
                                                                     (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                      >> 9U)) 
                                                             << 4U)) 
                                                         | (8U 
                                                            & ((IData)(
                                                                       (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                        >> 7U)) 
                                                               << 3U)))));
    vlSelf->tb_ecc_decoder__DOT__corrected_data = (
                                                   (0xffffe03fU 
                                                    & vlSelf->tb_ecc_decoder__DOT__corrected_data) 
                                                   | ((0x1000U 
                                                       & ((IData)(
                                                                  (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                   >> 0x12U)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                      >> 0x11U)) 
                                                             << 0xbU)) 
                                                         | (0x7c0U 
                                                            & ((IData)(
                                                                       (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                        >> 0xbU)) 
                                                               << 6U)))));
    vlSelf->tb_ecc_decoder__DOT__corrected_data = (
                                                   (0xf0001fffU 
                                                    & vlSelf->tb_ecc_decoder__DOT__corrected_data) 
                                                   | ((0x8000000U 
                                                       & ((IData)(
                                                                  (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                   >> 0x22U)) 
                                                          << 0x1bU)) 
                                                      | ((0x4000000U 
                                                          & ((IData)(
                                                                     (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                      >> 0x21U)) 
                                                             << 0x1aU)) 
                                                         | (0x3ffe000U 
                                                            & ((IData)(
                                                                       (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                                        >> 0x13U)) 
                                                               << 0xdU)))));
    vlSelf->tb_ecc_decoder__DOT__corrected_data = (
                                                   (0xfffffffU 
                                                    & vlSelf->tb_ecc_decoder__DOT__corrected_data) 
                                                   | ((IData)(
                                                              (tb_ecc_decoder__DOT__dec__DOT__unnamedblk1__DOT__fixed 
                                                               >> 0x23U)) 
                                                      << 0x1cU));
}

void Vtb_ecc_decoder___024root___eval_act(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_ecc_decoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ecc_decoder___024root___eval_nba(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_decoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ecc_decoder___024root___timing_resume(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_ecc_decoder___024root___eval_triggers__act(Vtb_ecc_decoder___024root* vlSelf);

bool Vtb_ecc_decoder___024root___eval_phase__act(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ecc_decoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_ecc_decoder___024root___timing_resume(vlSelf);
        Vtb_ecc_decoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ecc_decoder___024root___eval_phase__nba(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ecc_decoder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_decoder___024root___dump_triggers__nba(Vtb_ecc_decoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_decoder___024root___dump_triggers__act(Vtb_ecc_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ecc_decoder___024root___eval(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ecc_decoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_ecc_decoder.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ecc_decoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_ecc_decoder.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_ecc_decoder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_ecc_decoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ecc_decoder___024root___eval_debug_assertions(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
