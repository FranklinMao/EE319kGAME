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
extern int checkarr[4];
extern int Leftarray[];
extern int Downarray[];
extern int Uparray[];
extern int Rightarray[];
void isTouch(int in);
