// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_faults.h for the primary calling header

#include "Vtb_ecc_faults__pch.h"
#include "Vtb_ecc_faults___024root.h"

VL_INLINE_OPT void Vtb_ecc_faults___024root___nba_sequent__TOP__1(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tb_ecc_faults__DOT__clk__v0) {
        vlSelf->tb_ecc_faults__DOT__clk = vlSelf->__Vdlyvval__tb_ecc_faults__DOT__clk__v0;
        vlSelf->__Vdlyvset__tb_ecc_faults__DOT__clk__v0 = 0U;
    }
}

VL_INLINE_OPT void Vtb_ecc_faults___024root___nba_comb__TOP__1(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___nba_comb__TOP__1\n"); );
    // Init
    QData/*38:0*/ tb_ecc_faults__DOT__dut__DOT__stored_cw;
    tb_ecc_faults__DOT__dut__DOT__stored_cw = 0;
    QData/*38:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__fixed = 0;
    CData/*5:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__syn = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT__unnamedblk1__DOT__ovr = 0;
    CData/*0:0*/ tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0;
    tb_ecc_faults__DOT__dut__DOT__u_dec__DOT____Vlvbound_hb00a9d30__0 = 0;
    // Body
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

void Vtb_ecc_faults___024root___nba_sequent__TOP__0(Vtb_ecc_faults___024root* vlSelf);
void Vtb_ecc_faults___024root___nba_comb__TOP__0(Vtb_ecc_faults___024root* vlSelf);

void Vtb_ecc_faults___024root___eval_nba(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_faults___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_faults___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_faults___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_faults___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_ecc_faults___024root___timing_resume(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4b7f8849__0.resume("@(negedge tb_ecc_faults.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_ecc_faults___024root___timing_commit(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4b7f8849__0.commit("@(negedge tb_ecc_faults.clk)");
    }
}

void Vtb_ecc_faults___024root___eval_triggers__act(Vtb_ecc_faults___024root* vlSelf);
void Vtb_ecc_faults___024root___eval_act(Vtb_ecc_faults___024root* vlSelf);

bool Vtb_ecc_faults___024root___eval_phase__act(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ecc_faults___024root___eval_triggers__act(vlSelf);
    Vtb_ecc_faults___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_ecc_faults___024root___timing_resume(vlSelf);
        Vtb_ecc_faults___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ecc_faults___024root___eval_phase__nba(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ecc_faults___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_faults___024root___dump_triggers__nba(Vtb_ecc_faults___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_faults___024root___dump_triggers__act(Vtb_ecc_faults___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ecc_faults___024root___eval(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ecc_faults___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_ecc_faults.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ecc_faults___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_ecc_faults.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_ecc_faults___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_ecc_faults___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ecc_faults___024root___eval_debug_assertions(Vtb_ecc_faults___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_faults__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_faults___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
