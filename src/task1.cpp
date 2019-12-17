#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include"task1.h"

float height(int currTime, int startHeight) //It's a payment above the grount.
{
	const float G = 9.81; //Acceleration of free falling.
	return ((float)startHeight - (float)((float)(G*currTime*currTime) / 2));
}