/*
 * config.h
 *
 *  Created on: Nov 12, 2015
 *      Author: compi
 */

#ifndef CONFIG_H_
#define CONFIG_H_

//#define VERBOSE 1
//#define __ARDUINOOUTPUTS_VERBOSE 1
//#define __TRAFFICLIGHTS_VERBOSE 1
//#define __GATEHANDLER_VERBOSE 1
//#define __IMPORTDB_VERBOSE 1
//#define DBGSERIALIN

#define BAUDRATE 115200

//#define USE_INTDB
//#define USE_THINDB
//#define USE_HYBRIDDB
//#define USE_HYBINTDB
#define USE_I2CDB

#define STRAIGHT_IOEXT_PINS

//#define DECODE433_REVERSE

#define PIN_RFIN		2
#define PIN_INNERLOOP	A0
#define PIN_OUTERLOOP	A1
#define LOOP_ACTIVE		LOW

#define PIN_IN_GREEN		0
#define PIN_IN_YELLOW		1
#define PIN_IN_RED			2
#define PIN_OUT_GREEN		3
#ifdef STRAIGHT_IOEXT_PINS
#define PIN_OUT_YELLOW		4
#define	PIN_OUT_RED			5
#define PIN_GATE			6
#define	PIN_RELAY_SPARE		7
#else	//	STRAIGHT_IOEXT_PINS
#define PIN_OUT_YELLOW		7
#define	PIN_OUT_RED			6
#define	PIN_RELAY_SPARE		5
#define PIN_GATE			4
#endif	//	STRAIGHT_IOEXT_PINS

#define INNER_LIGHTS_PINS 	PIN_IN_GREEN,PIN_IN_YELLOW,PIN_IN_RED
#define OUTER_LIGHTS_PINS 	PIN_OUT_GREEN,PIN_OUT_YELLOW,PIN_OUT_RED
#define OTHER_RELAY_PINS	PIN_GATE,PIN_RELAY_SPARE

#define PCF8574_ADDRESS		0x20

#define RELAY_OFF	HIGH
#define RELAY_ON	LOW

#define LCD_I2C_ADDRESS	0x27	//	usually 0x27 or 0x3f
#define LCD_WIDTH	16		//	in characters
#define LCD_HEIGHT	2		//	in lines

//#define	ENABLE_GODMODE
#define	GODMODE_MIN 0x3f8
#define	GODMODE_MAX 0x3ff

//#define RELAXED_TIME
//#define RELAXED_POS
#define PASS_TIMEOUT 		120000
#define PASS_WARN_TIMEOUT	30000
#define RETREAT_TIMEOUT 	10000

#define OPEN_PULSE_WIDTH 2000

#define HYBRIDDB_EEPROM_OFFSET 0
#define HYBRIDDB_EEPROM_ADDRESS 0x57
#define I2CDB_EEPROM_OFFSET 0
#define I2CDB_EEPROM_ADDRESS 0x50
#define I2CDB_EEPROM_BITS 16


#endif /* CONFIG_H_ */
