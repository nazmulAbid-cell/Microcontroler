#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	/* Replace with your application code */
	DDRB = 0b11111111;
	PORTB =0b00000001;
	PORTB =0b00000011;
	PORTB =0b00000111;
	
	
}

