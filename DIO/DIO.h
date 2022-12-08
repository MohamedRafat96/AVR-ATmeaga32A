/*
 * DIO.h
 *
 * Created: 11/21/2022 5:33:52 PM
 *  Author: MohammedRaafat96
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "../LIB/STD_Types.h"
#include "../LIB/Bit_Math.h"


void DIO_SetPortDirection(DIO_PORT PORT_ID , DIO_DIRECTION DIRECTION);

void DIO_SetPortValue(DIO_PORT PORT_ID , unsigned char Value);

void DIO_SetPinDirection(DIO_PORT PORT_ID , DIO_PIN PIN_ID , DIO_DIRECTION DIRECTION);

void DIO_SetPinValue(DIO_PORT PORT_ID , DIO_PIN PIN_ID , STD_LevelType Value);

STD_LevelType DIO_GetPinValue(DIO_PORT PORT_ID , DIO_PIN PIN_ID);


#endif /* DIO_H_ */