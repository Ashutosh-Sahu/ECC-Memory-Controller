// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_memory.h for the primary calling header

#include "Vtb_ecc_memory__pch.h"
#include "Vtb_ecc_memory___024root.h"

VL_ATTR_COLD void Vtb_ecc_memory___024root___eval_initial__TOP(Vtb_ecc_memory___024root* vlSelf);
VlCoroutine Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_memory___024root* vlSelf);
VlCoroutine Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_ecc_memory___024root* vlSelf);

void Vtb_ecc_memory___024root___eval_initial(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_initial\n"); );
    // Body
    Vtb_ecc_memory___024root___eval_initial__TOP(vlSelf);
    Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_ecc_memory__DOT__clk__0 
        = vlSelf->tb_ecc_memory__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_ecc_memory__DOT__errors;
    tb_ecc_memory__DOT__errors = 0;
    CData/*3:0*/ __Vtask_tb_ecc_memory__DOT__write__0__a;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_memory__DOT__write__0__d;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_memory__DOT__read_check__1__expected;
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0;
    CData/*3:0*/ __Vtask_tb_ecc_memory__DOT__write__2__a;
    __Vtask_tb_ecc_memory__DOT__write__2__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_memory__DOT__write__2__d;
    __Vtask_tb_ecc_memory__DOT__write__2__d = 0;
    CData/*3:0*/ __Vtask_tb_ecc_memory__DOT__read_check__3__a;
    __Vtask_tb_ecc_memory__DOT__read_check__3__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_memory__DOT__read_check__3__expected;
    __Vtask_tb_ecc_memory__DOT__read_check__3__expected = 0;
    CData/*3:0*/ __Vtask_tb_ecc_memory__DOT__read_check__4__a;
    __Vtask_tb_ecc_memory__DOT__read_check__4__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_memory__DOT__read_check__4__expected;
    __Vtask_tb_ecc_memory__DOT__read_check__4__expected = 0;
    CData/*3:0*/ __Vtask_tb_ecc_memory__DOT__read_check__5__a;
    __Vtask_tb_ecc_memory__DOT__read_check__5__a = 0;
    QData/*38:0*/ __Vtask_tb_ecc_memory__DOT__read_check__5__expected;
    __Vtask_tb_ecc_memory__DOT__read_check__5__expected = 0;
    // Body
    tb_ecc_memory__DOT__errors = 0U;
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    vlSelf->tb_ecc_memory__DOT__addr = 0U;
    vlSelf->tb_ecc_memory__DOT__wdata = 0ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa0000000ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa1234567ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 1U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa2468aceULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 2U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa369d035ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 3U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa48d159cULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 4U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa5b05b03ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 5U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa6d3a06aULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 6U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa7f6e5d1ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 7U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xa91a2b38ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 8U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xaa3d709fULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 9U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xab60b606ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0xaU;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xac83fb6dULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0xbU;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xada740d4ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0xcU;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xaeca863bULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0xdU;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xafedcba2ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0xeU;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__write__0__d = 0xb1111109ULL;
    __Vtask_tb_ecc_memory__DOT__write__0__a = 0xfU;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__0__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__0__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa0000000ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa1234567ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa2468aceULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 2U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa369d035ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 3U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa48d159cULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 4U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa5b05b03ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 5U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa6d3a06aULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 6U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa7f6e5d1ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 7U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xa91a2b38ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 8U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xaa3d709fULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 9U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xab60b606ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0xaU;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xac83fb6dULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0xbU;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xada740d4ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0xcU;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xaeca863bULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0xdU;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xafedcba2ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0xeU;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__1__expected = 0xb1111109ULL;
    __Vtask_tb_ecc_memory__DOT__read_check__1__a = 0xfU;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__1__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__1__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__1__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__1__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__write__2__d = 0x7fffffffffULL;
    __Vtask_tb_ecc_memory__DOT__write__2__a = 5U;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       15);
    vlSelf->tb_ecc_memory__DOT__we = 1U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__write__2__a;
    vlSelf->tb_ecc_memory__DOT__wdata = __Vtask_tb_ecc_memory__DOT__write__2__d;
    co_await vlSelf->__VtrigSched_h12620f55__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_ecc_memory.clk)", 
                                                       "tb/tb_ecc_memory.sv", 
                                                       17);
    vlSelf->tb_ecc_memory__DOT__we = 0U;
    __Vtask_tb_ecc_memory__DOT__read_check__3__expected = 0x7fffffffffULL;
    __Vtask_tb_ecc_memory__DOT__read_check__3__a = 5U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__3__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__3__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__3__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__3__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__4__expected = 0xa48d159cULL;
    __Vtask_tb_ecc_memory__DOT__read_check__4__a = 4U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__4__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__4__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__4__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__4__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    __Vtask_tb_ecc_memory__DOT__read_check__5__expected = 0xa6d3a06aULL;
    __Vtask_tb_ecc_memory__DOT__read_check__5__a = 6U;
    vlSelf->tb_ecc_memory__DOT__addr = __Vtask_tb_ecc_memory__DOT__read_check__5__a;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_memory.sv", 
                                       23);
    if (VL_UNLIKELY((vlSelf->tb_ecc_memory__DOT__rdata 
                     != __Vtask_tb_ecc_memory__DOT__read_check__5__expected))) {
        VL_WRITEF("FAIL addr=%0# got=%x expected=%x\n",
                  4,__Vtask_tb_ecc_memory__DOT__read_check__5__a,
                  39,vlSelf->tb_ecc_memory__DOT__rdata,
                  39,__Vtask_tb_ecc_memory__DOT__read_check__5__expected);
        tb_ecc_memory__DOT__errors = ((IData)(1U) + tb_ecc_memory__DOT__errors);
    }
    if ((0U == tb_ecc_memory__DOT__errors)) {
        VL_WRITEF("ALL MEMORY TESTS PASSED\n");
    } else {
        VL_WRITEF("MEMORY TESTS FAILED: %0d\n",32,tb_ecc_memory__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_ecc_memory.sv", 50, "");
}

VL_INLINE_OPT VlCoroutine Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/tb_ecc_memory.sv", 
                                           12);
        vlSelf->__Vdlyvval__tb_ecc_memory__DOT__clk__v0 
            = (1U & (~ (IData)(vlSelf->tb_ecc_memory__DOT__clk)));
        vlSelf->__Vdlyvset__tb_ecc_memory__DOT__clk__v0 = 1U;
    }
}

