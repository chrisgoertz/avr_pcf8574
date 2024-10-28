/*
pcf8574 lib 0x02

copyright (c) Davide Gironi, 2012

Released under GPLv3.
Please refer to LICENSE file for licensing information.
*/

#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>
#include "i2c_master.h"
#include "pcf8574.h"


uint8_t pcf8574_getPort(uint8_t adr)
{
	i2c_master_start(adr, I2C_READ);
	uint8_t data = i2c_master_readNack();
	i2c_master_stop();
	return data;
}

void pcf8574_setPort(uint8_t adr, uint8_t data)
{
	i2c_master_start(adr, I2C_WRITE);
	i2c_master_write(data);
	i2c_master_stop();
}
