/*
 * ExInterrupt_Types.h
 *
 * Created: 12/7/2022 8:35:58 PM
 *  Author: MohamedRaafat96
 */ 


#ifndef EXINTERRUPT_TYPES_H_
#define EXINTERRUPT_TYPES_H_

typedef enum {
				ExInterrupt_Low_level,
				ExInterrupt_Any_Logical,
				ExInterrupt_Falling_Edge,
				ExInterrupt_Rising_Egge 
			}ExInterrupt_INT0_INT1_Sense_Control;

//typedef enum {
				//ExInterrupt_Falling_Edge,
				//ExInterrupt_Rising_Egge
			//}ExInterrupt_INT2_Sense_Control;
			
typedef enum {
				ExInterrupt_Disable,
				ExInterrupt_Enable
			}ExInterrupt_State;
			
			

#endif /* EXINTERRUPT_TYPES_H_ */