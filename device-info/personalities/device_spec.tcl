################################################################################
# device_spec.tcl
#
# Device-specific PSC3M8/P8/M7/P7 helper.
# Provides SCB-to-HF clock lookup table used by SCB personalities
# to resolve the correct HF clock source per SCB instance.
#
# Data source: PSOC™ Control C3 (PSC3P8xx, PSC3M8xx, PSC3P7xx, PSC3M7xx)
# TRM, Table 126
#
# Usage from personality XML:
#   runTcl("device_spec.tcl", "get_hf_clock_for_scb", scbInst)
#
################################################################################

set channelName stdout
if {[chan names ModusToolbox] eq "ModusToolbox"} {
    set channelName ModusToolbox
}

################################################################################
# get_hf_clock_for_scb - Look up the HF clock resource for a given SCB
#                        instance on PSC3M8 devices.
#
# Data source: PSOC™ Control C3 architecture, section "CLK_HF distribution"
#
# SCB-to-HF clock mapping (TRM Table 126):
#   scb[0..4] -> CLK_HF2  (Peri clock group 3)
#   scb[5..6] -> CLK_HF4  (Peri clock group 5)
#
# Parameters:
#   scbInst - SCB instance index (0..6)
#
# Returns: Full HF clock resource string (e.g. "srss[0].clock[0].hfclk[2]")
#          Raises a Tcl error if scbInst is not in the lookup table.
#
# Note: Wounded MPNs preserve SCB instance numbering from the super-set MPN
#       (removing an SCB does not renumber the remaining instances), so a
#       single lookup table covers all variants in the family.
################################################################################
proc get_hf_clock_for_scb {scbInst} {
    # SCB instance -> HF clock index

    array set scb_to_hf {
            0            2
            1            2
            2            2
            3            2
            4            2
            5            4
            6            4
    }

    if {![info exists scb_to_hf($scbInst)]} {
        error "Unknown SCB instance $scbInst for PSC3M8 device"
    }

    set hfIdx $scb_to_hf($scbInst)
    return "srss\[0\].clock\[0\].hfclk\[$hfIdx\]"
}

################################################################################
# Entry point — called when invoked via runTcl() or tclsh.
################################################################################
proc main {} {
    if {$::argc < 1} {
        error "device_spec.tcl requires at least 1 argument (functionName), got $::argc"
    }

    set funcName [lindex $::argv 0]
    switch $funcName {
        "get_hf_clock_for_scb" {
            set result [get_hf_clock_for_scb [lindex $::argv 1]]
            puts -nonewline $::channelName $result
        }
        default {
            error "Unknown function: $funcName"
        }
    }
    return $result
}

# Only run main when invoked directly (not when sourced)
if {[info exists ::argc]} {
    main
}
