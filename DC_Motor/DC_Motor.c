/*
 * DC_Motor.c
 *
 *  Created on: ??�/??�/????
 *      Author: User
 */


#include "../includes.h"

void Dutycycle_Config(u8 desiredDutycycle)
{

	OCR0=(255-((255/100)*desiredDutycycle));/*to control the motors speed*/

}

void Motors_Init(void)
{
	Init_Phasecorrect_Timer_0();
	DIO_SetPinDirection(MOTOR_GROUP,MOTOR_PIN1,1);
	DIO_SetPinDirection(MOTOR_GROUP,MOTOR_PIN2,1);
	DIO_SetPinDirection(MOTOR_GROUP,MOTOR_PIN3,1);
	DIO_SetPinDirection(MOTOR_GROUP,MOTOR_PIN4,1);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN1,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN2,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN3,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN4,0);
}

void Motors_Clock_Wise(void)
{

	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN1,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN2,1);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN3,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN4,1);
}
void Motors_Anti_Clock_Wise(void)
{

	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN1,1);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN2,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN3,1);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN4,0);
}
void Motors_Stop(void){
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN1,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN2,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN3,0);
	DIO_SetPinValue(MOTOR_GROUP,MOTOR_PIN4,0);
}


