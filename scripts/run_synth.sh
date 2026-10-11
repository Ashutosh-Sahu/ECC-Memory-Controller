#!/bin/bash
set -e
mkdir -p synth/reports

# --- Primary analysis: ECC datapath only (no memory) ---
for top in ecc_encoder ecc_decoder; do
  yosys -l synth/reports/${top}.log -p "
    read_verilog -sv rtl/ecc_encoder.sv rtl/ecc_decoder.sv
    hierarchy -check -top ${top}
    synth -top ${top} -flatten
    opt_clean
    check -assert
    tee -o synth/reports/${top}_stat.txt stat
    tee -o synth/reports/${top}_ltp.txt ltp -noff
    write_verilog -noattr synth/${top}_netlist.v
  "
done

# --- Sanity check: full design with ADDR_WIDTH = 3 ---
yosys -l synth/reports/ecc_top.log -p "
  read_verilog -sv rtl/ecc_encoder.sv rtl/ecc_decoder.sv rtl/ecc_memory.sv rtl/ecc_top.sv
  chparam -set ADDR_WIDTH 3 ecc_top
  hierarchy -check -top ecc_top
  synth -top ecc_top -flatten
  opt_clean
  check -assert
  tee -o synth/reports/ecc_top_stat.txt stat
  write_verilog -noattr synth/ecc_top_netlist.v
"
