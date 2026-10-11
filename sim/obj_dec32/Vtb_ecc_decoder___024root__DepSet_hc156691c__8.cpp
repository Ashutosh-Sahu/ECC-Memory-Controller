// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_decoder.h for the primary calling header

#include "Vtb_ecc_decoder__pch.h"
#include "Vtb_ecc_decoder___024root.h"

VlCoroutine Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__8(Vtb_ecc_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_decoder___024root___eval_initial__TOP__Vtiming__0__8\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__15__mask;
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0;
    IData/*31:0*/ __Vtask_tb_ecc_decoder__DOT__apply__17__d;
    __Vtask_tb_ecc_decoder__DOT__apply__17__d = 0;
    QData/*38:0*/ __Vtask_tb_ecc_decoder__DOT__apply__17__mask;
    __Vtask_tb_ecc_decoder__DOT__apply__17__mask = 0;
    // Body
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000001000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=12,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x6000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,14\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x12000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x22000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x42000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x82000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x102000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x202000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x402000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x802000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000002000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=13,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,15\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x14000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x24000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x44000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x84000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x104000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x204000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x404000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x804000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000004000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=14,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x18000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,16\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x28000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x48000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x88000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x108000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x208000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x408000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x808000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000008000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=15,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x30000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,17\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x50000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x90000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x110000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x210000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x410000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x810000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000010000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=16,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x60000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,18\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa0000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x120000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x220000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x420000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x820000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000020000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=17,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc0000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,19\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x140000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x240000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x440000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x840000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000040000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=18,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x180000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,20\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x280000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x480000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x880000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000080000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=19,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x300000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,21\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x500000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x900000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000100000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=20,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x600000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,22\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa00000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000200000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=21,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc00000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,23\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000400000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=22,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,24\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x8800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x10800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x20800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x40800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x80800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x100800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x200800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x400800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x800800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1000800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2000800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4000800000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=23,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x3000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,25\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x5000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x9000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x11000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x21000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x41000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x81000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x101000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x201000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x401000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x801000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1001000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2001000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4001000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=24,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x6000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,26\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x12000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x22000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x42000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x82000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x102000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x202000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x402000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x802000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1002000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2002000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4002000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=25,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,27\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x14000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x24000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x44000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x84000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x104000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x204000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x404000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x804000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1004000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2004000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4004000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=26,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x18000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,28\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x28000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x48000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x88000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x108000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x208000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x408000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x808000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1008000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2008000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4008000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=27,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x30000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,29\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x50000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x90000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x110000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x210000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x410000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x810000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1010000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2010000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4010000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=28,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x60000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,30\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa0000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x120000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x220000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x420000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x820000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1020000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2020000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4020000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=29,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc0000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,31\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x140000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x240000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x440000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x840000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1040000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2040000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4040000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=30,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x180000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,32\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x280000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x480000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x880000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1080000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2080000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4080000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=31,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x300000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,33\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x500000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x900000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1100000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2100000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4100000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=32,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x600000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,34\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xa00000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1200000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2200000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4200000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=33,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0xc00000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,35\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1400000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2400000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4400000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=34,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x1800000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=35,36\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x2800000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=35,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x4800000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=35,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x3000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=36,37\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x5000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=36,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    __Vtask_tb_ecc_decoder__DOT__apply__15__mask = 0x6000000000ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__15__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__15__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__15__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_double = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_double);
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL double data=%x pos=37,38\n",
                  32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__12__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d = 1U;
    __Vtask_tb_ecc_decoder__DOT__apply__17__mask = 0ULL;
    __Vtask_tb_ecc_decoder__DOT__apply__17__d = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = __Vtask_tb_ecc_decoder__DOT__apply__17__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ __Vtask_tb_ecc_decoder__DOT__apply__17__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_none = ((IData)(1U) 
                                           + vlSelf->tb_ecc_decoder__DOT__n_none);
    if (VL_UNLIKELY(((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                        != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                       | (IData)(vlSelf->tb_ecc_decoder__DOT__single_error)) 
                      | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                     | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable)))) {
        VL_WRITEF("FAIL none   data=%x\n",32,vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 1ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=0\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 2ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=1\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 4ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=2\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 8ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=3\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x10ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=4\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x20ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=5\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x40ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=6\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x80ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=7\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x100ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=8\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x200ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=9\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x400ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=10\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x800ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=11\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x1000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=12\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x2000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=13\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x4000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=14\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x8000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=15\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x10000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=16\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x20000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=17\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x40000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
    vlSelf->tb_ecc_decoder__DOT__data = vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       16);
    vlSelf->tb_ecc_decoder__DOT__rx = (vlSelf->tb_ecc_decoder__DOT__codeword 
                                       ^ vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask);
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_decoder.sv", 
                                       18);
    vlSelf->tb_ecc_decoder__DOT__n_single = ((IData)(1U) 
                                             + vlSelf->tb_ecc_decoder__DOT__n_single);
    if (VL_UNLIKELY((1U & ((((vlSelf->tb_ecc_decoder__DOT__corrected_data 
                              != vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d) 
                             | (~ (IData)(vlSelf->tb_ecc_decoder__DOT__single_error))) 
                            | (IData)(vlSelf->tb_ecc_decoder__DOT__double_error)) 
                           | (IData)(vlSelf->tb_ecc_decoder__DOT__uncorrectable))))) {
        VL_WRITEF("FAIL single data=%x pos=18\n",32,
                  vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d);
        vlSelf->tb_ecc_decoder__DOT__errors = ((IData)(1U) 
                                               + vlSelf->tb_ecc_decoder__DOT__errors);
    }
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__mask = 0x80000ULL;
    vlSelf->__Vtask_tb_ecc_decoder__DOT__apply__18__d 
        = vlSelf->__Vtask_tb_ecc_decoder__DOT__test_data__16__d;
}
