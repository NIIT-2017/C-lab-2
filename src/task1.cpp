#include "task1.h"

float height(int currTime, int startHeight)

{
	return startHeight - (currTime*currTime) * 9.81 / 2;
}

