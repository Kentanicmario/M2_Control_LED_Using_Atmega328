#include <avr/io.h>
#include <util/delay.h>

#define SET(P, B) (P&=(~(1 << B)))
#define CLEAR(P, B) (P|=(1 << B))

int tot_overflow = 0;

void timer1_init()
{
	
	TCCR1B |= (1 << CS11);
	
	
	TCNT1 = 0;
}

int main()
{
	
	CLEAR(DDRB, 1);
	SET(DDRB, 3);

	SET(DDRC, 6);
	CLEAR(PORTB, 2);

	timer1_init();

	
	while(1)
	{
		SET(PORTB, 2);
		_delay_us(10);
		CLEAR(PORTB, 2);

		loop_until_bit_is_clear(PINB, 1);
		TCNT1 = 0;
		loop_until_bit_is_set(PINB, 1);
		int count = TCNT1;

		if (count > 20000)
		SET(PORTC, 6);
		else
		CLEAR(PORTC, 6);
	}
	return 0;
}
