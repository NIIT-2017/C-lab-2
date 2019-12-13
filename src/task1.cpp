// Clab2 task1

#include "task1.h"

float height(int currTime, int startHeight)
{
	float g = 9.8065f;
	float h = startHeight - g * pow(currTime, 2) / 2;
	return h;
}
