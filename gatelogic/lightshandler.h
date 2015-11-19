/*
 * lightshandler.h
 *
 *  Created on: Nov 18, 2015
 *      Author: abody
 */

#ifndef LIGHTSHANDLER_H_
#define LIGHTSHANDLER_H_
#include <Arduino.h>
#include "config.h"

class lightshandler
{
public:
	enum COLORS { GREEN = 0, YELLOW = 1, RED = 2 };
	enum LOOPSTATUS : uint8_t { NONE = 0, INNER = 1, OUTER = 2, BOTH = 3 };

	lightshandler();
	virtual ~lightshandler();
	LOOPSTATUS	update();


private:
	bool loopcheck( bool inner ) { return digitalRead( inner ? PIN_INNERLOOP : PIN_OUTERLOOP ) == LOOP_ACTIVE; }
	static uint8_t	m_outerpins[3];
	static uint8_t	m_innerpins[3];
	LOOPSTATUS		m_prevstatus;
};

#endif /* LIGHTSHANDLER_H_ */
