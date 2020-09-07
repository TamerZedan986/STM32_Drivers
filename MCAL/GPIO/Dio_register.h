/******************************************************************************
 *
 * Module: Dio
 *
 * File Name: Dio_Regs.h
 *
 * Description: Header file for Dio Module Registers.
 *
 * Author: Tamer_Zedan
 ******************************************************************************/

#ifndef DIO_REGS_H
#define DIO_REGS_H

#include "Std_Types.h"
/* Definition for PORTA Registers */ /*base Adderss 0x40010800*/

#define GPIOA_BASE_ADDERSS               0x40010800

#define GPIOA_CLR           (*(volatile uint32 *)(GPIOA_BASE_ADDERSS+0x00))
#define GPIOA_CRH           (*(volatile uint32 *)(GPIOA_BASE_ADDERSS+0x04))
#define GPIOA_IDR           (*(volatile uint32 *)(GPIOA_BASE_ADDERSS+0x08))
#define GPIOA_ODR           (*(volatile uint32 *)(GPIOA_BASE_ADDERSS+0x0C))
#define GPIOA_BSRR          (*(volatile uint32 *)(GPIOA_BASE_ADDERSS+0x10))
#define GPIOA_BRR           (*(volatile uint32 *)(GPIOA_BASE_ADDERSS+0x14))
#define GPIOA_LCKR          (*(volatile uint32 *)(GPIOA_BASE_ADDERSS+0x18))

/* Definition for PORTB Registers */ /*base Adderss 0x40010C00*/
#define GPIOB_BASE_ADDERSS               0x40010C00

#define GPIOB_CLR           (*(volatile uint32 *)(GPIOB_BASE_ADDERSS+0x00))
#define GPIOB_CRH           (*(volatile uint32 *)(GPIOB_BASE_ADDERSS+0x04))
#define GPIOB_IDR           (*(volatile uint32 *)(GPIOB_BASE_ADDERSS+0x08))
#define GPIOB_ODR           (*(volatile uint32 *)(GPIOB_BASE_ADDERSS+0x0C))
#define GPIOB_BSRR          (*(volatile uint32 *)(GPIOB_BASE_ADDERSS+0x10))
#define GPIOB_BRR           (*(volatile uint32 *)(GPIOB_BASE_ADDERSS+0x14))
#define GPIOB_LCKR          (*(volatile uint32 *)(GPIOB_BASE_ADDERSS+0x18))


/* Definition for PORTC Registers */ /*base Adderss 0x40011000*/
#define GPIOC_BASE_ADDERSS               0x40011000

#define GPIOC_CLR           (*(volatile uint32 *)(GPIOC_BASE_ADDERSS+0x00))
#define GPIOC_CRH           (*(volatile uint32 *)(GPIOC_BASE_ADDERSS+0x04))
#define GPIOC_IDR           (*(volatile uint32 *)(GPIOC_BASE_ADDERSS+0x08))
#define GPIOC_ODR           (*(volatile uint32 *)(GPIOC_BASE_ADDERSS+0x0C))
#define GPIOC_BSRR          (*(volatile uint32 *)(GPIOC_BASE_ADDERSS+0x10))
#define GPIOC_BRR           (*(volatile uint32 *)(GPIOC_BASE_ADDERSS+0x14))
#define GPIOC_LCKR          (*(volatile uint32 *)(GPIOC_BASE_ADDERSS+0x18))



#endif
