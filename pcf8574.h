#ifndef PCF8574_H_
#define PCF8574_H_

/*
Christian Goertz <chris.goertz@gmx.de>
2022-04-18
Simple PCF8574 driver for my AVR projects.
I2C Interface API is based on: https://github.com/chrisgoertz/i2c_avr

Released under GPLv3.
Please refer to LICENSE file for licensing information.
*/

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define PCF8574_ADDRBASE (0x20)

/**
* Read Portexpander state
* @param adr: uint8_t Adress of the Portexpander (unshifted)
* @return pinstates
*/
uint8_t pcf8574_getPort(uint8_t adr);

/**
* Set the Portexpander state
* @param adr: uint8_t Adress of the Portexpander (unshifted)
* @param data: uint8_t The new Pinstate
*/
void pcf8574_setPort(uint8_t adr, uint8_t data);

#ifdef __cplusplus
}
#endif

#endif
