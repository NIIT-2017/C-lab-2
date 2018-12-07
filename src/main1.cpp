#include <stdio.h>
#include "task1.h"
#include <math.h>

const double g = 9.81;

int main()
{
	int startHeight = 0;
	printf("Enter height: ");
	scanf("%d", &startHeight);
	int currTime = rint(sqrt(startHeight/g*2));
	height(currTime, startHeight);
	return 0;
}