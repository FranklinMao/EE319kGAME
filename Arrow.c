//Arrow.c
// struct and arrow initiailizations are global
#include <stdint.h>
#include "Arrow.h"

typedef struct Arrow arrow_t;
arrow_t LeftArrow={ 4, 96};					//x position and y position need to be calibrated
arrow_t DownArrow={ 36, 96};
arrow_t UpArrow={ 68, 96};
arrow_t RightArrow = {100, 96};
int checkarr[4]={0,0,0,0};							//this is used to keep track of which arrow sprites are active
uint32_t LeftIndex=0;									//index to go through left arrow/note array
uint32_t DownIndex=0;									//index to go through down arrow/note array
uint32_t UpIndex=0;										//index to go through up arrow/note array
uint32_t RightIndex=0;								//index to go through right arrow/note array
uint32_t count=0;												//counter incremented in ISR, global clock
int Leftarray[]={1,115,250,375,500};		//note array, check if count = array entry
int isTouch(arrow_t Arrow){
	if(Arrow.yPosition<=24){						//need to test for actual max y position
		return 1;
	}
	return 0;															//1 means arrow has touched top arrow, reached the end, and therefore must disappear
}
