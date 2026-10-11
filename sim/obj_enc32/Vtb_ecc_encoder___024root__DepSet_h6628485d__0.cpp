// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_encoder.h for the primary calling header

#include "Vtb_ecc_encoder__pch.h"
#include "Vtb_ecc_encoder___024root.h"

VlCoroutine Vtb_ecc_encoder___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_encoder___024root* vlSelf);

void Vtb_ecc_encoder___024root___eval_initial(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval_initial\n"); );
    // Body
    Vtb_ecc_encoder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ecc_encoder___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_ecc_encoder__DOT__errors;
    tb_ecc_encoder__DOT__errors = 0;
    IData/*31:0*/ tb_ecc_encoder__DOT__unnamedblk6__DOT__i;
    tb_ecc_encoder__DOT__unnamedblk6__DOT__i = 0;
    IData/*31:0*/ tb_ecc_encoder__DOT__unnamedblk7__DOT__i;
    tb_ecc_encoder__DOT__unnamedblk7__DOT__i = 0;
    IData/*31:0*/ tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__1__d;
    __Vtask_tb_ecc_encoder__DOT__check__1__d = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__1__got;
    __Vtask_tb_ecc_encoder__DOT__check__1__got = 0;
    CData/*0:0*/ __Vtask_tb_ecc_encoder__DOT__check__1__chk;
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__1__k;
    __Vtask_tb_ecc_encoder__DOT__check__1__k = 0;
    CData/*0:0*/ __Vtask_tb_ecc_encoder__DOT__check__1__bad;
    __Vtask_tb_ecc_encoder__DOT__check__1__bad = 0;
    CData/*0:0*/ __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout;
    __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p;
    __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__3__d;
    __Vtask_tb_ecc_encoder__DOT__check__3__d = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__3__got;
    __Vtask_tb_ecc_encoder__DOT__check__3__got = 0;
    CData/*0:0*/ __Vtask_tb_ecc_encoder__DOT__check__3__chk;
    __Vtask_tb_ecc_encoder__DOT__check__3__chk = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__3__k;
    __Vtask_tb_ecc_encoder__DOT__check__3__k = 0;
    CData/*0:0*/ __Vtask_tb_ecc_encoder__DOT__check__3__bad;
    __Vtask_tb_ecc_encoder__DOT__check__3__bad = 0;
    CData/*0:0*/ __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout;
    __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p;
    __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__5__d;
    __Vtask_tb_ecc_encoder__DOT__check__5__d = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__5__got;
    __Vtask_tb_ecc_encoder__DOT__check__5__got = 0;
    CData/*0:0*/ __Vtask_tb_ecc_encoder__DOT__check__5__chk;
    __Vtask_tb_ecc_encoder__DOT__check__5__chk = 0;
    IData/*31:0*/ __Vtask_tb_ecc_encoder__DOT__check__5__k;
    __Vtask_tb_ecc_encoder__DOT__check__5__k = 0;
    CData/*0:0*/ __Vtask_tb_ecc_encoder__DOT__check__5__bad;
    __Vtask_tb_ecc_encoder__DOT__check__5__bad = 0;
    CData/*0:0*/ __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout;
    __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p;
    __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0;
    // Body
    tb_ecc_encoder__DOT__errors = 0U;
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = 0U;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [0U]);
    vlSelf->tb_ecc_encoder__DOT__covers[0U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = 0U;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [1U]);
    vlSelf->tb_ecc_encoder__DOT__covers[1U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = 0U;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [2U]);
    vlSelf->tb_ecc_encoder__DOT__covers[2U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = 0U;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [3U]);
    vlSelf->tb_ecc_encoder__DOT__covers[3U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = 0U;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [4U]);
    vlSelf->tb_ecc_encoder__DOT__covers[4U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    vlSelf->tb_ecc_encoder__DOT__covers[5U] = 0U;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [5U]);
    vlSelf->tb_ecc_encoder__DOT__covers[5U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [5U]);
    vlSelf->tb_ecc_encoder__DOT__covers[5U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [5U]);
    vlSelf->tb_ecc_encoder__DOT__covers[5U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [5U]);
    vlSelf->tb_ecc_encoder__DOT__covers[5U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [5U]);
    vlSelf->tb_ecc_encoder__DOT__covers[5U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1 = 
        ((IData)(1U) + vlSelf->tb_ecc_encoder__DOT__covers
         [5U]);
    vlSelf->tb_ecc_encoder__DOT__covers[5U] = tb_ecc_encoder__DOT____Vlvbound_h02c3af96__1;
    VL_WRITEF("coverage counts P1..P32: %0d %0d %0d %0d %0d %0d\n",
              32,vlSelf->tb_ecc_encoder__DOT__covers
              [0U],32,vlSelf->tb_ecc_encoder__DOT__covers
              [1U],32,vlSelf->tb_ecc_encoder__DOT__covers
              [2U],32,vlSelf->tb_ecc_encoder__DOT__covers
              [3U],32,vlSelf->tb_ecc_encoder__DOT__covers
              [4U],32,vlSelf->tb_ecc_encoder__DOT__covers
              [5U]);
    vlSelf->tb_ecc_encoder__DOT__data = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_encoder.sv", 
                                       63);
    if (VL_UNLIKELY((0ULL != vlSelf->tb_ecc_encoder__DOT__codeword))) {
        VL_WRITEF("FAIL zero\n");
        tb_ecc_encoder__DOT__errors = ((IData)(1U) 
                                       + tb_ecc_encoder__DOT__errors);
    }
    vlSelf->tb_ecc_encoder__DOT__data = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_encoder.sv", 
                                       66);
    if (VL_UNLIKELY((0xfULL != vlSelf->tb_ecc_encoder__DOT__codeword))) {
        VL_WRITEF("FAIL d0 got %x\n",39,vlSelf->tb_ecc_encoder__DOT__codeword);
        tb_ecc_encoder__DOT__errors = ((IData)(1U) 
                                       + tb_ecc_encoder__DOT__errors);
    }
    vlSelf->tb_ecc_encoder__DOT__data = 0x80000000U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_encoder.sv", 
                                       69);
    if (VL_UNLIKELY((0x4100000014ULL != vlSelf->tb_ecc_encoder__DOT__codeword))) {
        VL_WRITEF("FAIL d31 got %x\n",39,vlSelf->tb_ecc_encoder__DOT__codeword);
        tb_ecc_encoder__DOT__errors = ((IData)(1U) 
                                       + tb_ecc_encoder__DOT__errors);
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__d = 0xffffffffU;
    vlSelf->tb_ecc_encoder__DOT__data = __Vtask_tb_ecc_encoder__DOT__check__1__d;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_encoder.sv", 
                                       20);
    __Vtask_tb_ecc_encoder__DOT__check__1__bad = 0U;
    if ((1U & VL_REDXOR_64(vlSelf->tb_ecc_encoder__DOT__codeword))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = 0U;
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 1U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 3U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 5U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 7U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 9U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xbU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xdU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xfU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x11U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x13U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x15U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x17U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x19U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1bU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1dU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1fU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x21U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x23U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x25U))));
    if (__Vtask_tb_ecc_encoder__DOT__check__1__chk) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = 0U;
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 2U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 3U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 6U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 7U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xaU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xbU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xeU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xfU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x12U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x13U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x16U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x17U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1aU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1bU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1eU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1fU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x22U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x23U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                  ^ 
                                                  (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                   >> 0x26U));
    if (__Vtask_tb_ecc_encoder__DOT__check__1__chk) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = 0U;
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 4U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 5U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 6U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 7U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xcU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xdU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xeU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xfU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x14U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x15U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x16U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x17U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1cU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1dU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1eU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1fU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x24U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x25U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                  ^ 
                                                  (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                   >> 0x26U));
    if (__Vtask_tb_ecc_encoder__DOT__check__1__chk) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = 0U;
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 8U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 9U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xaU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xbU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xcU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xdU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xeU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0xfU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x18U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x19U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1aU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1bU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1cU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1dU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1eU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1fU))));
    if (__Vtask_tb_ecc_encoder__DOT__check__1__chk) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = 0U;
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x10U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x11U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x12U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x13U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x14U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x15U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x16U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x17U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x18U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x19U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1aU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1bU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1cU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1dU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1eU))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x1fU))));
    if (__Vtask_tb_ecc_encoder__DOT__check__1__chk) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = 0U;
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x20U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x21U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x22U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x23U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x24U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = (1U 
                                                  & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                     ^ (IData)(
                                                               (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                                >> 0x25U))));
    __Vtask_tb_ecc_encoder__DOT__check__1__chk = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__1__chk) 
                                                  ^ 
                                                  (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                   >> 0x26U));
    if (__Vtask_tb_ecc_encoder__DOT__check__1__chk) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    __Vtask_tb_ecc_encoder__DOT__check__1__k = 0U;
    __Vtask_tb_ecc_encoder__DOT__check__1__got = 0U;
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 1U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 1U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 2U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 2U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 3U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 3U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 4U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 4U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 5U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 5U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 6U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 6U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 7U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 7U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 8U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 8U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 9U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 9U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0xaU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0xaU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0xbU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0xbU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0xcU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0xcU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0xdU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0xdU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0xeU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0xeU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0xfU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0xfU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x10U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x10U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x11U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x11U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x12U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x12U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x13U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x13U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x14U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x14U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x15U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x15U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x16U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x16U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x17U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x17U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x18U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x18U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x19U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x19U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x1aU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x1aU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x1bU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x1bU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x1cU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x1cU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x1dU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x1dU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x1eU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x1eU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x1fU;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x1fU))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x20U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x20U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x21U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x21U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x22U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x22U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x23U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x23U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x24U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x24U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x25U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x25U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((1U & (~ ([&]() {
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p = 0x26U;
                        __Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout 
                            = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                      & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__p 
                                         - (IData)(1U))));
                    }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__2__Vfuncout))))) {
        __Vtask_tb_ecc_encoder__DOT__check__1__got 
            = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))) 
                & __Vtask_tb_ecc_encoder__DOT__check__1__got) 
               | (0xffffffffULL & ((1U & (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                                  >> 0x26U))) 
                                   << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__1__k))));
        __Vtask_tb_ecc_encoder__DOT__check__1__k = 
            ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__1__k);
    }
    if ((__Vtask_tb_ecc_encoder__DOT__check__1__got 
         != __Vtask_tb_ecc_encoder__DOT__check__1__d)) {
        __Vtask_tb_ecc_encoder__DOT__check__1__bad = 1U;
    }
    if (VL_UNLIKELY(__Vtask_tb_ecc_encoder__DOT__check__1__bad)) {
        VL_WRITEF("FAIL data=%x codeword=%x\n",32,__Vtask_tb_ecc_encoder__DOT__check__1__d,
                  39,vlSelf->tb_ecc_encoder__DOT__codeword);
        tb_ecc_encoder__DOT__errors = ((IData)(1U) 
                                       + tb_ecc_encoder__DOT__errors);
    }
    tb_ecc_encoder__DOT__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0x20U, tb_ecc_encoder__DOT__unnamedblk6__DOT__i)) {
        __Vtask_tb_ecc_encoder__DOT__check__3__d = 
            VL_SHIFTL_III(32,32,32, (IData)(1U), tb_ecc_encoder__DOT__unnamedblk6__DOT__i);
        vlSelf->tb_ecc_encoder__DOT__data = __Vtask_tb_ecc_encoder__DOT__check__3__d;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_ecc_encoder.sv", 
                                           20);
        __Vtask_tb_ecc_encoder__DOT__check__3__bad = 0U;
        if ((1U & VL_REDXOR_64(vlSelf->tb_ecc_encoder__DOT__codeword))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__3__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 1U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 3U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 5U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 7U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 9U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xbU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xdU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x11U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x13U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x15U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x19U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x21U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x23U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x25U))));
        if (__Vtask_tb_ecc_encoder__DOT__check__3__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__3__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 2U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 3U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 6U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 7U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xaU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xbU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xeU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x12U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x13U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x16U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1aU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x22U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x23U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
               ^ (vlSelf->tb_ecc_encoder__DOT__codeword 
                  >> 0x26U));
        if (__Vtask_tb_ecc_encoder__DOT__check__3__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__3__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 4U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 5U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 6U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 7U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xcU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xdU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xeU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x14U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x15U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x16U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1cU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x24U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x25U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
               ^ (vlSelf->tb_ecc_encoder__DOT__codeword 
                  >> 0x26U));
        if (__Vtask_tb_ecc_encoder__DOT__check__3__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__3__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 8U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 9U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xaU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xbU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xcU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xdU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xeU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x18U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x19U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1aU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1cU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        if (__Vtask_tb_ecc_encoder__DOT__check__3__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__3__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x10U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x11U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x12U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x13U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x14U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x15U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x16U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x18U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x19U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1aU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1cU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        if (__Vtask_tb_ecc_encoder__DOT__check__3__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__3__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x20U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x21U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x22U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x23U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x24U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x25U))));
        __Vtask_tb_ecc_encoder__DOT__check__3__chk 
            = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__3__chk) 
               ^ (vlSelf->tb_ecc_encoder__DOT__codeword 
                  >> 0x26U));
        if (__Vtask_tb_ecc_encoder__DOT__check__3__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__3__k = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__3__got = 0U;
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 1U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 1U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 2U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 2U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 3U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 3U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 4U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 4U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 5U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 5U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 6U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 6U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 7U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 7U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 8U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 8U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 9U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 9U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0xaU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xaU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0xbU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xbU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0xcU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xcU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0xdU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xdU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0xeU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xeU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0xfU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xfU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x10U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x10U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x11U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x11U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x12U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x12U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x13U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x13U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x14U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x14U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x15U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x15U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x16U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x16U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x17U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x17U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x18U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x18U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x19U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x19U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x1aU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1aU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x1bU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1bU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x1cU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1cU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x1dU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1dU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x1eU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1eU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x1fU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1fU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x20U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x20U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x21U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x21U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x22U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x22U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x23U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x23U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x24U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x24U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x25U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x25U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p = 0x26U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__4__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__3__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__3__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x26U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__3__k))));
            __Vtask_tb_ecc_encoder__DOT__check__3__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__3__k);
        }
        if ((__Vtask_tb_ecc_encoder__DOT__check__3__got 
             != __Vtask_tb_ecc_encoder__DOT__check__3__d)) {
            __Vtask_tb_ecc_encoder__DOT__check__3__bad = 1U;
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_encoder__DOT__check__3__bad)) {
            VL_WRITEF("FAIL data=%x codeword=%x\n",
                      32,__Vtask_tb_ecc_encoder__DOT__check__3__d,
                      39,vlSelf->tb_ecc_encoder__DOT__codeword);
            tb_ecc_encoder__DOT__errors = ((IData)(1U) 
                                           + tb_ecc_encoder__DOT__errors);
        }
        tb_ecc_encoder__DOT__unnamedblk6__DOT__i = 
            ((IData)(1U) + tb_ecc_encoder__DOT__unnamedblk6__DOT__i);
    }
    tb_ecc_encoder__DOT__unnamedblk7__DOT__i = 0U;
    while (VL_GTS_III(32, 0x2710U, tb_ecc_encoder__DOT__unnamedblk7__DOT__i)) {
        __Vtask_tb_ecc_encoder__DOT__check__5__d = 
            VL_RANDOM_I();
        vlSelf->tb_ecc_encoder__DOT__data = __Vtask_tb_ecc_encoder__DOT__check__5__d;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "tb/tb_ecc_encoder.sv", 
                                           20);
        __Vtask_tb_ecc_encoder__DOT__check__5__bad = 0U;
        if ((1U & VL_REDXOR_64(vlSelf->tb_ecc_encoder__DOT__codeword))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__5__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 1U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 3U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 5U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 7U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 9U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xbU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xdU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x11U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x13U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x15U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x19U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x21U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x23U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x25U))));
        if (__Vtask_tb_ecc_encoder__DOT__check__5__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__5__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 2U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 3U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 6U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 7U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xaU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xbU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xeU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x12U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x13U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x16U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1aU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x22U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x23U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
               ^ (vlSelf->tb_ecc_encoder__DOT__codeword 
                  >> 0x26U));
        if (__Vtask_tb_ecc_encoder__DOT__check__5__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__5__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 4U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 5U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 6U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 7U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xcU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xdU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xeU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x14U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x15U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x16U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1cU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x24U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x25U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
               ^ (vlSelf->tb_ecc_encoder__DOT__codeword 
                  >> 0x26U));
        if (__Vtask_tb_ecc_encoder__DOT__check__5__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__5__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 8U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 9U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xaU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xbU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xcU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xdU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xeU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0xfU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x18U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x19U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1aU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1cU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        if (__Vtask_tb_ecc_encoder__DOT__check__5__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__5__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x10U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x11U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x12U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x13U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x14U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x15U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x16U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x17U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x18U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x19U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1aU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1bU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1cU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1dU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1eU))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x1fU))));
        if (__Vtask_tb_ecc_encoder__DOT__check__5__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__5__chk = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x20U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x21U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x22U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x23U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x24U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = (1U & ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
                     ^ (IData)((vlSelf->tb_ecc_encoder__DOT__codeword 
                                >> 0x25U))));
        __Vtask_tb_ecc_encoder__DOT__check__5__chk 
            = ((IData)(__Vtask_tb_ecc_encoder__DOT__check__5__chk) 
               ^ (vlSelf->tb_ecc_encoder__DOT__codeword 
                  >> 0x26U));
        if (__Vtask_tb_ecc_encoder__DOT__check__5__chk) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        __Vtask_tb_ecc_encoder__DOT__check__5__k = 0U;
        __Vtask_tb_ecc_encoder__DOT__check__5__got = 0U;
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 1U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 1U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 2U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 2U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 3U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 3U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 4U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 4U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 5U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 5U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 6U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 6U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 7U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 7U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 8U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 8U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 9U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 9U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0xaU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xaU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0xbU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xbU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0xcU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xcU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0xdU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xdU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0xeU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xeU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0xfU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0xfU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x10U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x10U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x11U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x11U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x12U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x12U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x13U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x13U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x14U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x14U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x15U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x15U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x16U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x16U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x17U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x17U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x18U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x18U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x19U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x19U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x1aU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1aU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x1bU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1bU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x1cU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1cU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x1dU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1dU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x1eU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1eU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x1fU;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x1fU))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x20U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x20U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x21U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x21U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x22U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x22U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x23U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x23U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x24U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x24U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x25U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x25U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((1U & (~ ([&]() {
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p = 0x26U;
                            __Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout 
                                = (0U == (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                          & (__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__p 
                                             - (IData)(1U))));
                        }(), (IData)(__Vfunc_tb_ecc_encoder__DOT__is_pow2__6__Vfuncout))))) {
            __Vtask_tb_ecc_encoder__DOT__check__5__got 
                = (((~ ((IData)(1U) << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))) 
                    & __Vtask_tb_ecc_encoder__DOT__check__5__got) 
                   | (0xffffffffULL & ((1U & (IData)(
                                                     (vlSelf->tb_ecc_encoder__DOT__codeword 
                                                      >> 0x26U))) 
                                       << (0x1fU & __Vtask_tb_ecc_encoder__DOT__check__5__k))));
            __Vtask_tb_ecc_encoder__DOT__check__5__k 
                = ((IData)(1U) + __Vtask_tb_ecc_encoder__DOT__check__5__k);
        }
        if ((__Vtask_tb_ecc_encoder__DOT__check__5__got 
             != __Vtask_tb_ecc_encoder__DOT__check__5__d)) {
            __Vtask_tb_ecc_encoder__DOT__check__5__bad = 1U;
        }
        if (VL_UNLIKELY(__Vtask_tb_ecc_encoder__DOT__check__5__bad)) {
            VL_WRITEF("FAIL data=%x codeword=%x\n",
                      32,__Vtask_tb_ecc_encoder__DOT__check__5__d,
                      39,vlSelf->tb_ecc_encoder__DOT__codeword);
            tb_ecc_encoder__DOT__errors = ((IData)(1U) 
                                           + tb_ecc_encoder__DOT__errors);
        }
        tb_ecc_encoder__DOT__unnamedblk7__DOT__i = 
            ((IData)(1U) + tb_ecc_encoder__DOT__unnamedblk7__DOT__i);
    }
    if ((0U == tb_ecc_encoder__DOT__errors)) {
        VL_WRITEF("ALL ENCODER TESTS PASSED\n");
    } else {
        VL_WRITEF("ENCODER TESTS FAILED: %0d\n",32,
                  tb_ecc_encoder__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_ecc_encoder.sv", 79, "");
}

VL_INLINE_OPT void Vtb_ecc_encoder___024root___act_sequent__TOP__0(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___act_sequent__TOP__0\n"); );
    // Init
    QData/*38:0*/ tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw = 0;
    CData/*0:0*/ tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par = 0;
    CData/*0:0*/ tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0;
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 = 0;
    CData/*0:0*/ tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0;
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0 = 0;
    // Body
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw = 0ULL;
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & vlSelf->tb_ecc_encoder__DOT__data);
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffff7ULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 3U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 1U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffdfULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 5U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 2U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffbfULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 6U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 3U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffff7fULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 7U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 4U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffdffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 9U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 5U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffbffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0xaU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 6U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffff7ffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0xbU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 7U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffefffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0xcU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 8U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffdfffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0xdU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 9U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffbfffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0xeU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0xaU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffff7fffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0xfU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0xbU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffdffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x11U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0xcU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffbffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x12U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0xdU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffff7ffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x13U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0xeU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffefffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x14U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0xfU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffdfffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x15U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x10U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffbfffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x16U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x11U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fff7fffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x17U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x12U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffeffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x18U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x13U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffdffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x19U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x14U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffbffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1aU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x15U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ff7ffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1bU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x16U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fefffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1cU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x17U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fdfffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1dU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x18U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fbfffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1eU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x19U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7f7fffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x1fU));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x1aU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7dffffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x21U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x1bU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7bffffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x22U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x1cU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x77ffffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x23U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x1dU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x6fffffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x24U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (1U & (vlSelf->tb_ecc_encoder__DOT__data 
                 >> 0x1eU));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x5fffffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x25U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0 
        = (vlSelf->tb_ecc_encoder__DOT__data >> 0x1fU);
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x3fffffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_heea96ed9__0)) 
              << 0x26U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 5U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 9U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x11U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x21U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffdULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0)) 
              << 1U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                         >> 3U)));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffbULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0)) 
              << 2U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                         >> 5U)));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 6U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 7U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7fffffffefULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0)) 
              << 4U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                         >> 9U)));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xaU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xbU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xcU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xdU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xeU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0xfU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffeffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0)) 
              << 8U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                         >> 0x11U)));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x12U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x13U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x14U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x15U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x16U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x17U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x18U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x19U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1aU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1bU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1cU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1dU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1eU))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x1fU))));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffeffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x10U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                         >> 0x21U)));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x22U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x23U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x24U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = (1U & ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
                 ^ (IData)((tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                            >> 0x25U))));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par 
        = ((IData)(tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par) 
           ^ (tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
              >> 0x26U));
    tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0 
        = tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__par;
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7effffffffULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | ((QData)((IData)(tb_ecc_encoder__DOT__dut__DOT____Vlvbound_hc2530ae8__0)) 
              << 0x20U));
    tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
        = ((0x7ffffffffeULL & tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw) 
           | (IData)((IData)((1U & VL_REDXOR_64((0x3fffffffffULL 
                                                 & (tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw 
                                                    >> 1U)))))));
    vlSelf->tb_ecc_encoder__DOT__codeword = tb_ecc_encoder__DOT__dut__DOT__unnamedblk1__DOT__cw;
}

void Vtb_ecc_encoder___024root___eval_act(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_ecc_encoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ecc_encoder___024root___eval_nba(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_encoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ecc_encoder___024root___timing_resume(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_ecc_encoder___024root___eval_triggers__act(Vtb_ecc_encoder___024root* vlSelf);

bool Vtb_ecc_encoder___024root___eval_phase__act(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ecc_encoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_ecc_encoder___024root___timing_resume(vlSelf);
        Vtb_ecc_encoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ecc_encoder___024root___eval_phase__nba(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ecc_encoder___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_encoder___024root___dump_triggers__nba(Vtb_ecc_encoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_encoder___024root___dump_triggers__act(Vtb_ecc_encoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ecc_encoder___024root___eval(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ecc_encoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_ecc_encoder.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ecc_encoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_ecc_encoder.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_ecc_encoder___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_ecc_encoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ecc_encoder___024root___eval_debug_assertions(Vtb_ecc_encoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
