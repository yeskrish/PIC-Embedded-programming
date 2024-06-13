//this program is for toggle pin 0 to pin 7 in the port D in an order on eby one 
#include<pic.h>
__CONFIG(0x3f3a);//use this line before converting this code to hex code.
void delay(unsigned int y)//delay funtion
{
while(y--);
}
void main()
{
TRISD=0x00;//port D has been selected
PORTD=0x00;//port D pins has been set to low
PORTD=0x01;//port D pin 0 has been set to high
delay(32500);
PORTD=0x00;//port D pins has been set to low
PORTD=0x02;//port D pin 1 has been set to high
delay(32500);	
PORTD=0x00;//port D pins has been set to low
PORTD=0x04;//port D pin 2 has been set to high
delay(32500);	
PORTD=0x00;//port D pins has been set to low
PORTD=0x08;//port D pin 3 has been set to high
delay(32500);
PORTD=0x00;//port D pins has been set to low
PORTD=0x10;//port D pin 4 has been set to high
delay(32500);
PORTD=0x00;//port D pins has been set to low
PORTD=0x20;//port D pin 5 has been set to high
delay(32500);				
PORTD=0x00;//port D pins has been set to low
PORTD=0x40;//port D pin 6 has been set to high
delay(32500);	
PORTD=0x00;//port D pins has been set to low
PORTD=0x80;//port D pin 7 has been set to high
delay(32500);	
}
