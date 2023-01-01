#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
void Delay300ms()		//@12.000MHz
{
	unsigned char i, j, k;


	i = 3;
	j = 72;
	k = 161;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main(){
	int p=0;
LCD_Init();
	while(p<256){

		LCD_ShowNum(1,1,p,3);
		p++;
		Delay300ms();
	}
}