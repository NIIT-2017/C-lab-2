#include "task1.h"

float height(int currTime, int startHeight)
{
	double g = 9.81;
	double distance = 0;
	double height = startHeight;
		distance = g * currTime * currTime / 2;
		height = startHeight - distance;
		return height;
	return 0;

}