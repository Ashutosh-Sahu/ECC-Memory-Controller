// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_ecc_top__pch.h"
#include "Vtb_ecc_top.h"
#include "Vtb_ecc_top___024root.h"

// FUNCTIONS
Vtb_ecc_top__Syms::~Vtb_ecc_top__Syms()
{
}

Vtb_ecc_top__Syms::Vtb_ecc_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_ecc_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_ecc_top.configure(this, name(), "tb_ecc_top", "tb_ecc_top", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_ecc_top__a_correction_integrity.configure(this, name(), "tb_ecc_top.a_correction_integrity", "a_correction_integrity", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_ecc_top__a_flags_exclusive.configure(this, name(), "tb_ecc_top.a_flags_exclusive", "a_flags_exclusive", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_ecc_top__a_no_flags_when_idle.configure(this, name(), "tb_ecc_top.a_no_flags_when_idle", "a_no_flags_when_idle", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_ecc_top__a_no_rw_contention.configure(this, name(), "tb_ecc_top.a_no_rw_contention", "a_no_rw_contention", -12, VerilatedScope::SCOPE_OTHER);
}
