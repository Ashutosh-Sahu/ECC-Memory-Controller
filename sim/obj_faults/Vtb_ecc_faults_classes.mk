# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb_ecc_faults.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb_ecc_faults \
	Vtb_ecc_faults___024root__DepSet_hc720a3c4__0 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__0 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__1 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__2 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__3 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__4 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__5 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__6 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__7 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__8 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__9 \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__10 \
	Vtb_ecc_faults__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb_ecc_faults___024root__Slow \
	Vtb_ecc_faults___024root__DepSet_hc720a3c4__0__Slow \
	Vtb_ecc_faults___024root__DepSet_hb8cd6e5b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb_ecc_faults__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
