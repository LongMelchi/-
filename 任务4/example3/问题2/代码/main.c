#include <REGX52.H>
#include"LCD1602.h"

void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"12.345");
/*LCD_Init();
	LCD_ShowString(1,1,"12.34578912345");
	LCD_ShowString(1,2,"67890123456789");
如果超出的话我这样写*/
}