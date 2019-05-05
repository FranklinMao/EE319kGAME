//Arrow.c
// struct and arrow initiailizations are global
#include <stdint.h>
#include "Arrow.h"
#include "ST7735.h"
arrow_t Arrows[4]={{4, 160},{ 36, 160},{ 68, 160},{100, 160}}; //Left=0; Down=1; Up=2; Right=3
int checkarr[4]={0,0,0,0};							//this is used to keep track of which arrow sprites are active
uint32_t LeftIndex=0;									//index to go through left arrow/note array
uint32_t DownIndex=0;									//index to go through down arrow/note array
uint32_t UpIndex=0;										//index to go through up arrow/note array
uint32_t RightIndex=0;								//index to go through right arrow/note array
uint32_t count=0;												//counter incremented in ISR, global clock
int Leftarray[]={1,120,250,375,550};		//note array, check if count = array entry
int Downarray[]={5,125,255,380,555};
int Uparray[]={10,130,260,385,560};
int Rightarray[]={15,135,265,390,565};
int Combo = 0;
void isTouch(int in){
	if(Arrows[in].yPosition<=44){						//test for miss
		ST7735_FillRect(Arrows[in].xPosition, 14, 24, 160, 0x0000);			//clear arrow
		Arrows[in].yPosition=160;
		checkarr[in] = 0;
		Combo = 0;
	}								
	if(in == 4 || in == 36 || in == 68 || in == 100){
	ST7735_FillRect(in, 19, 24, 160, 0x0000);
	}
	if(in==4){checkarr[0] = 0;}
	if(in==36){checkarr[1] = 0;}
	if(in==68){checkarr[2] = 0;}
	if(in==100){checkarr[3] = 0;}

}
