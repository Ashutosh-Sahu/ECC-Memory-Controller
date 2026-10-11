// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_faults.h for the primary calling header

#include "Vtb_ecc_faults__pch.h"
#include "Vtb_ecc_faults___024root.h"

VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__5(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__5\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = 0;
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = 0;
    // Body
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x300000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=32,33\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x500000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=32,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x900000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=32,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1100000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=32,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2100000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=32,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4100000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=32,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x600000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=33,34\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xa00000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=33,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1200000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=33,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2200000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=33,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4200000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=33,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0xc00000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=34,35\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1400000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=34,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2400000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=34,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4400000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=34,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x1800000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=35,36\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x2800000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=35,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x4800000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=35,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x3000000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=36,37\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x5000000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=36,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d;
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__a;
    vlSelf->tb_ecc_faults__DOT__write_data = vlSelf->__Vtask_tb_ecc_faults__DOT__do_write__9__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask = 0x6000000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__10__mask);
    __Vtask_tb_ecc_faults__DOT__do_read__11__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_read__11__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
                                            + vlSelf->tb_ecc_faults__DOT__n_double);
    if (VL_UNLIKELY((1U & ((((~ ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                 & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double))) 
                             | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                                & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single))) 
                            | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                               & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr))) 
                           | ((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid) 
                              & (IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single)))))) {
        VL_WRITEF("FAIL double a=%0# d=%x pos=37,38\n",
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__8__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d = 0xffffffffU;
    vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a = 0xcU;
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 3ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,1\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 5ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,2\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 9ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,3\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x11ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,4\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x21ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,5\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x41ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,6\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x81ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,7\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x101ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,8\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x201ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,9\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x401ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,10\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x801ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000001ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=0,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 6ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,2\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xaULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,3\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x12ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,4\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x22ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,5\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x42ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,6\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x82ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,7\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x102ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,8\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x202ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,9\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x402ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,10\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x802ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000002ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=1,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xcULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,3\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x14ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,4\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x24ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,5\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x44ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,6\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x84ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,7\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x104ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,8\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x204ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,9\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x404ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,10\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x804ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,35\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,36\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,37\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000000004ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=2,38\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x18ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,4\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x28ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,5\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x48ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,6\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x88ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,7\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x108ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,8\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x208ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,9\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x408ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,10\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x808ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,11\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,12\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,13\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,14\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,15\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,16\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,17\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,18\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,19\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,20\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,21\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,22\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,23\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,24\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,25\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,26\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x8000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,27\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x10000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,28\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x20000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,29\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x40000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,30\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x80000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,31\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x100000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,32\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x200000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,33\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x400000008ULL;
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
        VL_WRITEF("FAIL double a=%0# d=%x pos=3,34\n",
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
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x800000008ULL;
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
}
