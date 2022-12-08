/*
 * DIO_Type.h
 *
 * Created: 11/21/2022 5:34:28 PM
 *  Author: MohammedRaafat96
 */ 


#ifndef DIO_TYPE_H_
#define DIO_TYPE_H_

typedef enum{
				PIN0,
				PIN1,
				PIN2,
				PIN3,
				PIN4,
				PIN5,
				PIN6,
				PIN7	} DIO_PIN;


typedef enum{	Input,
				Output
						} DIO_DIRECTION;


typedef enum{	PORTA,
				PORTB,
				PORTC,
				PORTD	} DIO_PORT;


#endif /* DIO_TYPE_H_ */