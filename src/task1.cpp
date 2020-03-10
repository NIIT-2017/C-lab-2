#include <stdio.h>

float height(int currTime, int startHeight)
{
	const float g = 9.81;
	float height = startHeight - (g * currTime*currTime / 2);
	return height;

}