#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
   DDRB = 0b11111111;
    while (1) 
    {
		PORTB = 1;
		_delay_ms(500);
		PORTB = 2;
		_delay_ms(500);
		PORTB = 4;
		_delay_ms(500);
		PORTB = 8;
		_delay_ms(500);
		PORTB = 16;
		_delay_ms(500);
		PORTB = 32;
		_delay_ms(500);
		PORTB = 64;
		_delay_ms(500);
		PORTB = 128;
		_delay_ms(500);
		
		
		
    }
}
