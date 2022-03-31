int main(void)
{
	/* Replace with your application code */
	DDRD = 0b11111111;
	while(1)
	{
		PORTD =0b0111111;
		_delay_ms(300);
		PORTD =0b0000000;
		_delay_ms(300);
		PORTD =0b0110110;
		_delay_ms(300);
		PORTD =0b0000000;
		_delay_ms(300);
		PORTD =0b0110110;
		_delay_ms(300);
		PORTD =0b0000000;
		_delay_ms(300);
		
			
		
	}
	
}

