//this program is for to toggle first pin in the selected port 
#include<pic.h>
__CONFIG(0x3f3a);//use this line before converting this code to hex code.
void delay(unsigned int x)//delay function
{
	while(x--);
}
void main()
{
	TRISB=0x00;//port B has been selected
	PORTB=0x00;// all the pins of port B has been set to low
	while(1)
	{
		PORTB=0x01; //pin 0 has been toggle
		delay(65000);
		PORTB=0x00;
		delay(65000);
	}
}
