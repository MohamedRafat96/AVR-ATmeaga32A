/*
 * DIO.c
 *
 * Created: 11/21/2022 5:34:15 PM
 *  Author: MohammedRaafat96
 */ 
#include "DIO_Reg.h"
#include "DIO_Type.h"
#include "DIO.h"

void DIO_SetPortDirection(DIO_PORT PORT_ID , DIO_DIRECTION DIRECTION)
{
	if (Output == DIRECTION)
	{
		switch(PORT_ID)
		{
			case PORTA: DDRA_REG = 0xFF; break;
			case PORTB: DDRB_REG = 0xFF; break;
			case PORTC: DDRC_REG = 0xFF; break;
			case PORTD: DDRD_REG = 0xFF; break;
		}
	}
	else if (Input == DIRECTION)
	{
		switch(PORT_ID)
		{
			case PORTA: DDRA_REG = 0x00; break;
			case PORTB: DDRB_REG = 0x00; break;
			case PORTC: DDRC_REG = 0x00; break;
			case PORTD: DDRD_REG = 0x00; break;
		}
	}
}
void DIO_SetPortValue(DIO_PORT PORT_ID , unsigned char Value)
{
	switch(PORT_ID)
	{
		case PORTA: PORTA_REG = Value; break;
		case PORTB: PORTB_REG = Value; break;
		case PORTC: PORTC_REG = Value; break;
		case PORTD: PORTD_REG = Value; break;
	}
}
void DIO_SetPinDirection(DIO_PORT PORT_ID , DIO_PIN PIN_ID , DIO_DIRECTION DIRECTION)
{
	if (PORT_ID <= PORTD && PIN_ID <= PIN7)
	{
		if (Output == DIRECTION)
		{
			switch(PORT_ID)
			{
				case  PORTA: SetBit(DDRA_REG , PIN_ID); break;
				case  PORTB: SetBit(DDRB_REG , PIN_ID); break;
				case  PORTC: SetBit(DDRC_REG , PIN_ID); break;
				case  PORTD: SetBit(DDRD_REG , PIN_ID); break;
			}
		}
		else if (Input == DIRECTION)
		{
			switch(PORT_ID)
			{
				case  PORTA: ClearBit(DDRA_REG , PIN_ID); break;
				case  PORTB: ClearBit(DDRB_REG , PIN_ID); break;
				case  PORTC: ClearBit(DDRC_REG , PIN_ID); break;
				case  PORTD: ClearBit(DDRD_REG , PIN_ID); break;
			}
		}
	}
}
void DIO_SetPinValue(DIO_PORT PORT_ID , DIO_PIN PIN_ID , STD_LevelType Value)
{
	if (PORT_ID <= PORTD && PIN_ID <= PIN7)
	{
		if (High == Value)
		{
			switch(PORT_ID)
			{
				case PORTA : SetBit(PORTA_REG , PIN_ID); break;
				case PORTB : SetBit(PORTB_REG , PIN_ID); break;
				case PORTC : SetBit(PORTC_REG , PIN_ID); break;
				case PORTD : SetBit(PORTD_REG , PIN_ID); break;
			}
		}
		else if (Low == Value)
		{
			switch(PORT_ID)
			{
				case PORTA : ClearBit(PORTA_REG , PIN_ID); break;
				case PORTB : ClearBit(PORTB_REG , PIN_ID); break;
				case PORTC : ClearBit(PORTC_REG , PIN_ID); break;
				case PORTD : ClearBit(PORTD_REG , PIN_ID); break;
			}
		}
	}
}

/** A DIO_GetPIN_Value input, used for reading the state of a pin
 *
 * Example:
 * @code
 * // Flash an LED while a DigitalIn is true
 *
 * @encode
 */
STD_LevelType DIO_GetPinValue(DIO_PORT PORT_ID , DIO_PIN PIN_ID)
{
	
 STD_LevelType PinValue=Low;
	if (PORT_ID <= PORTD && PIN_ID <= PIN7)
	{
		switch(PORT_ID)
		{
			case PORTA : PinValue = GetBit(PINA_REG , PIN_ID); break;
			case PORTB : PinValue = GetBit(PINB_REG , PIN_ID); break;
			case PORTC : PinValue = GetBit(PINC_REG , PIN_ID); break;
			case PORTD : PinValue = GetBit(PIND_REG , PIN_ID); break;
		}
	}

	return PinValue;
}