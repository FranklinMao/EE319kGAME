//Arrow.c
// struct and arrow initiailizations are global
#include <stdint.h>
#include "Arrow.h"
#include "ST7735.h"


arrow_t LeftArrow={ 4, 160};					//x position and y position need to be calibrated
arrow_t DownArrow={ 36, 96};
arrow_t UpArrow={ 68, 96};
arrow_t RightArrow = {100, 96};
int checkarr[4]={0,0,0,0};							//this is used to keep track of which arrow sprites are active
uint32_t LeftIndex=0;									//index to go through left arrow/note array
uint32_t DownIndex=0;									//index to go through down arrow/note array
uint32_t UpIndex=0;										//index to go through up arrow/note array
uint32_t RightIndex=0;								//index to go through right arrow/note array
uint32_t count=0;												//counter incremented in ISR, global clock
int Leftarray[]={1,120,250,375,550};		//note array, check if count = array entry
void isTouch(struct Arrow in){
	if(in.yPosition<=44){						//test for miss
		ST7735_FillRect(in.xPosition, 14, 24, 160, 0x0000);			//clear arrow
		in.yPosition=160;
		checkarr[0] = 0;
	}															
}
