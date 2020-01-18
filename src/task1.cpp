#include<stdio.h>
#include<time.h>
#include "task1.h"

float height(int currTime, int startHeight)
{
	const float g = 9.81;

	float L = (g * (currTime * currTime)) / 2;
	float height = startHeight - L;
	
	return height;
}