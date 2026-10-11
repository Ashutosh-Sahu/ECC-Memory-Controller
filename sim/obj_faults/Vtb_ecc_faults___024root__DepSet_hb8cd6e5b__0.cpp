// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_faults.h for the primary calling header

#include "Vtb_ecc_faults__pch.h"
#include "Vtb_ecc_faults___024root.h"

VL_ATTR_COLD void Vtb_ecc_faults___024root___eval_initial__TOP(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__1(Vtb_ecc_faults___024root* vlSelf);

void Vtb_ecc_faults___024root___eval_initial(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial\n"); );
    // Body
    Vtb_ecc_faults___024root___eval_initial__TOP(vlSelf);
    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_ecc_faults__DOT__clk__0 
        = vlSelf->tb_ecc_faults__DOT__clk;
}

VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__0(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__1(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__2(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__3(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__4(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__5(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__6(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__7(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__8(Vtb_ecc_faults___024root* vlSelf);
VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__9(Vtb_ecc_faults___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__2(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__3(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__4(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__5(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__6(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__7(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__8(vlSelf);
    co_await Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__9(vlSelf);
}

VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__0(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    __Vtask_tb_ecc_faults__DOT__run_single__0__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__run_single__0__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__inject__2__a;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_faults__DOT__inject__2__mask;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    __Vtask_tb_ecc_faults__DOT__run_single__4__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__run_single__4__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__inject__6__a;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_faults__DOT__inject__6__mask;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = 0;
    // Body
    vlSelf->tb_ecc_faults__DOT__errors = 0U;
    vlSelf->tb_ecc_faults__DOT__n_single = 0U;
    vlSelf->tb_ecc_faults__DOT__n_double = 0U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = 0U;
    vlSelf->tb_ecc_faults__DOT__write_data = 0U;
    __Vtask_tb_ecc_faults__DOT__run_single__0__d = 0xdeadbeefU;
    __Vtask_tb_ecc_faults__DOT__run_single__0__a = 2U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = 0xdeadbeefU;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = 2U;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 1ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=0\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=0\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 2ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=1\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=1\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 4ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=2\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=2\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 8ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=3\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=3\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x10ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=4\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=4\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x20ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=5\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=5\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x40ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=6\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=6\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x80ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=7\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=7\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x100ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=8\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=8\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x200ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=9\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=9\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x400ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=10\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=10\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x800ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=11\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=11\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x1000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=12\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=12\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x2000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=13\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=13\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x4000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=14\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=14\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x8000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=15\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=15\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x10000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=16\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=16\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x20000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=17\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=17\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x40000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=18\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=18\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x80000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=19\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=19\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x100000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=20\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=20\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x200000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=21\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=21\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x400000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=22\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=22\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x800000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=23\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=23\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x1000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=24\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=24\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x2000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=25\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=25\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x4000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=26\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=26\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x8000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=27\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=27\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x10000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=28\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=28\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x20000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=29\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=29\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x40000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=30\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=30\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x80000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=31\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=31\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x100000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=32\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=32\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x200000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=33\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=33\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x400000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=34\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=34\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x800000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=35\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=35\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x1000000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=36\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=36\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x2000000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=37\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=37\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__1__d = __Vtask_tb_ecc_faults__DOT__run_single__0__d;
    __Vtask_tb_ecc_faults__DOT__do_write__1__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__1__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__1__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__2__mask = 0x4000000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__2__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__2__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__2__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__2__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__3__a = __Vtask_tb_ecc_faults__DOT__run_single__0__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=38\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__0__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__0__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=38\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__0__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__run_single__4__d = 0U;
    __Vtask_tb_ecc_faults__DOT__run_single__4__a = 9U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 1ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=0\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=0\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 2ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=1\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=1\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 4ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=2\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=2\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 8ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=3\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=3\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x10ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=4\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=4\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x20ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=5\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=5\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x40ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=6\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=6\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x80ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=7\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=7\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x100ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=8\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=8\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x200ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=9\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=9\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x400ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=10\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=10\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x800ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=11\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=11\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x1000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=12\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=12\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x2000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=13\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=13\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x4000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=14\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=14\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x8000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=15\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=15\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x10000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=16\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=16\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x20000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=17\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=17\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x40000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=18\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=18\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x80000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=19\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=19\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x100000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=20\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=20\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x200000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=21\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=21\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x400000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=22\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=22\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x800000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=23\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=23\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x1000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=24\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=24\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x2000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=25\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=25\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x4000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=26\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=26\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x8000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=27\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=27\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x10000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=28\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=28\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x20000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=29\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=29\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x40000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=30\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=30\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x80000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=31\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=31\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x100000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=32\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=32\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x200000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=33\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=33\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x400000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=34\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=34\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x800000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=35\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=35\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x1000000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=36\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=36\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x2000000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=37\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=37\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__5__d = __Vtask_tb_ecc_faults__DOT__run_single__4__d;
    __Vtask_tb_ecc_faults__DOT__do_write__5__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__5__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__5__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    __Vtask_tb_ecc_faults__DOT__inject__6__mask = 0x4000000000ULL;
    __Vtask_tb_ecc_faults__DOT__inject__6__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vtask_tb_ecc_faults__DOT__inject__6__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [__Vtask_tb_ecc_faults__DOT__inject__6__a] 
           ^ __Vtask_tb_ecc_faults__DOT__inject__6__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__7__a = __Vtask_tb_ecc_faults__DOT__run_single__4__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__7__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_single = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_single);
    if (VL_UNLIKELY((1U & (((((vlSelf->tb_ecc_faults__DOT__read_data 
                               != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                              | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                    & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL single a=%0# d=%x pos=38\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a,
                  32,__Vtask_tb_ecc_faults__DOT__run_single__4__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       44);
    if (VL_UNLIKELY((1U & ((vlSelf->tb_ecc_faults__DOT__read_data 
                            != __Vtask_tb_ecc_faults__DOT__run_single__4__d) 
                           | (~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))))))) {
        VL_WRITEF("FAIL persistence a=%0# pos=38\n",
                  4,__Vtask_tb_ecc_faults__DOT__run_single__4__a);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d = 0xcafef00dU;
    vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a = 5U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 3ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,1\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 5ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,2\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 9ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,3\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x11ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,4\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x21ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,5\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x41ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,6\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x81ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,7\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x101ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,8\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x201ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,9\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x401ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,10\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x801ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,11\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,12\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,13\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,14\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,15\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,16\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,17\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,18\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,19\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,20\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,21\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,22\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,23\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,24\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,25\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,26\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,27\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,28\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,29\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,30\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,31\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,32\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,33\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000000001ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 6ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,2\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xaULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,3\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x12ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,4\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x22ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,5\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x42ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,6\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x82ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,7\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x102ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,8\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x202ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,9\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x402ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,10\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x802ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,11\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,12\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,13\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,14\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,15\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,16\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,17\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,18\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,19\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,20\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,21\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,22\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,23\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,24\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,25\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,26\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,27\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000002ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
}
