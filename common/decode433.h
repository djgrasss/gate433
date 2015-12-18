/*
 * decode433.h
 *
 *  Created on: Dec 18, 2015
 *      Author: compi
 */

#ifndef DECODE433_H_
#define DECODE433_H_

#include <Arduino.h>

extern volatile bool 		g_codeready;
extern volatile uint16_t 	g_code;
extern volatile uint32_t 	g_codetime;
extern volatile uint32_t 	g_lastedge;

enum RcvState : uint8_t {
	  START
	, DATA
	, STOP
};

void isr();

#endif /* DECODE433_H_ */
