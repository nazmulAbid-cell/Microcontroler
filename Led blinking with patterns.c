include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0b11111111;
	while(1)
	{
		PORTB = 0b00000001;
		PORTB = 0b00000011;
		PORTB = 0b00000111;
		PORTB = 0b00001111;
	    _delay_ms(100);
		PORTB = 0b00011111;
		PORTB = 0b00111111;
		PORTB = 0b01111111;
		PORTB = 0b11111111;
		_delay_ms(100);
		
		
	}
}
