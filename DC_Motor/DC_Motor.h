/*
 * DC_Motor.h
 *
 *  Created on: ??�/??�/????
 *      Author: User
 */

#ifndef HAL_DC_MOTOR_DC_MOTOR_H_
#define HAL_DC_MOTOR_DC_MOTOR_H_

#include <avr/io.h>
#include <util/delay.h>
#include "../../uitils/STD_TYPES.h"
#define MOTOR_GROUP 	GROUPB
#define MOTOR_PORT 		PORTB
#define MOTOR_PIN1		PIN_4//IN1
#define MOTOR_PIN2		PIN_5//IN2
#define MOTOR_PIN3		PIN_6//IN3
#define MOTOR_PIN4		PIN_7//IN4

#define TIMER0_CONTROL_Register       TCCR0
#define TIMER0_COMPAREMATCH_Register  OCR0


void Dutycycle_Config(unsigned char desiredDutycycle);
//void Init_Phasecorrect(void);
void Motors_Init(void);
void Motors_Clock_Wise(void);
void Motors_Anti_Clock_Wise(void);
void Motors_Stop(void);


#endif /* HAL_DC_MOTOR_DC_MOTOR_H_ */
