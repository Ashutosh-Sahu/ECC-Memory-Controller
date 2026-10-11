// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_faults.h for the primary calling header

#include "Vtb_ecc_faults__pch.h"
#include "Vtb_ecc_faults___024root.h"

VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__2(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = 0;
    // Body
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000000040ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=6,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x180ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,8\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x280ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,9\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x480ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,10\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x880ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000000080ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=7,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x300ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,9\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x500ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,10\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x900ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000000100ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=8,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x600ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,10\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xa00ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000000200ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=9,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xc00ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000000400ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=10,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000000800ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=11,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x3000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=12,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x5000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=12,14\n",
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
}
