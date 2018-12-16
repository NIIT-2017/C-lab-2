#include "task1.h"

float height(int currTime, int startHeight)
{
	return (float)startHeight - G * currTime*currTime / 2;
}