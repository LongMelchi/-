#include <REGX52.H>
#include "LCD1602.h"
#include "delay.h"
#include "stdio.h" 

void main()
{
	//LCD_ShowString(1,1,"33.33");
	unsigned char  str[16];
	float a =1234.56;
	LCD_Init();
	sprintf(str,"%f",a);
	LCD_ShowString(1,1,str);
	while(1)
	{
	}
}