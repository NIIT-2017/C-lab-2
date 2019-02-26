#include "task1.h"
#define g 9.81

float height(int currTime, int startHeight)

{
	float h = startHeight - (g*(currTime*currTime)) / 2;
	return h;
}