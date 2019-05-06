// Etterna.c
// Runs on LM4F120/TM4C123
// Jonathan Valvano and Daniel Valvano
// This is a starter project for the EE319K Lab 10

// Last Modified: 11/20/2018 
// http://www.spaceinvaders.de/
// sounds at http://www.classicgaming.cc/classics/spaceinvaders/sounds.php
// http://www.classicgaming.cc/classics/spaceinvaders/playguide.php
/* This example accompanies the books
   "Embedded Systems: Real Time Interfacing to Arm Cortex M Microcontrollers",
   ISBN: 978-1463590154, Jonathan Valvano, copyright (c) 2018

   "Embedded Systems: Introduction to Arm Cortex M Microcontrollers",
   ISBN: 978-1469998749, Jonathan Valvano, copyright (c) 2018

 Copyright 2018 by Jonathan W. Valvano, valvano@mail.utexas.edu
    You may use, edit, run or distribute this file
    as long as the above copyright notice remains
 THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 VALVANO SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 For more information about my classes, my research, and my books, see
 http://users.ece.utexas.edu/~valvano/
 */
// ******* Possible Hardware I/O connections*******************
// Slide pot pin 1 connected to ground
// Slide pot pin 2 connected to PD2/AIN5
// Slide pot pin 3 connected to +3.3V 
// fire button connected to PE0
// special weapon fire button connected to PE1
// 8*R resistor DAC bit 0 on PB0 (least significant bit)
// 4*R resistor DAC bit 1 on PB1
// 2*R resistor DAC bit 2 on PB2
// 1*R resistor DAC bit 3 on PB3 (most significant bit)
// LED on PB4
// LED on PB5

// Backlight (pin 10) connected to +3.3 V
// MISO (pin 9) unconnected
// SCK (pin 8) connected to PA2 (SSI0Clk)
// MOSI (pin 7) connected to PA5 (SSI0Tx)
// TFT_CS (pin 6) connected to PA3 (SSI0Fss)
// CARD_CS (pin 5) unconnected
// Data/Command (pin 4) connected to PA6 (GPIO), high for data, low for command
// RESET (pin 3) connected to PA7 (GPIO)
// VCC (pin 2) connected to +3.3 V
// Gnd (pin 1) connected to ground

#include <stdint.h>
#include "../inc/tm4c123gh6pm.h"
#include "ST7735.h"
#include "Random.h"
#include "PLL.h"
#include "ADC.h"
#include "DAC.h"
#include "Images.h"
#include "Sound.h"
#include "Timer0.h"
#include "Timer1.h"
#include "IO.h"
#include "TExaS.h"
#include "Timer0.h"
#include "Timer1.h"
#include "Arrow.h"

#define maxindex 10000000      //placeholder value, once ArrayIndex reaches this then the game is over
#define Left 0
#define Down 1
#define Up 2
#define Right 3

void Init(void){
PLL_Init(Bus80MHz);    // set system clock to 80 MHz
DAC_Init();
ADC_Init();	
IO_Init();		
ST7735_InitR(INITR_REDTAB);
}

void DisableInterrupts(void); // Disable interrupts
void EnableInterrupts(void);  // Enable interrupts
void Delay100ms(uint32_t count); // time delay in 0.1 seconds
extern int Combo;

uint32_t Convert(uint32_t input){
  return (569*input)/1250 +225;
}

