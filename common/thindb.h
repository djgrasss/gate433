/*
 * extdb.h
 *
 *  Created on: Nov 11, 2015
 *      Author: abody
 */

#ifndef THINDB_H_
#define THINDB_H_

#include <Arduino.h>
#include "database.h"
#include <Wire.h>
#include <SdFat.h>


class thindb: public database
{
public:
	thindb( SdFat &sd, bool initialize = false );
	virtual ~thindb();
	bool	init();
	SdFat&	getsdfat() { return m_sd; }

//	bool isinitsucceeded() { return m_initok; }

	virtual bool getParams( int code, dbrecord &recout );
	virtual bool setParams( int code, const dbrecord &recin );
	virtual bool setStatus( int code, dbrecord::POSITION pos );

private:
	SdFat	&m_sd;
//	File	m_info;
//	File	m_status;
	bool	m_initok;
};

#endif /* INTDB_H_ */
