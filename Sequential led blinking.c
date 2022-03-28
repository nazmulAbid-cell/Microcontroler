include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0b11111111;
    while(1)
    {
		for(int i= 1; i<256; i= i*2){
			PORTB = i;
			_delay_ms(1000);
			
		}
		
		
    }
}