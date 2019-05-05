//Arrow.h
#include <stdint.h>
struct Arrow{
	int xPosition;
	int yPosition;
};
typedef struct Arrow arrow_t;
extern uint32_t LeftIndex;
extern uint32_t DownIndex;
extern uint32_t UpIndex;
extern uint32_t RightIndex;
extern uint32_t count;
extern arrow_t LeftArrow;
extern arrow_t DownArrow;
extern arrow_t UpArrow;
extern arrow_t RightArrow;
extern int checkarr[4];
extern int Leftarray[];
int isTouch(arrow_t Arrow);
