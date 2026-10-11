// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_faults.h for the primary calling header

#include "Vtb_ecc_faults__pch.h"
#include "Vtb_ecc_faults___024root.h"

VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__9(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__0__9\n"); );
    // Init
    CData/*3:0*/ __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = 0;
    IData/*31:0*/ __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = 0;
    // Body
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4000800000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x3000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x5000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x9000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x11000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x21000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x41000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x81000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x101000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x201000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x401000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x801000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1001000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2001000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4001000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x6000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xa000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x12000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x22000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x42000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x82000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x102000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x202000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x402000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x802000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1002000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2002000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4002000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xc000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x14000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x24000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x44000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x84000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x104000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x204000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x404000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x804000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1004000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2004000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4004000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x18000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x28000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x48000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x88000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x108000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x208000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x408000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x808000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1008000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2008000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4008000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x30000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x50000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x90000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x110000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x210000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x410000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x810000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1010000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2010000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4010000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x60000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xa0000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x120000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x220000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x420000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x820000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1020000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2020000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4020000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xc0000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x140000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x240000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x440000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x840000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1040000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2040000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4040000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x180000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x280000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x480000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x880000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1080000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2080000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4080000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x300000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x500000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x900000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1100000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2100000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4100000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x600000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xa00000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1200000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2200000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4200000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0xc00000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1400000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2400000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4400000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x1800000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x2800000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x4800000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x3000000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x5000000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    __Vtask_tb_ecc_faults__DOT__do_write__13__d = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d;
    __Vtask_tb_ecc_faults__DOT__do_write__13__a = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       17);
    vlSelf->tb_ecc_faults__DOT__write_en = 1U;
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = __Vtask_tb_ecc_faults__DOT__do_write__13__a;
    vlSelf->tb_ecc_faults__DOT__write_data = __Vtask_tb_ecc_faults__DOT__do_write__13__d;
    co_await vlSelf->__VtrigSched_h4b7f8849__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_faults.clk)", 
                                                       "tb/tb_ecc_faults.sv", 
                                                       19);
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask = 0x6000000000ULL;
    vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
        = (vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
           [vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__a] 
           ^ vlSelf->__Vtask_tb_ecc_faults__DOT__inject__14__mask);
    vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a 
        = vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a;
    vlSelf->tb_ecc_faults__DOT__read_en = 1U;
    vlSelf->tb_ecc_faults__DOT__write_en = 0U;
    vlSelf->tb_ecc_faults__DOT__addr = vlSelf->__Vtask_tb_ecc_faults__DOT__do_read__15__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_faults.sv", 
                                       29);
    vlSelf->tb_ecc_faults__DOT__n_double = ((IData)(1U) 
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
                  4,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__a,
                  32,vlSelf->__Vtask_tb_ecc_faults__DOT__run_double__12__d);
        vlSelf->tb_ecc_faults__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_ecc_faults__DOT__errors);
    }
    vlSelf->tb_ecc_faults__DOT__read_en = 0U;
    VL_WRITEF("cases: single=%0d double=%0d\n",32,vlSelf->tb_ecc_faults__DOT__n_single,
              32,vlSelf->tb_ecc_faults__DOT__n_double);
    if ((0U == vlSelf->tb_ecc_faults__DOT__errors)) {
        VL_WRITEF("ALL FAULT TESTS PASSED\n");
    } else {
        VL_WRITEF("FAULT TESTS FAILED: %0d\n",32,vlSelf->tb_ecc_faults__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_ecc_faults.sv", 80, "");
}

VL_INLINE_OPT VlCoroutine Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__1(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/tb_ecc_faults.sv", 
                                           14);
        vlSelf->__Vdlyvval__tb_ecc_faults__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_ecc_faults__DOT__clk)));
        vlSelf->__Vdlyvset__tb_ecc_faults__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vtb_ecc_faults___024root___act_comb__TOP__0(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___act_comb__TOP__0\n"); );
    // Init
    QData/*38:0*/ tb_ecc_faults__DOT__dut__DOT__stored_cw;
    tb_ecc_faults__DOT__dut__DOT__stored_cw = 0;
    QData/*38:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 = 0;
    QData/*38:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed = 0;
    CData/*5:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 = 0;
    // Body
    vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid 
        = ((~ (IData)(vlSelf->tb_ecc_faults__DOT__write_en)) 
           & (IData)(vlSelf->tb_ecc_faults__DOT__read_en));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0ULL;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & vlSelf->tb_ecc_faults__DOT__write_data);
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffff7ULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 1U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffdfULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 2U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffbfULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 6U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 3U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffff7fULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 7U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 4U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffdffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 9U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 5U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffbffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xaU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 6U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffff7ffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xbU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 7U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffefffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xcU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 8U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffdfffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xdU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 9U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffbfffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xeU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xaU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffff7fffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xfU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xbU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffdffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x11U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xcU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffbffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x12U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xdU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffff7ffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x13U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xeU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffefffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x14U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xfU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffdfffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x15U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x10U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffbfffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x16U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x11U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fff7fffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x17U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x12U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffeffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x18U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x13U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffdffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x19U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x14U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffbffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1aU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x15U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ff7ffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1bU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x16U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fefffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1cU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x17U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fdfffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1dU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x18U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fbfffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1eU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x19U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7f7fffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1fU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1aU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7dffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x21U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1bU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7bffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x22U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1cU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x77ffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x23U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1dU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x6fffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x24U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1eU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x5fffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x25U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (vlSelf->tb_ecc_faults__DOT__write_data >> 0x1fU);
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x3fffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 5U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 9U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x11U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x21U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffdULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffbULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 5U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffefULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 9U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffeffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 8U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x11U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffeffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x10U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x21U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7effffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x20U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffeULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | (IData)((IData)((1U & VL_REDXOR_64((0x3fffffffffULL 
                                                 & (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                                                    >> 1U)))))));
    vlSelf->tb_ecc_faults__DOT__dut__DOT__enc_cw = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
    tb_ecc_faults__DOT__dut__DOT__stored_cw = vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem
        [vlSelf->tb_ecc_faults__DOT__addr];
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn = 0U;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                         >> 1U)));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 3U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 5U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 9U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x11U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x21U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                            >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3eU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 2U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 3U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 6U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xaU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x12U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x22U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 1U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x26U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3dU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 4U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 5U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 6U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xcU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x14U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x24U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 2U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x26U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x3bU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 8U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 9U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xaU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xcU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x18U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 3U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x37U & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x10U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x11U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x12U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x14U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x18U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 4U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x2fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x20U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x21U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x22U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x24U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (1U & (((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                  >> 5U) ^ (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                    >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 
        = (IData)((((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn) 
                    >> 5U) ^ (tb_ecc_faults__DOT__dut__DOT__stored_cw 
                              >> 0x26U)));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn 
        = ((0x1fU & (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
           | ((IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr 
        = (1U & VL_REDXOR_64(tb_ecc_faults__DOT__dut__DOT__stored_cw));
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
        = tb_ecc_faults__DOT__dut__DOT__stored_cw;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single = 0U;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double = 0U;
    vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr = 0U;
    if (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr) {
        if ((0U == (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
            vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single = 1U;
        } else if ((0x26U >= (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
            vlSelf->tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0 
                = (1U & (~ ((0x26U >= (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)) 
                            && (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__stored_cw 
                                              >> (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn)))))));
            vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_single = 1U;
            if ((0x26U >= (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
                tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                    = (((~ (1ULL << (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) 
                        & tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed) 
                       | (0x7fffffffffULL & ((QData)((IData)(vlSelf->tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_h479adeca__0)) 
                                             << (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))));
            }
        } else {
            vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_uncorr = 1U;
        }
    } else if ((0U != (IData)(tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn))) {
        vlSelf->tb_ecc_faults__DOT__dut__DOT__dec_double = 1U;
    }
    vlSelf->tb_ecc_faults__DOT__read_data = 0U;
    vlSelf->tb_ecc_faults__DOT__read_data = ((0xfffffff8U 
                                              & vlSelf->tb_ecc_faults__DOT__read_data) 
                                             | ((4U 
                                                 & ((IData)(
                                                            (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 6U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(
                                                               (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                >> 5U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                 >> 3U))))));
    vlSelf->tb_ecc_faults__DOT__read_data = ((0xffffffc7U 
                                              & vlSelf->tb_ecc_faults__DOT__read_data) 
                                             | ((0x20U 
                                                 & ((IData)(
                                                            (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 0xaU)) 
                                                    << 5U)) 
                                                | ((0x10U 
                                                    & ((IData)(
                                                               (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                >> 9U)) 
                                                       << 4U)) 
                                                   | (8U 
                                                      & ((IData)(
                                                                 (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                  >> 7U)) 
                                                         << 3U)))));
    vlSelf->tb_ecc_faults__DOT__read_data = ((0xffffe03fU 
                                              & vlSelf->tb_ecc_faults__DOT__read_data) 
                                             | ((0x1000U 
                                                 & ((IData)(
                                                            (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 0x12U)) 
                                                    << 0xcU)) 
                                                | ((0x800U 
                                                    & ((IData)(
                                                               (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                >> 0x11U)) 
                                                       << 0xbU)) 
                                                   | (0x7c0U 
                                                      & ((IData)(
                                                                 (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                  >> 0xbU)) 
                                                         << 6U)))));
    vlSelf->tb_ecc_faults__DOT__read_data = ((0xf0001fffU 
                                              & vlSelf->tb_ecc_faults__DOT__read_data) 
                                             | ((0x8000000U 
                                                 & ((IData)(
                                                            (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                             >> 0x22U)) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & ((IData)(
                                                               (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                >> 0x21U)) 
                                                       << 0x1aU)) 
                                                   | (0x3ffe000U 
                                                      & ((IData)(
                                                                 (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                                  >> 0x13U)) 
                                                         << 0xdU)))));
    vlSelf->tb_ecc_faults__DOT__read_data = ((0xfffffffU 
                                              & vlSelf->tb_ecc_faults__DOT__read_data) 
                                             | ((IData)(
                                                        (tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed 
                                                         >> 0x23U)) 
                                                << 0x1cU));
}

void Vtb_ecc_faults___024root___eval_act(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_ecc_faults___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ecc_faults___024root___nba_sequent__TOP__0(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0;
    __Vdlyvdim0__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0;
    QData/*38:0*/ __Vdlyvval__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0;
    __Vdlyvval__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0;
    __Vdlyvset__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0U;
    if (vlSelf->tb_ecc_faults__DOT__write_en) {
        __Vdlyvval__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0 
            = vlSelf->tb_ecc_faults__DOT__dut__DOT__enc_cw;
        __Vdlyvset__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0 
            = vlSelf->tb_ecc_faults__DOT__addr;
    }
    if (__Vdlyvset__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0) {
        vlSelf->tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem[__Vdlyvdim0__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0] 
            = __Vdlyvval__tb_ecc_faults__DOT__dut__DOT__u_mem__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtb_ecc_faults___024root___nba_comb__TOP__0(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___nba_comb__TOP__0\n"); );
    // Init
    QData/*38:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 = 0;
    // Body
    vlSelf->tb_ecc_faults__DOT__dut__DOT__read_valid 
        = ((~ (IData)(vlSelf->tb_ecc_faults__DOT__write_en)) 
           & (IData)(vlSelf->tb_ecc_faults__DOT__read_en));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw = 0ULL;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & vlSelf->tb_ecc_faults__DOT__write_data);
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffff7ULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 3U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 1U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffdfULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 5U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 2U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffbfULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 6U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 3U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffff7fULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 7U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 4U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffdffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 9U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 5U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffbffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xaU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 6U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffff7ffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xbU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 7U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffefffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xcU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 8U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffdfffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xdU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 9U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffbfffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xeU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xaU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffff7fffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0xfU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xbU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffdffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x11U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xcU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffbffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x12U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xdU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffff7ffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x13U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xeU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffefffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x14U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0xfU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffdfffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x15U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x10U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffbfffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x16U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x11U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fff7fffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x17U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x12U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffeffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x18U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x13U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffdffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x19U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x14U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffbffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1aU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x15U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ff7ffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1bU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x16U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fefffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1cU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x17U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fdfffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1dU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x18U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fbfffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1eU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x19U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7f7fffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1fU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1aU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7dffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x21U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1bU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7bffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x22U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1cU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x77ffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x23U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1dU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x6fffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x24U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_faults__DOT__write_data 
                 >> 0x1eU));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x5fffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x25U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0 
        = (vlSelf->tb_ecc_faults__DOT__write_data >> 0x1fU);
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x3fffffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_heea96ed9__0)) 
              << 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 5U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 9U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x11U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x21U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffdULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 1U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffbULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 2U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 5U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffefULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 4U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 9U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffeffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 8U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x11U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffeffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x10U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                         >> 0x21U)));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__par;
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7effffffffULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_faults__DOT__dut__DOT__u_enc__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x20U));
    tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffeULL & tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw) 
           | (IData)((IData)((1U & VL_REDXOR_64((0x3fffffffffULL 
                                                 & (tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw 
                                                    >> 1U)))))));
    vlSelf->tb_ecc_faults__DOT__dut__DOT__enc_cw = tb_ecc_faults__DOT__dut__DOT__u_enc__DOT__unnamedblk1__DOT__cw;
}