VL_INLINE_OPT void Vtb_ecc_memory___024root___act_comb__TOP__0(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_ecc_memory__DOT__rdata = vlSelf->tb_ecc_memory__DOT__dut__DOT__mem
        [vlSelf->tb_ecc_memory__DOT__addr];
}

void Vtb_ecc_memory___024root___eval_act(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_ecc_memory___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ecc_memory___024root___nba_sequent__TOP__0(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__tb_ecc_memory__DOT__dut__DOT__mem__v0;
    __Vdlyvdim0__tb_ecc_memory__DOT__dut__DOT__mem__v0 = 0;
    QData/*38:0*/ __Vdlyvval__tb_ecc_memory__DOT__dut__DOT__mem__v0;
    __Vdlyvval__tb_ecc_memory__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ecc_memory__DOT__dut__DOT__mem__v0;
    __Vdlyvset__tb_ecc_memory__DOT__dut__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__tb_ecc_memory__DOT__dut__DOT__mem__v0 = 0U;
    if (vlSelf->tb_ecc_memory__DOT__we) {
        __Vdlyvval__tb_ecc_memory__DOT__dut__DOT__mem__v0 
            = vlSelf->tb_ecc_memory__DOT__wdata;
        __Vdlyvset__tb_ecc_memory__DOT__dut__DOT__mem__v0 = 1U;
        __Vdlyvdim0__tb_ecc_memory__DOT__dut__DOT__mem__v0 
            = vlSelf->tb_ecc_memory__DOT__addr;
    }
    if (__Vdlyvset__tb_ecc_memory__DOT__dut__DOT__mem__v0) {
        vlSelf->tb_ecc_memory__DOT__dut__DOT__mem[__Vdlyvdim0__tb_ecc_memory__DOT__dut__DOT__mem__v0] 
            = __Vdlyvval__tb_ecc_memory__DOT__dut__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vtb_ecc_memory___024root___nba_sequent__TOP__1(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_ecc_memory__DOT__clk__v0) {
        vlSelf->tb_ecc_memory__DOT__clk = vlSelf->__Vdlyvval__tb_ecc_memory__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_ecc_memory__DOT__clk__v0 = 0U;
    }
}

void Vtb_ecc_memory___024root___eval_nba(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_memory___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_memory___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_memory___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_ecc_memory___024root___timing_resume(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h12620f55__0.resume("@(negedge tb_ecc_memory.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_ecc_memory___024root___timing_commit(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h12620f55__0.commit("@(negedge tb_ecc_memory.clk)");
    }
}

void Vtb_ecc_memory___024root___eval_triggers__act(Vtb_ecc_memory___024root* vlSelf);

bool Vtb_ecc_memory___024root___eval_phase__act(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ecc_memory___024root___eval_triggers__act(vlSelf);
    Vtb_ecc_memory___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_ecc_memory___024root___timing_resume(vlSelf);
        Vtb_ecc_memory___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ecc_memory___024root___eval_phase__nba(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ecc_memory___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_memory___024root___dump_triggers__nba(Vtb_ecc_memory___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_memory___024root___dump_triggers__act(Vtb_ecc_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ecc_memory___024root___eval(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ecc_memory___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_ecc_memory.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ecc_memory___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_ecc_memory.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_ecc_memory___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_ecc_memory___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ecc_memory___024root___eval_debug_assertions(Vtb_ecc_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_memory___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
