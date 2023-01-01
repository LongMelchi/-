#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
void main()
{
		unsigned char i;
	    for(i=0;i<10;i++)
		{
			LCD_Init();
			LCD_ShowNum(1,1,i,1);
			Delay(300);
		}
		for(i=10;i<100;i++)
		{
			LCD_Init();
			LCD_ShowNum(1,1,i,2);
			Delay(300);
		}
		for(i=100;i<256;i++)
		{
			LCD_Init();
			LCD_ShowNum(1,1,i,3);
			Delay(300);
		}
		while(1)
		{

		}
}