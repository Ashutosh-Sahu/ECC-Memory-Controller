// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_ECC_ENCODER4__SYMS_H_
#define VERILATED_VTB_ECC_ENCODER4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_ecc_encoder4.h"

// INCLUDE MODULE CLASSES
#include "Vtb_ecc_encoder4___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_ecc_encoder4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_ecc_encoder4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_ecc_encoder4___024root     TOP;

    // CONSTRUCTORS
    Vtb_ecc_encoder4__Syms(VerilatedContext* contextp, const char* namep, Vtb_ecc_encoder4* modelp);
    ~Vtb_ecc_encoder4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
