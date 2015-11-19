/*
 * config.h
 *
 *  Created on: Nov 12, 2015
 *      Author: compi
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#define USE_DS3231
//#define USE_INDUCTION_LOOPS

//#define FAILSTATS
//#define VERBOSE
//#define DBGSERIALIN
#define EXPECT_RESPONSE

#define SHORT_MIN_TIME	220
#define SHORT_MAX_TIME	510
#define LONG_MIN_TIME	580
#define LONG_MAX_TIME	1100
#define CYCLE_MAX_TIME	( SHORT_MAX_TIME + LONG_MAX_TIME )
#define CYCLE_MIN_TIME	( SHORT_MIN_TIME + LONG_MIN_TIME )
#define	STOP_MIN_TIME	12000

#define LOOP_ACTIVE	HIGH

#define PIN_RFIN		2
#define PIN_GATE		A3
#define PIN_OUTERLOOP	A0
#define PIN_INNERLOOP	A1

#define RELAY_PORTS { 9, 8, 7, 6, 5, 4, A3, A2 }

#endif /* CONFIG_H_ */
