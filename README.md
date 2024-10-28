# avr_pcf8574
C Library for interfacing PCF8574 Portexpander with my AVR MCUs
## Overview
Just to keep it as simple as possible, there are only two functions in this library.

### uint8_t pcf8574_getPort(uint8_t adr)
+ param adr: uint8_t The unshifted I2C adress of the portexpander.
+ return uint8_t the complete state of all port pins.
  
### void pcf8574_setPort(uint8_t adr, uint8_t data)
+ param adr: uint8_t The unshifted I2C adress of the portexpander.
+ param data: uint8_t The new state for the port pins.
  This will overwrite the actual pin state!

## I2C Library
This Library is based on the following i2c library:
https://github.com/chrisgoertz/i2c_avr
