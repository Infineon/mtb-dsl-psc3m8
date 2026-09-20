# Hardware Abstraction Layer (HAL) Release Notes
The Hardware Abstraction Layer (HAL) provides an implementation of the Hardware Abstraction Layer for the PSC3-P8 family of chips. This API provides convenience methods for initializing and manipulating different hardware peripherals. Depending on the specific chip being used, not all features may be supported.

On devices which contain multiple cores, this library is supported on all cores. If HAL is used on multiple cores at the same time, the application is responsible for ensuring that each peripheral is only used on one core at a given time.

### What's Included?
This release of the HAL includes support for the following drivers:
* ADC
* Clock
* Comp
* DMA
* GPIO
* I2C
* LPTimer
* NPNZ
* NVM
* PWM
* RTC
* SPI
* SysPm
* System
* TRNG
* Timer
* UART

### What Changed?
#### v1.0.0
* Initial release for PSC3-P8 support.


### Supported Software and Tools
This version of the Hardware Abstraction Layer was validated for compatibility with the following Software and Tools:

| Software and Tools                        | Version |
| :---                                      | :----:  |
| ModusToolbox&trade; Software Environment        | 3.8.0   |
| GCC Compiler                              | 14.2.1  |
| IAR Compiler                              | 9.70.2  |
| ARM Compiler                              | 6.22    |


### More information
Use the following links for more information, as needed:
* [API Reference Guide](https://infineon.github.io/mtb-hal-psc3-p8/html/modules.html)
* [Infineon Technologies AG](http://www.infineon.com)
* [Infineon GitHub](https://github.com/infineon)
* [ModusToolbox&trade;](https://www.infineon.com/design-resources/development-tools/sdk/modustoolbox-software)

---
© Infineon Technologies AG or an affiliate of Infineon Technologies AG, 2019-2026.
