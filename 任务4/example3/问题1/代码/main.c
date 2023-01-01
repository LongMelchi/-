#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"

int cnt(int x)
{
	int count=0;
	do
	{
		x=x/10;
		count++;
	}while(x!=0);
	return count;
}

void main()
{
	int x=0;
	while(x<=255)
	{
		LCD_Init();
		LCD_ShowNum(1,1,x,cnt(x));
		Delay(300);
		x++;
	}
}