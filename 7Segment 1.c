//this program is for to display 0=9 in one seven segment display
#include<pic.h>
__CONFIG(0x3f3a);//use this line before converting this code to hex code.
void delay(unsigned y)//delay program
{
while(y--);
}
char a[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//hex code for each number
void main()
{
int i;
TRISB=0x00;//using port b pins
PORTB=0x00;
while(1)
{
for(int i=0;i<10;i++)
{
PORTB=a[i];
delay(30000);
}
}
}
