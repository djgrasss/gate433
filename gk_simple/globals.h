/*
 * globals.h
 *
 *  Created on: Feb 8, 2016
 *      Author: abody
 */

#ifndef GLOBALS_H_
#define GLOBALS_H_
#include "config.h"
#include "sdfatlogwriter.h"
#include "arduinooutputs.h"
#include "inductiveloop.h"
#include <eepromdb.h>
#include <thindb.h>
#include <i2cdb.h>
#include <PCF8574.h>

extern SdFat			g_sd;
extern sdfatlogwriter	g_logger;

#ifdef USE_I2CDB
extern i2cdb			g_db(I2CDB_EEPROM_ADDRESS, I2CDB_EEPROM_BITS, I2CDB_EEPROMPAGE_LENGTH);
#endif
#ifdef USE_EEPROMDB
extern eepromdb			g_db;
#endif

#ifdef USE_IOEXTENDER_OUTPUTS
extern PCF8574			g_outputs;
#else	//	USE_IOEXTENDER_OUTPUTS
extern arduinooutputs	g_outputs;
#endif	//	USE_IOEXTENDER_OUTPUTS

extern inductiveloop	g_loop;


#endif /* GLOBALS_H_ */
