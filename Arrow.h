//Arrow.h
#include <stdint.h>
struct Arrow{
	int xPosition;
	int yPosition;
};
typedef struct Arrow arrow_t;
extern arrow_t Arrows[4];
extern uint32_t LeftIndex;
extern uint32_t DownIndex;
extern uint32_t UpIndex;
extern uint32_t RightIndex;
extern uint32_t count;
extern int songc;
extern int MissC;
extern int missflag;
extern int checkarr[4];
extern int Leftarray[2][20];
extern int Downarray[2][20];
extern int Uparray[2][20];
extern int Rightarray[2][20];
int isTouch(int in);
