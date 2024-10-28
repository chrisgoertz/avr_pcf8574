/*
pcf8574 lib 0x02

copyright (c) Davide Gironi, 2012

Released under GPLv3.
Please refer to LICENSE file for licensing information.
*/

#include <stdint.h>

#ifndef PCF8574_H_
#define PCF8574_H_

#define PCF8574_ADDRBASE (0x20) //device base address





uint8_t pcf8574_getPort(uint8_t adr);
void pcf8574_setPort(uint8_t adr, uint8_t data);
#endif
