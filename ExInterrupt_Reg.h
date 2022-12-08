/*
 * ExInterrupt_Reg.h
 *
 * Created: 12/7/2022 8:35:07 PM
 *  Author: MohamedRaafat96
 */ 


#ifndef EXINTERRUPT_REG_H_
#define EXINTERRUPT_REG_H_

/************************************************************************/
/*                   SREG – AVR Status Register                         */
/*	-----------------------------------------------------------------	*/
/*	| Bit 7	| Bit 6 | Bit 5 | Bit 4 | Bit 3	| Bit 2 | Bit 1 | Bit 0	|	*/
/*	-----------------------------------------------------------------	*/
/*	|	I	|	T	|	H	|	S	|	V	|	N	|	Z	|	C	|	*/
/*	-----------------------------------------------------------------	*/
/*	Bit 7 – I: Global Interrupt Enable									*/
/************************************************************************/
#define SREG_REG	*((volatile unsigned char*) 0x5F)

/************************************************************************/
/*                  MCUCR – MCU Control Register                        */
/*	-----------------------------------------------------------------	*/
/*	| Bit 7	| Bit 6 | Bit 5 | Bit 4 | Bit 3	| Bit 2 | Bit 1 | Bit 0	|	*/
/*	-----------------------------------------------------------------	*/
/*	|	SE	|  SM2	|  SM1	|  SM0	| ISC11 | ISC10 | ISC01 | ISC00 |	*/
/*	-----------------------------------------------------------------	*/
/*	Bit 3, 2 – ISC11, ISC10: Interrupt Sense Control 1 Bit 1 and Bit 0	*/
/*	Table 14-1. Interrupt 1 Sense Control								*/
/*	ISC11 ISC10 Description												*/
/*	  0     0 The low level of INT1 generates an interrupt request.		*/
/*	  0     1 Any logical change on INT1 generates an interrupt request.*/
/*	  1     0 The falling edge of INT1 generates an interrupt request.	*/
/*	  1     1 The rising edge of INT1 generates an interrupt request.	*/
/************************************************************************/
#define MCUCR_REG	*((volatile unsigned char*) 0x55)

/************************************************************************/
/*            MCUCSR – MCU Control and Status Register                  */
/************************************************************************/
#define MCUCSR_REG	*((volatile unsigned char*) 0x54)

/************************************************************************/
/*              GICR – General Interrupt Control Register               */
/************************************************************************/
#define GICR_REG	*((volatile unsigned char*) 0x5B)

/************************************************************************/
/*               GIFR – General Interrupt Flag Register                 */
/************************************************************************/
#define GIFR_REG	*((volatile unsigned char*) 0x5A)

#endif /* EXINTERRUPT_REG_H_ */