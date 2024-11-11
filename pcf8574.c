/*
Christian Goertz <chris.goertz@gmx.de>
2022-04-18
Simple PCF8574 driver for my AVR projects.
I2C Interface API is based on: https://github.com/chrisgoertz/i2c_avr

Released under GPLv3.
Please refer to LICENSE file for licensing information.
*/


#include <stdint.h>
#include <i2c_master.h>
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
