
#include "CMSIS.h"

#ifndef HAL_H
#define HAL_H

void GPIODClockEnable(void);
void GPIODSetup(int pin, int state);
void GPIODWrite(int pin, int state);
#endif

