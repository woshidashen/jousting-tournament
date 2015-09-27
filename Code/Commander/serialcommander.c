
/*
Authored by Ayush Sharma
Dated 24th September 2015
********************************************************************************
This file proves external use of some functions related to the serial module.
These functions were designed to be run on the COMMANDER side, however some may
be compatible for running on the MOBILE ROBOT side.
*/

//Pseudo code for menu navigation by Leo


#include  <stlib.h>
#include  <p18f452.h>
#define UP 800
#define DOWN 100
#define LEFT 100
#define RIGHT 800



void main(void){
  
  //Setup
  int menu_mode_1=1;           //Change through ISR
  int menu_ref_1=1;         
  int joy_A=serialin1;
  int joy_B=serialin2;
  
  
    while(menu_mode_1==1){

        if (joy_A>=up){            //User pushes left joystick UP
          menu_ref_1--
          //Circular selection
          if(menu_ref_1==0){
            menu_ref_1=4;
          }
          disp_LCD_1(menu_ref_1);
          disp_LCD_2(menu_ref_1);
          delay(250);               //Arbitrary delay of 250 milliseconds

        }
        else if (joy_A<=down){      //User pushes left joystick DOWN
            menu_ref_1++
            //Circular selection
            if(menu_ref_1==5){
              menu_ref_1=1;
            }
            disp_LCD_1(menu_ref_1);
            disp_LCD_2(menu_ref_1);
            delay(250);
        
        }
        else if (joy_B<=LEFT){      //User pushes right joystick left
            decrement(menu_ref_1);
            disp_LCD_2(menu_ref_1);
            delay(100);

        }
        else if (joy_B>=RIGHT){     //User pushes right joystick right
            increment(menu_ref_1);
            disp_LCD_2(menu_ref_1);
            delay(100);

        }    
    
    
    }
  
  
}
