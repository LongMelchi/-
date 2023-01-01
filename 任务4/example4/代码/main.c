#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
int a=1;
void main()
{
	LCD_Init();
  while(a<256)
	{
		LCD_ShowNum(1,1,a,3);
		a++;
		Delay(300);
		
	}
}
	
	
