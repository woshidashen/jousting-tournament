
/*
Authored by Leo Lou
Dated 1 October 2015
********************************************************************************
This function takes in an number (as outlined in serialcommand.c) that refers to both a corresponding
string output and value output to the LCD

main function has been kept for testing purposes. The variable 'x' corresponds to menu_ref_1 from my previous
file. Further improvements could involve a look up table.

The function of this program depends on an agreed upon indexing system of variables and strings (to be discussed
later)
*/


#include  <stlib.h>
#include  <p18f452.h>
#define LCDL 16

int pid_gain=50;
int max_speed=20;
int max_yaw=30;
int ir_samp_e=60;
const char s0[LCDL]="PID gain:";
const char s1[LCDL]="Max speed:";
const char s2[LCDL]="Max yaw:";
const char s3[LCDL]="IR samp/est:";
    
const char *stringtab[4]={s0,s1,s2,s3};

int main(void)
{
    void LCD_disp(int x);
    LCD_disp(2);
    return 0;
}

void LCD_disp(int x)
{

    int values[4]={pid_gain,max_speed,max_yaw,ir_samp_e};            
    char  string[LCDL];
    sprintf(string, "%s %d\n", stringtab[x],values[x]);
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String(string);
}
