/*
 * timer.c
 *
 *  Created on: Mar 21, 2022
 *      Author: Peter
 */
void Init_Phasecorrect_Timer_0(void)
{
	TCCR0 |=  (1<<0);
	TCCR0 &= ~(1<<1);
	TCCR0 |=  (1<<2);
	TCCR0 &= ~(1<<3);
	TCCR0 |=  (1<<4);
	TCCR0 |=  (1<<5);
	TCCR0 |=  (1<<6);
	TCCR0 &= ~(1<<7);

	TCCR0 = 0b01110101;  									//phase correct mode,1024 prescaling,inverted mode
	DIO_SetPinDirection(GROUPB,PIN_3,1); 				  // set OC0 as output pin (pinB 3)


