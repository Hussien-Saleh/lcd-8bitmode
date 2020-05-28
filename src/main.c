/*
  program to control 2x16 LCD Display with 8-bits data mode.
  Requirements:
• Connect the LCD Data Path to PORTC.
• Connect the “RS” LCD pin to PD4.
• Connect the “R/W” LCD pin to PD5.
• Connect the “E” LCD pin to PD6.
• Display String message on the LCD Display.
*/
#include "lcd_driver.h"

int main(void)
{
	LCD_init(); 
	LCD_displayStringRowColumn(0,2,"WELCOME");
	LCD_displayStringRowColumn(1,3,"LCD IS READY");
	_delay_ms(4000); 
	LCD_clearScreen(); 
		
   for(;;){}	
}
