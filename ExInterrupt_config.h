/*
 * ExInterrupt_config.h
 *
 * Created: 12/7/2022 8:35:34 PM
 *  Author: MohamedRaafat96
 */ 


#ifndef EXINTERRUPT_CONFIG_H_
#define EXINTERRUPT_CONFIG_H_

/* Configure The External Interrupt 0 Mode
 *
 *	ExInterrupt_Low_level,
 *	ExInterrupt_Any_Logical,
 *	ExInterrupt_Falling_Edge,
 *	ExInterrupt_Rising_Egge
 *	
 * */
#define ExInterrupt0_MODE	ExInterrupt_Low_level

/* Configure The External Interrupt 1 Mode
 *
 *	ExInterrupt_Low_level,
 *	ExInterrupt_Any_Logical,
 *	ExInterrupt_Falling_Edge,
 *	ExInterrupt_Rising_Egge
 *			
 * */
#define ExInterrupt1_MODE	ExInterrupt_Low_level

/* Configure The External Interrupt 2 Mode
 *
 *	ExInterrupt_Falling_Edge,
 *	ExInterrupt_Rising_Egge
 *			
 * */
#define ExInterrupt2_MODE	ExInterrupt_Falling_Edge


#define ExInterrupt0_State	ExInterrupt_Disable
#define ExInterrupt1_State	ExInterrupt_Disable
#define ExInterrupt2_State	ExInterrupt_Disable

#endif /* EXINTERRUPT_CONFIG_H_ */