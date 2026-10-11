// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_faults.h for the primary calling header

#include "Vtb_ecc_faults__pch.h"
#include "Vtb_ecc_faults___024root.h"

VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__6(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__6\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = 0;
    // Body
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000008ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000008ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000008ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x30ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,5\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x50ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,6\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x90ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,7\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x110ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,8\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x210ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,9\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x410ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,10\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x810ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,11\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,12\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,13\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,14\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,15\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,16\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,17\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,18\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,19\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,20\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,21\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,22\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,23\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,24\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,25\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,26\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,27\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,28\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,29\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,30\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,31\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,32\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,33\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000010ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=4,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x60ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,6\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xa0ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,7\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x120ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,8\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x220ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,9\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x420ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,10\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x820ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,11\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,12\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,13\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,14\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,15\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,16\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,17\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,18\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,19\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,20\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,21\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,22\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,23\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,24\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,25\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,26\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,27\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,28\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,29\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,30\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,31\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,32\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,33\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000020ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=5,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xc0ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,7\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x140ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,8\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x240ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,9\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x440ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,10\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x840ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,11\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,12\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,13\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,14\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,15\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,16\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,17\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,18\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,19\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,20\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,21\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,22\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,23\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,24\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,25\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,26\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,27\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,28\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,29\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,30\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,31\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,32\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,33\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000040ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x180ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,8\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x280ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,9\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x480ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,10\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x880ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,11\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,12\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,13\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,14\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,15\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,16\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,17\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,18\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,19\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,20\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,21\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,22\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,23\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,24\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,25\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,26\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,27\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,28\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,29\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,30\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,31\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,32\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,33\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000080ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x300ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,9\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x500ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,10\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x900ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,11\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,12\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,13\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,14\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,15\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,16\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,17\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,18\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,19\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,20\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,21\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,22\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,23\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,24\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,25\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,26\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,27\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,28\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,29\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,30\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,31\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,32\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,33\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000100ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x600ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
}
