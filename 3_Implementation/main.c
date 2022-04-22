/*
 * main.c
 *
 * Created: 4/22/2022 6:37:02 PM
 *  Author: Admin
 */ 

#include <avr/io.h>
int main(void)
{
	DDRB=DDRB&0b11111101;
	DDRC=DDRC|0b01000000;
	while(1)
	{
		if(PINB & 0b00000010)
		PORTC=PORTC|0b01000000;
		else
		PORTC=PORTC&0b10111111;
	}
	return 0;
}