// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_encoder4.h for the primary calling header

#include "Vtb_ecc_encoder4__pch.h"
#include "Vtb_ecc_encoder4___024root.h"

VlCoroutine Vtb_ecc_encoder4___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_encoder4___024root* vlSelf);

void Vtb_ecc_encoder4___024root___eval_initial(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval_initial\n"); );
    // Body
    Vtb_ecc_encoder4___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ecc_encoder4___024root___eval_initial__TOP__Vtiming__0(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_ecc_encoder4__DOT__data = 0xbU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb/tb_ecc_encoder4.sv", 
                                       10);
    VL_WRITEF("data=%b codeword=%b total_parity=00000000000000000000000000000000\n",
              4,vlSelf->tb_ecc_encoder4__DOT__data,
              8,(((IData)(vlSelf->tb_ecc_encoder4__DOT__dut1__DOT__hamming_word) 
                  << 1U) | (1U & VL_REDXOR_8(vlSelf->tb_ecc_encoder4__DOT__dut1__DOT__hamming_word))));
    VL_FINISH_MT("tb/tb_ecc_encoder4.sv", 13, "");
}

VL_INLINE_OPT void Vtb_ecc_encoder4___024root___act_sequent__TOP__0(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_ecc_encoder4__DOT__dut1__DOT____VdfgTmp_h6b7606e8__0;
    tb_ecc_encoder4__DOT__dut1__DOT____VdfgTmp_h6b7606e8__0 = 0;
    // Body
    tb_ecc_encoder4__DOT__dut1__DOT____VdfgTmp_h6b7606e8__0 
        = (1U & VL_REDXOR_4((0xcU & (IData)(vlSelf->tb_ecc_encoder4__DOT__data))));
    vlSelf->tb_ecc_encoder4__DOT__dut1__DOT__hamming_word 
        = ((0x70U & ((IData)(vlSelf->tb_ecc_encoder4__DOT__data) 
                     << 3U)) | ((8U & ((0xfffffff8U 
                                        & ((IData)(vlSelf->tb_ecc_encoder4__DOT__data) 
                                           << 2U)) 
                                       ^ ((IData)(tb_ecc_encoder4__DOT__dut1__DOT____VdfgTmp_h6b7606e8__0) 
                                          << 3U))) 
                                | ((4U & ((IData)(vlSelf->tb_ecc_encoder4__DOT__data) 
                                          << 2U)) | 
                                   ((2U & (((IData)(vlSelf->tb_ecc_encoder4__DOT__data) 
                                            ^ (IData)(tb_ecc_encoder4__DOT__dut1__DOT____VdfgTmp_h6b7606e8__0)) 
                                           << 1U)) 
                                    | (1U & VL_REDXOR_4(
                                                        (0xbU 
                                                         & (IData)(vlSelf->tb_ecc_encoder4__DOT__data))))))));
}

void Vtb_ecc_encoder4___024root___eval_act(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_ecc_encoder4___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ecc_encoder4___024root___eval_nba(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_ecc_encoder4___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_ecc_encoder4___024root___timing_resume(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_ecc_encoder4___024root___eval_triggers__act(Vtb_ecc_encoder4___024root* vlSelf);

bool Vtb_ecc_encoder4___024root___eval_phase__act(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ecc_encoder4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_ecc_encoder4___024root___timing_resume(vlSelf);
        Vtb_ecc_encoder4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ecc_encoder4___024root___eval_phase__nba(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ecc_encoder4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_encoder4___024root___dump_triggers__nba(Vtb_ecc_encoder4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_encoder4___024root___dump_triggers__act(Vtb_ecc_encoder4___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ecc_encoder4___024root___eval(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_ecc_encoder4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_ecc_encoder4.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_ecc_encoder4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_ecc_encoder4.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_ecc_encoder4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_ecc_encoder4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ecc_encoder4___024root___eval_debug_assertions(Vtb_ecc_encoder4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_encoder4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_encoder4___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
