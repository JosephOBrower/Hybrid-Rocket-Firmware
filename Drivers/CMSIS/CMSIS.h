
/*All pages numbers are referenced from the rm0383-stm32f411xce-advanced data sheet*/
/*page 35-36 contains the memory map for the registers*/

#include <stdint.h>

#ifndef __CMSIS_H
#define __CMSIS_H

/*Register map for RCC (Reset and Clock Control)*/
typedef struct {
    volatile uint32_t CR; // 0x00
    volatile uint32_t PLLCFGR; // 0x04
    volatile uint32_t CFGR; // 0x08
    volatile uint32_t CIR; // 0x0C
    volatile uint32_t AHB1RSTR; // 0x10
    volatile uint32_t AHB2RSTR; // 0x14
    volatile uint32_t AHB3RSTR; // 0x18
    uint32_t RESERVED0; // 0x1C
    volatile uint32_t APB1RSTR; // 0x20
    volatile uint32_t APB2RSTR; // 0x24
    uint32_t RESERVED1[2]; // 0x28, 0x2C
    volatile uint32_t AHB1ENR; // 0x30
    volatile uint32_t AHB2ENR; // 0x34
    volatile uint32_t AHB3ENR; // 0x38
    uint32_t RESERVED2; // 0x3C
    volatile uint32_t APB1ENR; // 0x40
    volatile uint32_t APB2ENR; // 0x44
    uint32_t RESERVED3[2]; // 0x48, 0x4C
    volatile uint32_t AHB1LPENR; // 0x50
    volatile uint32_t AHB2LPENR; // 0x54
    volatile uint32_t AHB3LPENR; // 0x58
    uint32_t RESERVED4; // 0x5C
    volatile uint32_t APB1LPENR; // 0x60
    volatile uint32_t APB2LPENR; // 0x64
    uint32_t RESERVED5[2]; // 0x68, 0x6C
    volatile uint32_t BDCR; // 0x70
    volatile uint32_t CSR; // 0x74
    uint32_t RESERVED6[2]; // 0x78, 0x7C
    volatile uint32_t SSCGR; // 0x80
    volatile uint32_t PLLI2SCFGR; // 0x84
    uint32_t RESERVED7; // 0x88
    volatile uint32_t DCKCFGR; // 0x8C
} RCC_Struct;

#define RCC ((RCC_Struct*)0x40023800)

/*Register map for GPIOD*/
typedef struct {
	volatile uint32_t MODER; //0x00
	volatile uint32_t OTYPER; //0x04
	volatile uint32_t OSPEEDR; //0x08
	volatile uint32_t PUPDR; //0x0C
	volatile uint32_t IDR; //0x10
	volatile uint32_t ODR; //0x14
	volatile uint32_t BSRR; //0x18
	volatile uint32_t LCKR; //0x1C
	volatile uint32_t AFRL; //0x20
	volatile uint32_t AFRH; //0x24
} GPIOD_Struct;

#define GPIOD ((GPIOD_Struct*)0x40020C00)

#endif //__CMSIS_H
