# Parameterized SEC-DED ECC Memory Controller (SystemVerilog)

A synthesizable (39,32) SEC-DED ECC memory controller written in SystemVerilog,
with a self-checking testbench, fault injection, SVA assertions and a basic
Yosys synthesis analysis. Built as an educational project.

> **Scope:** educational design. Not production IP. No STA, power or
> physical-design analysis was performed.

## Features

- 32-bit data, 7 ECC bits (6 Hamming + 1 overall parity), 39-bit stored word
- Single-error correction, double-error detection (SEC-DED)
- Third status class `uncorrectable` for odd-weight errors whose syndrome points outside the codeword
- `ADDR_WIDTH`-parameterized memory (depth = 2^ADDR_WIDTH); data width fixed at 32
- Fault injection into stored words from the testbench (no change to the RTL)
- Self-checking directed + randomized testbench, 4 SVA assertions
- Yosys generic synthesis flow with cell-count and longest-path reports

## Architecture

```
            WRITE PATH
 write_data[31:0] --> ECC Encoder --> codeword[38:0] --> Memory (DEPTH x 39)
                                                              |
                                  (testbench-only bit flips)  |
                                                              v
            READ PATH                                 stored codeword
 read_data[31:0] <-- ECC Decoder <----------------------------+
                        |--> single_error / error_corrected
                        |--> double_error
                        '--> uncorrectable
```

| Module | File | Role |
|---|---|---|
| `ecc_encoder` | `rtl/ecc_encoder.sv` | Places data, computes 6 Hamming bits and overall parity |
| `ecc_decoder` | `rtl/ecc_decoder.sv` | Syndrome, classification, single-bit correction |
| `ecc_memory`  | `rtl/ecc_memory.sv`  | Single-port 39-bit memory, sync write, combinational read |
| `ecc_top`     | `rtl/ecc_top.sv`     | Structural wrapper, status-flag gating |

`ecc_encoder4` / `ecc_decoder4` are the 4-bit (8,4) versions used to learn the
scheme and test it exhaustively.

## SEC-DED in brief

**Sizing:** r Hamming bits must satisfy `2^r >= m + r + 1`. For m = 32, r = 5
gives 32 < 38 (fails) and r = 6 gives 64 >= 39. Plus one overall parity bit,
so 7 ECC bits and a 39-bit word.

**Layout:** `codeword[i]` is position i. Hamming bits sit at positions
1, 2, 4, 8, 16, 32. Data bits d0..d31 fill positions 3, 5, 6, 7, 9..15,
17..31, 33..38. `codeword[0]` is the overall parity bit. Parity bit P_k
covers every position whose address has bit k set (data bits covered:
18, 18, 18, 15, 15, 6 for P1..P32).

**Syndrome:** bit k is the XOR of all covered positions, parity bit included.
For a single flip, the syndrome equals the flipped position. It depends only
on the error pattern, not on the data, because the code is linear.

| Syndrome | Overall parity | Meaning | Action |
|---|---|---|---|
| 0 | even | No error | None |
| != 0, <= 38 | odd | Single error at position = syndrome | Flip that bit |
| 0 | odd | Overall parity bit flipped | Data fine, flag single error |
| != 0 | even | Double error | Flag only, do not correct |
| > 38 | odd | Invalid position (3+ flips) | Flag `uncorrectable` |

## Interface (`ecc_top`)

| Signal | Dir | Description |
|---|---|---|
| `clk` | in | Clock |
| `write_en` | in | Write `write_data` to `addr` at next rising edge |
| `read_en` | in | Read `addr`; result valid in the same cycle |
| `addr[ADDR_WIDTH-1:0]` | in | Shared address (single port) |
| `write_data[31:0]` | in | Data to store |
| `read_data[31:0]` | out | Corrected data |
| `single_error`, `error_corrected` | out | Single error found and corrected |
| `double_error` | out | Double error detected, not corrected |
| `uncorrectable` | out | Syndrome out of range |

Status flags are masked unless `read_en` is high and `write_en` is low.
Simultaneous `write_en` and `read_en` is illegal; an assertion checks for it.

## Verification

Tools: Verilator 5.020 (`--binary --timing --assert`).

| Testbench | What it checks |
|---|---|
| `tb_ecc_encoder4`, `tb_ecc_decoder4` | Exhaustive: all 16 inputs; every single flip (128) and double flip (448) |
| `tb_ecc_encoder` | Hand-computed vectors (`0x0F`, `0x4100000014`), all 32 single-bit inputs, 10,000 random words; checks even total parity, all Hamming checks pass, data readable back |
| `tb_ecc_decoder` | 206 data values x 39 single flips x 741 double flips, plus one directed 3-flip uncorrectable case |
| `tb_ecc_faults` | Through `ecc_top`: injection into the stored array, 78 single and 1482 double cases, persistence of corruption across reads |
| `tb_ecc_basic` | Clean write/read across all addresses, random addresses and data |
| `tb_ecc_top` | Directed (clean, 1-bit data flip, 1-bit parity flip, 2-bit data flip) + 500 random iterations + SVA + summary |

**Fault injection:** a testbench task XORs a mask into `dut.u_mem.mem[addr]`
(hierarchical access). Nothing is added to the RTL, so the synthesized design
is unaffected.

