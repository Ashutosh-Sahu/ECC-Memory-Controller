// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_decoder.h for the primary calling header

#include "Vtb_ecc_decoder__pch.h"
#include "Vtb_ecc_decoder___024root.h"

VlCoroutine Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__2(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__3__mask;
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__5__d;
    __Vtask_tb_ecc_decoder__DOT__apply__5__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__5__mask;
    __Vtask_tb_ecc_decoder__DOT__apply__5__mask = 0;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__6__mask;
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = 0;
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x802000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1002000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2002000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4002000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0xc000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x14000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x24000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x44000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x84000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x104000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x204000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x404000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x804000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1004000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2004000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4004000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x18000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x28000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x48000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x88000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x108000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x208000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x408000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x808000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1008000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2008000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4008000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x30000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x50000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x90000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x110000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x210000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x410000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x810000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1010000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2010000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4010000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x60000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0xa0000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x120000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x220000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x420000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x820000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1020000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2020000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4020000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0xc0000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x140000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x240000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x440000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x840000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1040000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2040000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4040000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x180000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x280000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x480000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x880000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1080000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2080000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4080000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x300000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x500000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x900000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1100000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2100000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4100000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x600000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0xa00000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1200000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2200000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4200000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0xc00000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1400000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2400000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4400000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x1800000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=35,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x2800000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=35,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x4800000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=35,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x3000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=36,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x5000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=36,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__3__mask = 0x6000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__3__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__3__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__3__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=37,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__0__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d = 0xffffffffU;
    __Vtask_tb_ecc_decoder__DOT__apply__5__mask = 0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__5__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__5__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__5__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_none = ((IData)(1U) 
                                           + vlSelf->tb_ecc_decoder__DOT__n_none);
    if (VL_UNLIKELY(((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                        != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                       | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                      | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                     | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable)))) {
        VL_WRITEF("FAIL none   data=%x\n",32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 1ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=0\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 2ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=1\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 4ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=2\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 8ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=3\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x10ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x20ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x40ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x80ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=10\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=11\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x1000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=12\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x2000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=13\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x4000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=14\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x8000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=15\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x10000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=16\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x20000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=17\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x40000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=18\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x80000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=19\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=20\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=21\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=22\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=23\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x1000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=24\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x2000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=25\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x4000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=26\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x8000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=27\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x10000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=28\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x20000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=29\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x40000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=30\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x80000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=31\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x100000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=32\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x200000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=33\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x400000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=34\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x800000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=35\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x1000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=36\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x2000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=37\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__6__mask = 0x4000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__6__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__6__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__6__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=38\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 3ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,1\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 5ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,2\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 9ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,3\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x11ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x21ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x41ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x81ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x101ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x201ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x401ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x801ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000000001ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=0,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 6ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,2\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0xaULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,3\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x12ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x22ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x42ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x82ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x102ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x202ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x402ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x802ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0xcULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,3\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x14ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x24ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x44ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x84ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x104ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x204ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x404ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x804ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x18ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x28ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x48ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x88ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x108ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x208ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x408ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x808ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x30ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x50ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x90ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x110ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x210ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x410ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x810ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x60ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0xa0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x120ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x220ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x420ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x820ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x100000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x200000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x400000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x800000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0xc0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x140ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x240ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x440ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x840ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x1040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x2040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x4040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x8040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x10040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x20040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x40040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask = 0x80040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__7__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__4__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__7__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__7__mask);
}
