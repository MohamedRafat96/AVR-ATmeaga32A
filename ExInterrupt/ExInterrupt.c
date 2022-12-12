/*
 * ExInterrupt.c
 *
 * Created: 12/7/2022 8:36:29 PM
 *  Author: MohamedRaafat96
 */ 
#include "ExInterrupt.h"

#define  ExInterrrupt0_Bit					6
#define  ExInterrrupt_GlobalInerrupt_Bit	7

void ExInterrupt_Initialize(void)
{
	ClearBit(MCUCR_REG,0);
	ClearBit(MCUCR_REG,1);
	ClearBit(MCUCR_REG,2);
	ClearBit(MCUCR_REG,3);
	ClearBit(MCUCSR_REG,6);

	/*	Interrupt 0 Sense Control	*/
	#if		ExInterrupt0_MODE	==	ExInterrupt_Low_level
		MCUCR_REG	|=	ExInterrupt_Low_level;
		
	#elif	ExInterrupt0_MODE	==	ExInterrupt_Any_Logical
		MCUCR_REG	|=	ExInterrupt_Any_Logical;
		
	#elif	ExInterrupt0_MODE	==	ExInterrupt_Falling_Edge
		MCUCR_REG	|=	ExInterrupt_Falling_Edge;
		
	#elif	ExInterrupt0_MODE	==	ExInterrupt_Rising_Egge
		MCUCR_REG	|=	ExInterrupt_Rising_Egge;
		
	#endif
	
	/*	Interrupt 1 Sense Control	*/
	#if		ExInterrupt1_MODE	==	ExInterrupt_Low_level
		MCUCR_REG	|=	(ExInterrupt_Low_level << 2);
	
	#elif	ExInterrupt1_MODE	==	ExInterrupt_Any_Logical
		MCUCR_REG	|=	(ExInterrupt_Any_Logical  << 2);
	
	#elif	ExInterrupt1_MODE	==	ExInterrupt_Falling_Edge
		MCUCR_REG	|=	(ExInterrupt_Falling_Edge  << 2);
	
	#elif	ExInterrupt1_MODE	==	ExInterrupt_Rising_Egge
		MCUCR_REG	|=	(ExInterrupt_Rising_Egge  << 2);
	
	#endif
	
	/*	Interrupt 2 Sense Control	*/
	#if		ExInterrupt2_MODE	==	ExInterrupt_Falling_Edge
		MCUCSR_REG	|=	ExInterrupt_Falling_Edge;
		
	#elif	ExInterrupt2_MODE	==	ExInterrupt_Rising_Egge
		MCUCSR_REG	|=	ExInterrupt_Rising_Egge;
	#endif
	
	/*	External Interrupt 0 State	*/
	#if		ExInterrupt0_State	==	ExInterrupt_Enable
		SetBit(GICR_REG,6);
		//GICR_REG |= (1<<INT0);
	
	#elif	ExInterrupt0_State	==	ExInterrupt_Disable
		ClearBit(GICR_REG,6);
		//GICR_REG &= ~(1<<INT0);
	
	#endif
	
	/*	External Interrupt 1 State	*/
	#if		ExInterrupt1_State	==	ExInterrupt_Enable
		SetBit(GICR_REG,7);
	
	#elif	ExInterrupt1_State	==	ExInterrupt_Disable
		ClearBit(GICR_REG,7);
	
	#endif
	
	/*	External Interrupt 2 State	*/
	#if		ExInterrupt2_State	==	ExInterrupt_Enable
		SetBit(GICR_REG,5);
	
	#elif	ExInterrupt2_State	==	ExInterrupt_Disable
		ClearBit(GICR_REG,5);
	
	#endif
	
	/*	Clear External Interrupt Flag	*/
	SetBit(GIFR_REG, 5);
	SetBit(GIFR_REG, 6);
	SetBit(GIFR_REG, 7);
	
}

void ExInterrupt_EnableGlobalInterrupt(void)
{
	SetBit(SREG_REG, ExInterrrupt_GlobalInerrupt_Bit);
}

void ExInterrupt_DisableGlobalInterrupt(void)
{
	ClearBit(SREG_REG, ExInterrrupt_GlobalInerrupt_Bit);
}

void ExInterrupt0_Enable(void)
{
	//SetBit(GICR_REG, ExInterrrupt0_Bit);
	GICR_REG |= (1<<INT0);
}

void ExInterrupt0_Disable(void)
{
	ClearBit(GICR_REG, ExInterrrupt0_Bit);
}

void ExInterrupt_SetCallback(void (*CopyFuncPtr) (void))
{
	CallBackPtr = CopyFuncPtr;
}
void __vector_1(void)__attribute__((signal, used));
void __vector_1(void)
{
	if (CallBackPtr != NULL){CallBackPtr();}
}
