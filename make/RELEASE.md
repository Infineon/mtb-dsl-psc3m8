### PSOC™ Control C3 Performance Line GNU make Build System
This repo provides the build recipe make files and scripts for building and programming PSOC™ Control C3 Performance Line applications. Builds can be run either through a command-line interface (CLI) or through a supported IDE such as Eclipse or VS Code.

### What's Included?
This release of the PSOC™ Control C3 Performance Line GNU make build recipe includes complete support for building, programming, and debugging PSOC™ Control C3 Performance Line application projects. It is expected that a code example contains a top level make file for itself and references a Board Support Package (BSP) that defines specific items, like the PSOC™ Control C3 Performance Line part, for the target board. Supported functionality includes the following:

* Supported operations:
    * Build
    * Program
    * Debug
    * IDE Integration (Eclipse, VS Code, IAR, uVision)
* Supported toolchains:
    * GCC
    * IAR
    * ARM Compiler 6
    * LLVM Embedded Toolchain for Arm

### What Changed?
#### v1.2.0
* Aligned SEGGER J-Link device aliases with the official SEGGER naming.
* Fixed soft-float configuration for ARM and IAR toolchains. `VFP_SELECT=softfloat` builds no longer select the FPv5-SP hardware FPU.
* Updated IAR toolchain flags to stop forcing --no_dwarf4 and use the compiler default DWARF format.
* Added Advanced Programming Eclipse launch configuration / VS Code task, allowing to launch ModusToolbox™ Programmer over KitProg3 or J-Link.
* Changed Eclipse combiner-signer launch configuration names to no longer include the combiner-signer configuration name. Single-core projects now use the application name, and multi-core projects use the project name.

#### v1.1.0
* Enhanced project export to Keil uVision IDE.
* Resolved several issues with memory utilization reporting.
* Added CRC32 postbuild calculation and injection support for the PPCA cores.

#### v1.0.0
* Initial release.

### Product/Asset Specific Instructions
Builds require that the ModusToolbox tools be installed on your machine. This comes with the ModusToolbox install. On Windows machines, it is recommended that CLI builds be executed using the Cygwin.bat located in ModusToolBox/tools_x.y/modus-shell install directory. This guarantees a consistent shell environment for your builds.

To list the build options, run the "help" target by typing "make help" in CLI. For a verbose documentation on a specific subject type "make help CY_HELP={variable/target}", where "variable" or "target" is one of the listed make variables or targets.

### Supported Software and Tools
This version of the PSOC™ Control C3 Performance Line build system was validated for compatibility with the following Software and Tools:

| Software and Tools                        | Version |
| :---                                      | :----:  |
| ModusToolbox™ Software Environment        | 3.8     |
| GCC Compiler                              | 14.2.1  |
| LLVM Compiler                             | 22.1.0  |
| IAR Compiler                              | 9.70.2  |
| ARM Compiler                              | 6.22    |

### More information
* [Infineon GitHub](https://github.com/Infineon)
* [ModusToolbox™](https://www.infineon.com/cms/en/design-support/tools/sdk/modustoolbox-software)

---
Copyright (c) 2022-2026, Infineon Technologies AG, or an affiliate of Infineon Technologies AG. All rights reserved.
