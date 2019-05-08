//Arrow.c
// struct and arrow initiailizations are global
#include <stdint.h>
#include "Arrow.h"
#include "ST7735.h"
arrow_t Arrows[4]={{4, 160},{36, 160},{68, 160},{100, 160}}; //Left=0; Down=1; Up=2; Right=3
int checkarr[4]={0,0,0,0};						//this is used to keep track of which arrow sprites are active
uint32_t LeftIndex=0;									//index to go through left arrow/note array
uint32_t DownIndex=0;									//index to go through down arrow/note array
uint32_t UpIndex=0;										//index to go through up arrow/note array
uint32_t RightIndex=0;								//index to go through right arrow/note array
uint32_t count=0;											//counter incremented in ISR, global clock
int songc = 0;												// Defines which song notes will be used - BK or Torna
int MissC = 0;
int missflag = 0;											// Avoids extra misses
int Leftarray[2][10]={									//note array, check if count = array entry
{1,120,240,400,520,635,900,1090,1260,1380},
{30,160,255,420,720,840,970,1100,1220,1450}
};		
int Downarray[2][10]={
{30,160,255,420,720,840,970,1100,1220,1340},
{50,200,260,450,560,780,860,1090,1250,1370}
};
int Uparray[2][10]={
{50,200,260,450,560,780,860,1090,1250,1370},
{1,120,240,400,520,635,900,1090,1260,1380}
};
int Rightarray[2][10]={
{30,150,265,460,585,650,765,940,1300,1380},
{30,150,265,460,585,650,765,940,1300,1550}
};
int Combo = 0;
int isTouch(int in){
	if(in == 4 || in == 36 || in == 68 || in == 100){
		ST7735_FillRect(in, 19, 24, 160, 0x0000);
	
		if(in==4){checkarr[0] = 0; Arrows[0].yPosition=160;}
		else if(in==36){checkarr[1] = 0; Arrows[1].yPosition=160;}
		else if(in==68){checkarr[2] = 0; Arrows[2].yPosition=160;}
		else if(in==100){checkarr[3] = 0; Arrows[3].yPosition=160;}
		return 0;
	}
	
	else if(missflag == 1){
		if(in==4){checkarr[0] = 0; Arrows[0].yPosition=160; ST7735_FillRect(Arrows[0].xPosition, 14, 24, 160, 0x0000);}
		if(in==36){checkarr[1] = 0; Arrows[1].yPosition=160; ST7735_FillRect(Arrows[1].xPosition, 14, 24, 160, 0x0000);}
		if(in==68){checkarr[2] = 0; Arrows[2].yPosition=160; ST7735_FillRect(Arrows[2].xPosition, 14, 24, 160, 0x0000);}
		if(in==100){checkarr[3] = 0; Arrows[3].yPosition=160; ST7735_FillRect(Arrows[3].xPosition, 14, 24, 160, 0x0000);}
		
		MissC++;
		Combo = 0;
		missflag = 0;
		return 0;	
	}
	
	 else if((Arrows[in].yPosition<=44)){						//test for miss
		ST7735_FillRect(Arrows[in].xPosition, 14, 24, 160, 0x0000);			//clear arrow
		Combo = 0;
		MissC++;
		Arrows[in].yPosition=160;
		checkarr[in] = 0;
		return 1;
	}
	return 0;			
}
