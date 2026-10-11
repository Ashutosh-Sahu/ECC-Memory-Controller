// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ecc_top.h for the primary calling header

#include "Vtb_ecc_top__pch.h"
#include "Vtb_ecc_top__Syms.h"
#include "Vtb_ecc_top___024root.h"

void Vtb_ecc_top___024root___ctor_var_reset(Vtb_ecc_top___024root* vlSelf);

Vtb_ecc_top___024root::Vtb_ecc_top___024root(Vtb_ecc_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ecc_top___024root___ctor_var_reset(this);
}

void Vtb_ecc_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_ecc_top___024root::~Vtb_ecc_top___024root() {
}
