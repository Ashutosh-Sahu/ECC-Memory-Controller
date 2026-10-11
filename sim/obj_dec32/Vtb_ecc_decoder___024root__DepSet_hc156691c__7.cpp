// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_decoder.h for the primary calling header

#include "Vtb_ecc_decoder__pch.h"
#include "Vtb_ecc_decoder___024root.h"

VlCoroutine Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__7(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__7\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__15__mask;
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0;
    // Body
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000002ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=1,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xcULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,3\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x14ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x24ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x44ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x84ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x104ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x204ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x404ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x804ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000004ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=2,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x18ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x28ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x48ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x88ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x108ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x208ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x408ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x808ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000008ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=3,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x30ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x50ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x90ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x110ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x210ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x410ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x810ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000010ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=4,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x60ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x120ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x220ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x420ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x820ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000020ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=5,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x140ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x240ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x440ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x840ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000040ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=6,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x180ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x280ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x480ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x880ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000080ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=7,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x300ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x500ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x900ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000100ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=8,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x600ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,10\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa00ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000200ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=9,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc00ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,11\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000400ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=10,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,12\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000000800ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=11,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x3000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,13\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x5000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x9000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x11000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x21000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x41000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x81000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x101000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x201000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x401000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x801000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
}
