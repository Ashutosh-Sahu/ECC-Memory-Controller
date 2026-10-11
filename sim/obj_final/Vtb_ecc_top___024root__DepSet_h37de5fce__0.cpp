// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_top.h for the primary calling header

#include "Vtb_ecc_top__pch.h"
#include "Vtb_ecc_top__Syms.h"
#include "Vtb_ecc_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ecc_top___024root___dump_triggers__act(Vtb_ecc_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ecc_top___024root___eval_triggers__act(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_ecc_top__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_ecc_top__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->tb_ecc_top__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_ecc_top__DOT__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_ecc_top__DOT__clk__0 
        = vlSelf->tb_ecc_top__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ecc_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_ecc_top___024root___nba_sequent__TOP__0(Vtb_ecc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_ecc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ecc_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0;
    __Vdlyvdim0__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0;
    QData/*38:0*/ __Vdlyvval__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0;
    __Vdlyvval__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0;
    __Vdlyvset__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0 = 0U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__write_en) 
                       & (IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__read_en)))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: tb_ecc_top.sv:31: Assertion failed in %Ntb_ecc_top.a_no_rw_contention: A2: simultaneous read and write\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                vlSelf->tb_ecc_top__DOT__assert_fails 
                    = ((IData)(1U) + vlSelf->tb_ecc_top__DOT__assert_fails);
                VL_STOP_MT("tb/tb_ecc_top.sv", 31, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ VL_ONEHOT0_I((((IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__single_error) 
                                              << 2U) 
                                             | (((IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__double_error) 
                                                 << 1U) 
                                                | (IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__uncorrectable)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: tb_ecc_top.sv:26: Assertion failed in %Ntb_ecc_top.a_flags_exclusive: A1: status flags not mutually exclusive\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                vlSelf->tb_ecc_top__DOT__assert_fails 
                    = ((IData)(1U) + vlSelf->tb_ecc_top__DOT__assert_fails);
                VL_STOP_MT("tb/tb_ecc_top.sv", 26, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__read_en) 
                                | (~ (((IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__single_error) 
                                       | (IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__double_error)) 
                                      | (IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__uncorrectable)))))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: tb_ecc_top.sv:41: Assertion failed in %Ntb_ecc_top.a_no_flags_when_idle: A4: error flag raised while idle\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                vlSelf->tb_ecc_top__DOT__assert_fails 
                    = ((IData)(1U) + vlSelf->tb_ecc_top__DOT__assert_fails);
                VL_STOP_MT("tb/tb_ecc_top.sv", 41, "");
            }
        }
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((1U & (~ ((~ ((IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__read_en) 
                                    & (IData)(vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__single_error))) 
                                | (vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__read_data 
                                   == vlSelf->__Vsampled__TOP__tb_ecc_top__DOT__expected_data)))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF("[%0t] %%Error: tb_ecc_top.sv:36: Assertion failed in %Ntb_ecc_top.a_correction_integrity: A3: single_error but read_data != expected_data\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                vlSelf->tb_ecc_top__DOT__assert_fails 
                    = ((IData)(1U) + vlSelf->tb_ecc_top__DOT__assert_fails);
                VL_STOP_MT("tb/tb_ecc_top.sv", 36, "");
            }
        }
    }
    if (vlSelf->tb_ecc_top__DOT__write_en) {
        __Vdlyvval__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0 
            = vlSelf->tb_ecc_top__DOT__dut__DOT__enc_cw;
        __Vdlyvset__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0 
            = vlSelf->tb_ecc_top__DOT__addr;
    }
    if (__Vdlyvset__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0) {
        vlSelf->tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem[__Vdlyvdim0__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0] 
            = __Vdlyvval__tb_ecc_top__DOT__dut__DOT__u_mem__DOT__mem__v0;
    }
}
