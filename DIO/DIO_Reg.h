/*
 * DIO_Reg.h
 *
 * Created: 11/21/2022 5:34:45 PM
 *  Author: MohamedRaafat96
 */ 


#ifndef DIO_REG_H_
#define DIO_REG_H_

#define PORTA_REG	*((volatile unsigned char*) 0x3B)
#define DDRA_REG	*((volatile unsigned char*) 0x3A)
#define PINA_REG	*((volatile unsigned char*) 0x39)

#define PORTB_REG	*((volatile unsigned char*) 0x38)
#define DDRB_REG	*((volatile unsigned char*) 0x37)
#define PINB_REG	*((volatile unsigned char*) 0x36)

#define PORTC_REG	*((volatile unsigned char*) 0x35)
#define DDRC_REG	*((volatile unsigned char*) 0x34)
#define PINC_REG	*((volatile unsigned char*) 0x33)

#define PORTD_REG	*((volatile unsigned char*) 0x32)
#define DDRD_REG	*((volatile unsigned char*) 0x31)
#define PIND_REG	*((volatile unsigned char*) 0x30)


#endif /* DIO_REG_H_ */