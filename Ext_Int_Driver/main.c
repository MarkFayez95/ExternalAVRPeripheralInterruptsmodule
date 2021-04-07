/*
 * Ext_Int_Driver.c
 *
 * Created: 02/04/2021 1:27:29 PM
 * Author : Mark Fayez
 */ 

#include "LED.h"
#include "EXT_INT.h"
#include <avr/interrupt.h>

int main(void)
{
	LED_Init(LED0);
	ExternalINT0_Init();
	
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

ISR(INT0_vect)
{
	LED_Toggle(LED0);
}