&&_MTB_RECIPE__OPENOCD_QSPI_FLASHLOADER&&
source [find interface/kitprog3.cfg]
&&_MTB_RECIPE__VSCODE_OPENOCD_PROBE_SERIAL_CMD&&
transport select &&_MTB_RECIPE__PROBE_INTERFACE&&
&&_MTB_RECIPE__OPENOCD_PPCA_ENABLE_CMD&&
source [find target/&&_MTB_RECIPE__OPEN_OCD_FILE&&]
&&_MTB_RECIPE__OPENOCD_CHIP&&.cm33&&_MTB_RECIPE__OPENOCD_CHIP_PPCA_SUFFIX&& configure -rtos auto -rtos-wipe-on-reset-halt 1
gdb_breakpoint_override hard
&&_MTB_RECIPE__OPENOCD_PROBE_FREQUENCY_CMD&&
CDLiveWatchSetup//PSC3 Only//
if {$::ENABLE_ACQUIRE} {//PSC3 Only//
    init//PSC3 Only//
    reset init//PSC3 Only//
}//PSC3 Main Only//
} else {//PSC3_P8 PPCA Only//
    init; reset_halt ppca_&&_MTB_RECIPE__OPENOCD__PSC3_P8_PPCA_CORE_IDX&& attach//PSC3_P8 PPCA Only//
}//PSC3_P8 PPCA Only//

proc CDLiveWatchSetup {} {//PSC3 Only//
}//PSC3 Only//