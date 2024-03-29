// inverterhandling.h

#ifndef _INVERTERHANDLING_h
#define _INVERTERHANDLING_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

void InverterSetup();

void InverterLoop();

void InverterRequest(String ip, uint16_t port, uint16_t startaddress, uint16_t number);

#endif