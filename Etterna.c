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
	
IO_Init();		
ST7735_InitR(INITR_REDTAB);
ADC_Init();
}

void DisableInterrupts(void); // Disable interrupts
void EnableInterrupts(void);  // Enable interrupts
void Delay100ms(uint32_t count); // time delay in 0.1 seconds
extern int Combo;
int Score = 0;
int MaxCombo = 0;
int PerfectC = 0;
int GoodC = 0;
int bpm = 0;
int period = 0;
int basebpm = 0;
int baseperiod = 0;

void Convert(uint32_t input){
	bpm = basebpm;
	period = baseperiod;
	if((input >= 1000) && (input <= 3000)){
		bpm = bpm;
		period = period;
	}
	else if((input < 1000)){
		bpm = (bpm * 5 / 4);
		period = (period * 5 / 4);
	}
	else if((input > 3000)){
		bpm = (bpm * 4 / 5);
		period = (period * 4 / 5);
	}
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
	
	ST7735_DrawBitmap(24, 81, Etterna, 80, 80);
	ST7735_SetCursor(1, 9);
	ST7735_OutString("Welcome to Etterna!");
	ST7735_SetCursor(1, 10);
	ST7735_OutString("Select Your Song");
	ST7735_SetCursor(1, 11);
	ST7735_OutString("1 - Butterfly Kiss");
	ST7735_SetCursor(1, 12);
	ST7735_OutString("2 - Torna Battle");
	IO_Choice();
	if(SC == 80){ songc = 0; end = 79782; bpm = 2000; basebpm = 2000; period = 40000; baseperiod = 40000;}				// Need to adjust bpm
	else if(SC == 84){ songc = 1; end = 127691; bpm = 2000; basebpm = 2000; period = 26667; baseperiod = 26667;}		// Need to adjust bpm
	ST7735_FillScreen(0);
	
	Timer0_Init(4000);	 //(1/FREQ)/(12.5 x 10^-9)			
	Timer1_Init(period);	//timer1 is for playing Song
		
	while(si != 1000000){
		if((GPIO_PORTE_DATA_R & 0x01) == 1){	//Left Check
			// Add in Combo and Perfect/Good/Miss 
			if((Arrows[Left].yPosition >= 44) && (Arrows[Left].yPosition <= 52)){
				//Combo++ and Display Perfect
				ST7735_DrawBitmap(1, 12, Perfect, 71, 12);
				Score+=12500;
				PerfectC++;
				Combo++;
				missflag = 0;
				isTouch(4);
			}
			else if((Arrows[Left].yPosition >= 53) && (Arrows[Left].yPosition <= 62)){
				//Combo++ and Display Good
				ST7735_FillRect(71, 0, 1, 12, 0x0000);
				ST7735_DrawBitmap(1, 12, Good, 70, 12);
				Score+=6250;
				GoodC++;
				Combo++;
				missflag = 0;
				isTouch(4);
			}
			else if((Arrows[Left].yPosition >= 63) && (Arrows[Left].yPosition <= 74)){
				//Combo = 0 and Display Miss..
				ST7735_DrawBitmap(1, 12, Miss, 71, 12);
				Combo = 0;
				missflag = 1;
				isTouch(4);
			}
		}
		if((GPIO_PORTE_DATA_R & 0x02) == 2){	//Down Check
			// Add in Combo and Perfect/Good/Miss 
			if((Arrows[Down].yPosition >= 44) && (Arrows[Down].yPosition <= 52)){
				//Combo++ and Display Perfect
				ST7735_DrawBitmap(1, 12, Perfect, 71, 12);
				Score+=12500;
				PerfectC++;
				Combo++;
				missflag = 0;
				isTouch(36);
			}
			else if((Arrows[Down].yPosition >= 53) && (Arrows[Down].yPosition <= 62)){
				//Combo++ and Display Good
				ST7735_FillRect(71, 0, 1, 12, 0x0000);
				ST7735_DrawBitmap(1, 12, Good, 70, 12);
				Score+=6250;
				GoodC++;
				Combo++;
				missflag = 0;
				isTouch(36);
			}
			else if((Arrows[Down].yPosition >= 63) && (Arrows[Down].yPosition <= 74)){
				//Combo = 0 and Display Miss..
				ST7735_DrawBitmap(1, 12, Miss, 71, 12);
				Combo = 0;
				missflag = 1;
				isTouch(36);
			}
		}
		if((GPIO_PORTE_DATA_R & 0x04) == 4){	//Up Check
		// Add in Combo and Perfect/Good/Miss 
			if((Arrows[Up].yPosition >= 44) && (Arrows[Up].yPosition <= 52)){
				//Combo++ and Display Perfect
				ST7735_DrawBitmap(1, 12, Perfect, 71, 12);
				Score+=12500;
				PerfectC++;
				Combo++;
				missflag = 0;
				isTouch(68);
			}
			else if((Arrows[Up].yPosition >= 53) && (Arrows[Up].yPosition <= 62)){
				//Combo++ and Display Good
				ST7735_FillRect(71, 0, 1, 12, 0x0000);
				ST7735_DrawBitmap(1, 12, Good, 70, 12);
				Score+=6250;
				GoodC++;
				Combo++;
				missflag = 0;
				isTouch(68);
			}
			else if((Arrows[Up].yPosition >= 63) && (Arrows[Up].yPosition <= 74)){
				//Combo = 0 and Display Miss..
				ST7735_DrawBitmap(1, 12, Miss, 71, 12);
				Combo = 0;
				missflag = 1;
				isTouch(68);
			}
		}
		if((GPIO_PORTE_DATA_R & 0x8) == 8){	//Right Check
		// Add in Combo and Perfect/Good/Miss 
			if((Arrows[Right].yPosition >= 44) && (Arrows[Right].yPosition <= 52)){
				//Combo++ and Display Perfect
				ST7735_DrawBitmap(1, 12, Perfect, 71, 12);
				Score+=12500;
				PerfectC++;
				Combo++;
				missflag = 0;
				isTouch(100);
			}
			else if((Arrows[Right].yPosition >= 53) && (Arrows[Right].yPosition <= 62)){
				//Combo++ and Display Good
				ST7735_FillRect(71, 0, 1, 12, 0x0000);
				ST7735_DrawBitmap(1, 12, Good, 70, 12);
				Score+=6250;
				GoodC++;
				Combo++;
				missflag = 0;
				isTouch(100);
			}
			else if((Arrows[Right].yPosition >= 63) && (Arrows[Right].yPosition <= 74)){
				//Combo = 0 and Display Miss..
				ST7735_DrawBitmap(1, 12, Miss, 71, 12);
				Combo = 0;
				missflag = 1;
				isTouch(100);
			}
		}
		
		if(Combo > MaxCombo){MaxCombo =  Combo;}
		
		ST7735_DrawBitmap(4, 48, Static_Left, 24, 24);
		if(checkarr[Left]==1){
			ST7735_DrawPicture(Arrows[Left].xPosition, Arrows[Left].yPosition, Arrow_Left, 24, 24);
			Arrows[Left].yPosition--;
		}
		if(isTouch(Left) == 1){ST7735_DrawBitmap(1, 12, Miss, 71, 12);} // Check Left
		
		ST7735_DrawBitmap(36, 48, Static_Down, 24, 24);
		if(checkarr[Down]==1){
			ST7735_DrawPicture(Arrows[Down].xPosition, Arrows[Down].yPosition, Arrow_Down, 24, 24);
			Arrows[Down].yPosition--;
		}
		if(isTouch(Down) == 1){ST7735_DrawBitmap(1, 12, Miss, 71, 12);}	// Check Down

		ST7735_DrawBitmap(68, 48, Static_Up, 24, 24);		
		if(checkarr[Up]==1){
			ST7735_DrawPicture(Arrows[Up].xPosition, Arrows[Up].yPosition, Arrow_Up, 24, 24);
			Arrows[Up].yPosition--;
		}
		if(isTouch(Up) == 1){ST7735_DrawBitmap(1, 12, Miss, 71, 12);}	//Check Up
		
		ST7735_DrawBitmap(100, 48, Static_Right, 24, 24);		
		if(checkarr[Right]==1){
			ST7735_DrawPicture(Arrows[Right].xPosition, Arrows[Right].yPosition, Arrow_Right, 24, 24);
			Arrows[Right].yPosition--;
		}
		if(isTouch(Right) == 1){ST7735_DrawBitmap(1, 12, Miss, 71, 12);}	//Check Right
		
		// DISPLAY COMBO HERE
		ST7735_FillRect(74, 1, 0x0000, 50, 12);
		ST7735_SetCursor(14, 0);
		ST7735_OutString("Combo:");
		ST7735_SetCursor(14, 1);
		LCD_OutDec(Combo);
		
		Convert(ADC_In());
		for(int c = 0; c < 100; c++){}									
		TIMER1_TAILR_R = period;
		count++;
  }
	
	IO_Touch();
	ST7735_FillScreen(0x0000);            // set screen to black
	for(int c = 0; c < 1000000; c++){}								// Display Grade of Notes hit
	ST7735_SetCursor(1, 3);
	ST7735_OutString("Perfect:");	
	for(int c = 0; c < 500000; c++){}
	ST7735_SetCursor(9, 3);
	LCD_OutDec(PerfectC);
	for(int c = 0; c < 500000; c++){}
	ST7735_SetCursor(1, 4);
	ST7735_SetTextColor(0xABE0);
	ST7735_OutString("Good:");	
	for(int c = 0; c < 500000; c++){}
	ST7735_SetCursor(6, 4);
	LCD_OutDec(GoodC);
	for(int c = 0; c < 500000; c++){}
	ST7735_SetTextColor(0x39BF);
	ST7735_SetCursor(1, 5);
	ST7735_OutString("Miss:");	
	for(int c = 0; c < 500000; c++){}
	ST7735_SetCursor(6, 5);
	LCD_OutDec(MissC);
	for(int c = 0; c < 1000000; c++){}
	
	ST7735_SetTextColor(0x039F);
	ST7735_SetCursor(1, 7);
	ST7735_OutString("Max Combo:");			
	for(int c = 0; c < 500000; c++){}
	ST7735_SetCursor(11, 7);
	LCD_OutDec(MaxCombo);															// Display Max Combo
	for(int c = 0; c < 1000000; c++){}	
	ST7735_SetTextColor(0xFFFF);
	ST7735_SetCursor(1, 9);
	ST7735_OutString("Final Score:");
	for(int c = 0; c < 500000; c++){}
	ST7735_SetCursor(13, 9);
	LCD_OutDec(Score);																// Display Final Score
	for(int c = 0; c < 1000000; c++){}	
	
	ST7735_SetTextColor(0x7A0C);
	if(Score == 1000000){															// Display Final Assessment 
	ST7735_SetCursor(1, 11);
	ST7735_OutString("Perfect!");
	for(int c = 0; c < 500000; c++){}	
	}		
	else if((Score < 1000000) && (Score >= 850000)){
	ST7735_SetCursor(1, 11);
	ST7735_OutString("Amazing!");
	for(int c = 0; c < 500000; c++){}	
	}
	else if((Score < 8500000) && (Score >= 700000)){
	ST7735_SetCursor(1, 11);
	ST7735_OutString("Good Job :)");
	for(int c = 0; c < 500000; c++){}	
	}
	else if((Score < 7000000)){
	ST7735_SetCursor(1, 11);
	ST7735_OutString("Better Luck");
	ST7735_SetCursor(1, 12);
	ST7735_OutString("Next Time");
	for(int c = 0; c < 500000; c++){}	
	}


}
