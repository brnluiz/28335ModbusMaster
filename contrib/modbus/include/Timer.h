#ifndef MODBUS_TIMER_H_
#define MODBUS_TIMER_H_

#include "PlataformSettings.h"

typedef struct Timer Timer;

struct Timer {
	Uint32 reloadTime;
	bool timerEnabled;

	void (*resetTimer)();
	void (*setTimerReloadPeriod)(Timer *self, Uint32 time);
	void (*init)(Timer *self, Uint32 time);
	void (*stop)();
	void (*start)();
};

inline void timer_resetTimer();
inline void timer_setTimerReloadPeriod(Timer *self, Uint32 time);
inline void timer_init(Timer *self, Uint32 time);
inline void timer_stop();
inline void timer_start();

Timer construct_Timer();

#endif
