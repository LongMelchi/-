#include <REGX52.H>
#incldue<stdio.h>
#include "LCD1602.h"
void main(){
	LCD_Init();
while(1){
	LCD_ShowNum(1,1,263,3);
LCD_ShowChar(1,4,'.');
LCD_ShowNum(1,5,134,3);


}
}
