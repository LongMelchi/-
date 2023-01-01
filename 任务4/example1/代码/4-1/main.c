#include <REGX52.H>
#include "LCD1602.h"
#include "delay.h"

void main()
{
	int n;
	LCD_Init();
	for(n=0;n<256;n++)
	{
		LCD_ShowNum(1,1,n,3);
		Delay(300);
	}
	while(1)
	{
	}
}