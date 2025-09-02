
#include "hal.h"
#include "CMSIS.h"

void GPIODClockEnable(void){
	/*Initalize the GPIOD clock page 118*/
	RCC->AHB1ENR |= (1 << 3);
}
void GPIODSetup(int pin, int state){
	//0 for input, 1 for output
	switch (state){
		case 0:
			break;
		case 1:
			/*Set GPIO OUTPUT page 164*/
			GPIOD->MODER |= (1 << (pin * 2));
	}
}

void GPIODWrite(int pin, int state){
	switch (state){
		case 0:
			//sets state of pin page 161
			GPIOD->BSRR |= (1 << (16 + pin));
			break;
		case 1:
			GPIOD->BSRR |= (1 << (pin));
	}
}
