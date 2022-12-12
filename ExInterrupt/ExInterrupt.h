/*
 * ExInterrupt.h
 *
 * Created: 12/7/2022 8:36:19 PM
 *  Author: MohamedRaafat96
 */ 


#ifndef EXINTERRUPT_H_
#define EXINTERRUPT_H_

#include <avr/interrupt.h>

#include "ExInterrupt_config.h"
#include "ExInterrupt_Reg.h"
#include "ExInterrupt_Types.h"
#include "../LIB/STD_Types.h"
#include "../LIB/Bit_Math.h"

void (*CallBackPtr) (void) = NULL;

/*	External Interrupt  Initialization	*/
void ExInterrupt_Initialize(void);

/*	Function To Enable Global Interrupt */
void ExInterrupt_EnableGlobalInterrupt(void);

/*	Function To Disable Global Interrupt */
void ExInterrupt_DisableGlobalInterrupt(void);

/*	Function To Enable External Interrupt 0 ISR	*/
void ExInterrupt0_Enable(void);

/*	Function To Disable External Interrupt 0 ISR */
void ExInterrupt0_Disable(void);

/* Call Back Function */
void ExInterrupt_SetCallback(void (*CopyFuncPtr) (void));

void __vector_1(void);



#endif /* EXINTERRUPT_H_ */