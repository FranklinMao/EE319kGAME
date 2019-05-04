//Arrow.h
#include <stdint.h>
struct Arrow{
	int xPosition;
	int yPosition;
};
typedef struct Arrow arrow_t;
extern uint32_t ArrowIndex;
extern arrow_t LeftArrow;
extern int checkarr[4];
extern int Leftarray[];
int isTouch(arrow_t Arrow);
