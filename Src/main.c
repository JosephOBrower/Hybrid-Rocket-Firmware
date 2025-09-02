#include "hal.h"
/*All pages numbers are referenced from the rm0383-stm32f411xce-advanced data sheet*/

//#include <CMSIS.h>
/*LED pins are: PD12 Green, PD13 Orange, PD14 Red, PD15*/
int main(void){
	/*Initalize the GPIOD clock page 118*/
	//RCC->AHB1ENR = (1 << 3);
	/*Set GPIO OUTPUT page 164*/
	//GPIOD->MODER = (1 << 24);
	//GPIOD->BSRR = (1 << 12);
	GPIODClockEnable();
	GPIODSetup(13, 1);
	for(;;){
		for(int i = 0; i <= 100000; i++){}
		//GPIOD->BSRR = (1 << 12);
		GPIODWrite(13, 1);
		for(int i = 0; i <= 100000; i++){}
		//GPIOD->BSRR = (1 << 28);
		GPIODWrite(13, 0);
	}
}
