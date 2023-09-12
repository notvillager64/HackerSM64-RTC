#include <ultra64.h>
#include <rtc.h>
#include "game_init.h"
#include "src/game/main.h"
#include "rtc.h"

OSRTCTime rtc() {
	OSRTCTime t;
	osRTCGetTime(&gSIEventMesgQueue, &t);

	return t;
}