**Self-checking:** the testbench chooses how many bits to flip, so it knows the
expected result: 0 flips = clean, 1 = corrected with original data,
2 = double flag raised. Independence from the RTL comes from this plus the
hand-computed vectors.

**Assertions (in `tb_ecc_top`):**
1. Status flags are mutually exclusive (`$onehot0`)
2. No simultaneous read and write
3. If `single_error` during a read, `read_data == expected_data`
4. No error flags while idle

**Result of the final `tb_ecc_top` run** (random counts vary with the seed):

```
 Total tests          : 525
 Clean (no error)     : 182
 Corrected (1-bit)    : 163
 Detected (2-bit)     : 180
 Mismatches           : 0
 Assertion failures   : 0
 RESULT: PASS
```

Assertion 2 passes because the testbench never drives both enables together.

## Running

```bash
# Final testbench
verilator --binary --timing --assert -Wall -Wno-BLKSEQ \
  rtl/ecc_encoder.sv rtl/ecc_decoder.sv rtl/ecc_memory.sv rtl/ecc_top.sv \
  tb/tb_ecc_top.sv --top-module tb_ecc_top -Mdir sim/obj_final
./sim/obj_final/Vtb_ecc_top

# Fault-injection sweep
verilator --binary --timing --assert -Wall \
  rtl/ecc_encoder.sv rtl/ecc_decoder.sv rtl/ecc_memory.sv rtl/ecc_top.sv \
  tb/tb_ecc_faults.sv --top-module tb_ecc_faults -Mdir sim/obj_faults
./sim/obj_faults/Vtb_ecc_faults

# Synthesis
./scripts/run_synth.sh
```

`-Wno-BLKSEQ` silences a style warning on the counter inside the assertion
action blocks (testbench only).

## Synthesis (Yosys 0.33, generic gate mapping)

Flow (`scripts/run_synth.sh`): `read_verilog -sv`, `hierarchy`, `synth -flatten`,
`check -assert`, `stat`, `ltp -noff`. The ECC datapath is synthesized without
the memory, as a real design would use an SRAM macro. A small full-design run
(`ADDR_WIDTH = 3`) is a sanity check.

| Design | Cells | Flip-flops | Longest path (cells) |
|---|---|---|---|
| `ecc_encoder` | 122 (117 XOR/XNOR, 5 NOT) | 0 | 23 (`data[2]` to `codeword[0]`) |
| `ecc_decoder` | 612 (129 XOR/XNOR, 134 MUX, 190 OR, 112 ANDNOT, others) | 0 | 36 (`rx[3]` to `corrected_data[18]`) |
| `ecc_top`, ADDR_WIDTH=3 | 1352 | 312 (= 8 x 39) | not measured |

No latches were inferred. The memory array mapped to enable flip-flops with no
memory cell.

**Observations:**
- The encoder is almost entirely XOR, as expected.
- The decoder adds MUX/OR/AND logic for classification, the dynamic
  `fixed[syn]` correction flip and data extraction.
- Longest paths are 23 and 36 *cell levels*, not nanoseconds. A balanced
  2-input XOR tree over 38 inputs needs about 6 levels, so the measured depth
  suggests serial XOR chains from the loop-based parity code. The encoder's
  overall parity also waits on the Hamming bits.
- These are unmapped generic gates. They say nothing about real delay, area in
  um^2, or power.

## Limitations

- **Triple errors** can look like a single error and be miscorrected; only
  syndromes above 38 are caught as `uncorrectable`. The random test injects at
  most 2 flips.
- **No scrubbing:** a corrected read does not repair the stored word.
- **Combinational read:** real SRAM macros read synchronously and need a
  pipelined decoder.
- **No reset** and no byte-write support.
- **Fixed 32-bit data width.** Only `ADDR_WIDTH` is parameterized.
- **Single port;** simultaneous read/write is illegal.
- Testbench fault injection uses hierarchical paths (works with Verilator 5.x;
  not portable to every tool).
- Random testing used a small memory (`ADDR_WIDTH = 4`); counts depend on the seed.
- Synthesis is generic only: no standard-cell library, no STA, no power, no
  place and route.

## Future work

- Rewrite parity as masked reductions (`^(vector & MASK)`) to get balanced XOR
  trees, then re-synthesize and compare depth. Identified, **not yet done**.
- Compute encoder overall parity directly from data bits, in parallel with
  the Hamming bits.
- Replace the dynamic-index correction with per-bit constant compares.
- Add SDC constraints and static timing analysis with a real cell library.
- Registered read, pipelined decoder, memory scrubbing, error counters,
  parameterized data width.

## Repository layout

```
rtl/        ecc_encoder.sv, ecc_decoder.sv, ecc_memory.sv, ecc_top.sv,
            ecc_encoder4.sv, ecc_decoder4.sv
tb/         tb_ecc_top.sv, tb_ecc_basic.sv, tb_ecc_faults.sv,
            tb_ecc_encoder.sv, tb_ecc_decoder.sv, tb_ecc_memory.sv,
            tb_ecc_encoder4.sv, tb_ecc_decoder4.sv
scripts/    run_synth.sh
synth/      netlists and reports (generated)
```
