
/*All pages numbers are referenced from the rm0383-stm32f411xce-advanced data sheet*/

#include <CMSIS.h>
/*LED pins are: PD12 Green, PD13 Orange, PD14 Red, PD15*/
int main(void){
	/*Initalize the GPIOD clock page 118*/
	RCC->AHB1ENR = 0x08;
	/*Set GPIO page 164*/
	GPIOD->MODER = 0x01;
	for(;;){

	}
}
