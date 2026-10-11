// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_decoder.h for the primary calling header

#include "Vtb_ecc_decoder__pch.h"
#include "Vtb_ecc_decoder___024root.h"

VlCoroutine Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__5(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__5\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = 0;
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x30ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x50ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x90ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x110ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x210ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x410ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x810ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x60ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0xa0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x120ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x220ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x420ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x820ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0xc0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x140ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x240ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x440ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x840ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x180ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x280ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x480ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x880ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x300ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x500ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x900ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x600ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0xa00ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0xc00ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x3000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x5000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x9000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x11000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x21000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x41000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x81000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x101000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x201000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x401000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x801000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x6000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0xa000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x12000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x22000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x42000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x82000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x102000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x202000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x402000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x802000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0xc000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x14000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x24000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x44000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x84000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x104000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x204000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x404000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x804000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x18000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x28000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x48000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x88000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x108000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x208000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x408000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x808000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x8008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x10008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x20008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x40008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x80008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x100008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x200008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x400008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x800008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x1000008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x2000008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x4000008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x30000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x50000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x90000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x110000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x210000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask = 0x410000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__11__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__11__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__11__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__8__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
}
