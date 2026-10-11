// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ECC_TOP__SYMS_H_
#define VERILATED_VTB_ECC_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_ecc_top.h"

// INCLUDE MODULE CLASSES
#include "Vtb_ecc_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_ecc_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_ecc_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_ecc_top___024root          TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_ecc_top;
    VerilatedScope __Vscope_tb_ecc_top__a_correction_integrity;
    VerilatedScope __Vscope_tb_ecc_top__a_flags_exclusive;
    VerilatedScope __Vscope_tb_ecc_top__a_no_flags_when_idle;
    VerilatedScope __Vscope_tb_ecc_top__a_no_rw_contention;

    // CONSTRUCTORS
    Vtb_ecc_top__Syms(VerilatedContext* contextp, const char* namep, Vtb_ecc_top* modelp);
    ~Vtb_ecc_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
