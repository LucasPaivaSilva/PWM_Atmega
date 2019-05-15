/*
 * PWM_Atmega328p.c
 *
 * Created: 5/14/2019 4:03:58 PM
 * Author : Lucas
 */ 

#include "def_principais.h"
#include <avr/io.h>
#include <avr/interrupt.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
		DDRD = 0xFF;
		
		TCCR0A = 0b01100011;
		TCCR0B = 0b00001001;
		OCR0A = 100;
		OCR0B = 30;
		sei();
		
		for (OCR0B = 50; OCR0B<=100; OCR0B++)
		{
 			_delay_ms(100);
 		}
    }
}

