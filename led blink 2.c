//this program is for toggle pin 0 and pin 1 in the port B
#include<pic.h>
__CONFIG(0x3f3a);//use this line before converting this code to hex code.
void delay(unsigned int x)//delay function
{
while(x--);
}
void main()
{
TRISB=0x00;//port b has been selected
PORTB=0x00;//port b pins has been set to low
while(1)
{
PORTB=0x03;//port B pin 0 and pin1 set to high
delay(65000);
PORTB=0x00;//port B pin 0 and pin 1 set to low
delay(65000);
}
}