int main(void){
	Init();
/*	
	while(1){
		if(GPIO_PORTE_DATA_R == 0x01){ // Testing PE0 for Microswitch(Lever)/Click Input
			GPIO_PORTF_DATA_R ^= 0x02;	
			GPIO_PORTF_DATA_R ^= 0x04;
		}
	}*/	
	
	ST7735_FillScreen(0);
	ST7735_FillRect(0, 0, 0x0000, 71, 12);
	ST7735_DrawBitmap(1, 12, Perfect, 71, 12);
	for(int c = 0; c < 10000000; c++){}
	ST7735_FillRect(0, 0, 0x0000, 71, 12);
	ST7735_DrawBitmap(1, 12, Good, 70, 12);
	for(int c = 0; c < 10000000; c++){}
	ST7735_FillRect(0, 0, 0x0000, 71, 12);
	ST7735_DrawBitmap(1, 12, Miss, 71, 12);
	for(int c = 0; c < 10000000; c++){}
	
	Timer0_Init(4000);	 //(1/FREQ)/(12.5 x 10^-9)			
	Timer1_Init(40000);	//timer1 is for updating arrows
		
	IO_Touch();
	while(1){
		if((GPIO_PORTE_DATA_R & 0x01) == 1){	//Left Check
			// Add in Combo and Perfect/Good/Miss 
			if(Arrows[Left].yPosition >= 22 && Arrows[Left].yPosition <= 28){
				//Combo++ and Display Perfect
				ST7735_DrawPicture(1, 0, Perfect, 106, 18);
				Combo++;
				isTouch(4);
			}
			else if(Arrows[Left].yPosition >= 29 && Arrows[Left].yPosition <= 38){
				//Combo++ and Display Good
				ST7735_DrawPicture(1, 0, Good, 105, 18);
				Combo++;
				isTouch(4);
			}
			else if(Arrows[Left].yPosition >= 39 && Arrows[Left].yPosition <= 50){
				//Combo = 0 and Display Miss..
				ST7735_DrawPicture(1, 0, Miss, 106, 18);
				Combo = 0;
				isTouch(4);
			}
		}
		if((GPIO_PORTE_DATA_R & 0x02) == 1){	//Down Check
			// Add in Combo and Perfect/Good/Miss 
			if(Arrows[Down].yPosition >= 22 && Arrows[Down].yPosition <= 28){
				//Combo++ and Display Perfect
				ST7735_DrawPicture(1, 0, Perfect, 106, 18);
				Combo++;
				isTouch(36);
			}
			else if(Arrows[Down].yPosition >= 29 && Arrows[Down].yPosition <= 38){
				//Combo++ and Display Good
				ST7735_DrawPicture(1, 0, Good, 105, 18);
				Combo++;
				isTouch(36);
			}
			else if(Arrows[Down].yPosition >= 39 && Arrows[Down].yPosition <= 50){
				//Combo = 0 and Display Miss..
				ST7735_DrawPicture(1, 0, Miss, 106, 18);
				Combo = 0;
				isTouch(36);
			}
		}
		if((GPIO_PORTE_DATA_R & 0x04) == 1){	//Up Check
		// Add in Combo and Perfect/Good/Miss 
			if(Arrows[Up].yPosition >= 22 && Arrows[Up].yPosition <= 28){
				//Combo++ and Display Perfect
				ST7735_DrawPicture(1, 0, Perfect, 106, 18);
				Combo++;
				isTouch(68);
			}
			else if(Arrows[Up].yPosition >= 29 && Arrows[Up].yPosition <= 38){
				//Combo++ and Display Good
				ST7735_DrawPicture(1, 0, Good, 105, 18);
				Combo++;
				isTouch(68);
			}
			else if(Arrows[Up].yPosition >= 39 && Arrows[Up].yPosition <= 50){
				//Combo = 0 and Display Miss..
				ST7735_DrawPicture(1, 0, Miss, 106, 18);
				Combo = 0;
				isTouch(68);
			}
		}
		if((GPIO_PORTE_DATA_R & 0x8) == 1){	//Right Check
		// Add in Combo and Perfect/Good/Miss 
			if(Arrows[Right].yPosition >= 22 && Arrows[Right].yPosition <= 28){
				//Combo++ and Display Perfect
				ST7735_DrawPicture(1, 0, Perfect, 106, 18);
				Combo++;
				isTouch(100);
			}
			else if(Arrows[Right].yPosition >= 29 && Arrows[Right].yPosition <= 38){
				//Combo++ and Display Good
				ST7735_DrawPicture(1, 0, Good, 105, 18);
				Combo++;
				isTouch(100);
			}
			else if(Arrows[Right].yPosition >= 39 && Arrows[Right].yPosition <= 50){
				//Combo = 0 and Display Miss..
				ST7735_DrawPicture(1, 0, Miss, 106, 18);
				Combo = 0;
				isTouch(100);
			}
		}
		ST7735_DrawBitmap(4, 48, Static_Left, 24, 24);
		if(checkarr[Left]==1){
			ST7735_FillRect(Arrows[Left].xPosition, (Arrows[Left].yPosition + 1), 0x0000, 24, 24);
			ST7735_DrawPicture(Arrows[Left].xPosition, Arrows[Left].yPosition, Arrow_Left, 24, 24);
			Arrows[Left].yPosition--;
		}
		isTouch(Left); // Check Left
		
		ST7735_DrawBitmap(36, 48, Static_Down, 24, 24);
		if(checkarr[Down]==1){
			ST7735_FillRect(Arrows[Down].xPosition, (Arrows[Down].yPosition + 1), 0x0000, 24, 24);
			ST7735_DrawPicture(Arrows[Down].xPosition, Arrows[Down].yPosition, Arrow_Down, 24, 24);
			Arrows[Down].yPosition--;
		}
		isTouch(Down);	// Check Down

		ST7735_DrawBitmap(68, 48, Static_Up, 24, 24);		
		if(checkarr[Up]==1){
			ST7735_FillRect(Arrows[Up].xPosition, (Arrows[Up].yPosition + 1), 0x0000, 24, 24);
			ST7735_DrawPicture(Arrows[Up].xPosition, Arrows[Up].yPosition, Arrow_Up, 24, 24);
			Arrows[Up].yPosition--;
		}
		isTouch(Up);	//Check Up
		
		ST7735_DrawBitmap(100, 48, Static_Right, 24, 24);		
		if(checkarr[Right]==1){
			ST7735_FillRect(Arrows[Right].xPosition, (Arrows[Right].yPosition + 1), 0x0000, 24, 24);
			ST7735_DrawPicture(Arrows[Right].xPosition, Arrows[Right].yPosition, Arrow_Right, 24, 24);
			Arrows[Right].yPosition--;
		}
		isTouch(Right);	//Check Right
		
		// DISPLAY COMBO HERE
		ST7735_FillRect(74, 1, 0x0000, 50, 12);
		ST7735_SetCursor(14, 0);
		ST7735_OutString("Combo:");
		ST7735_SetCursor(14, 1);
		LCD_OutDec(Combo);
		for(int c = 0; c < 200000 *(Convert(ADC_In())/1000); c++){}						//everthing between 1.0cm-2.0cm is base speed
		count++;
  }
	
	IO_Touch();
	ST7735_FillScreen(0x0000);            // set screen to black
	ST7735_SetCursor(1, 1);
	ST7735_OutString("GAME OVER");
	ST7735_SetCursor(1, 2);
	ST7735_OutString("Nice try,");
	ST7735_SetCursor(1, 3);
	ST7735_OutString("Earthling!");
	ST7735_SetCursor(2, 4);
	LCD_OutDec(1234);


}


// You can't use this timer, it is here for starter code only 
// you must use interrupts to perform delays
void Delay100ms(uint32_t count){uint32_t volatile time;
  while(count>0){
    time = 727240;  // 0.1sec at 80 MHz
    while(time){
	  	time--;
    }
    count--;
  }
}
