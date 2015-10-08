

#include <p18cxxx.h>
#include <delays.h>
#include "lcd.h"
#include "ConfigRegs.h"

void main(void)
{
  unsigned int a;
  char *ptr;
  char str[3] = "LCD";
  char str2[] = "MPLAB C18";
  TRISD = 0x00;
 
  while(1)
  {
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    ptr = &str[0];
    Lcd_Write_String(ptr);
    Lcd_Set_Cursor(2,1);
    ptr = &str2[0];
    Lcd_Write_String(ptr);
    Delay10KTCYx(200);
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Developed By");
    Lcd_Set_Cursor(2,1);
    Lcd_Write_String("Faintree");
    Delay10KTCYx(200);
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("something");

    for(a=0;a<15;a++)
    {
        Delay10KTCYx(30);
        Lcd_Shift_Left();
    }

    for(a=0;a<15;a++)
    {
        Delay10KTCYx(30);
        Lcd_Shift_Right();
    }
    
    Lcd_Clear();
    Lcd_Set_Cursor(2,1);
    Lcd_Write_Char('e');
    Lcd_Write_Char('S');
    Delay10KTCYx(300);
  }

}