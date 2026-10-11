// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_faults.h for the primary calling header

#include "Vtb_ecc_faults__pch.h"
#include "Vtb_ecc_faults___024root.h"

VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__4(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__4\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = 0;
    // Body
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000080000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=19,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x300000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x500000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x900000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000100000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=20,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x600000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xa00000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000200000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=21,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xc00000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000400000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=22,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x8800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x10800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x20800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x40800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x80800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x100800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x200800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x400800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x800800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1000800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2000800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4000800000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=23,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x3000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x5000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x9000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x11000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x21000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x41000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x81000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x101000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x201000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x401000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x801000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1001000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2001000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4001000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=24,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x6000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xa000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x12000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x22000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x42000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x82000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x102000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x202000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x402000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x802000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1002000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2002000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4002000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=25,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xc000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x14000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x24000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x44000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x84000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x104000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x204000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x404000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x804000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1004000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2004000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4004000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=26,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x18000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x28000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x48000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x88000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x108000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x208000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x408000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x808000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1008000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2008000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4008000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=27,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x30000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x50000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x90000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x110000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x210000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x410000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x810000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1010000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2010000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4010000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=28,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x60000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xa0000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x120000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x220000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x420000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x820000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1020000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2020000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4020000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=29,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xc0000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x140000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x240000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x440000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x840000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1040000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2040000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4040000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=30,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x180000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=31,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x280000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=31,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x480000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=31,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x880000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=31,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1080000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=31,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2080000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=31,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4080000000ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=31,38\n",
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
}
