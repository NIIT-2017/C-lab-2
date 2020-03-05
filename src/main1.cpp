#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>
#include <time.h>

int main()
{
	float startHeight = 0;
	float currHeight = 0;
	printf("Enter initial height in meters:\n");
	scanf("%f", &startHeight);
	for (int currTime = 0;; currTime++)
	{
		currHeight = height(currTime, startHeight);
		if (currHeight > 0)
			printf("t = %02d c h = %0.1f m\n", currTime, currHeight);
		else break;
		clock_t startTime = clock();
		while (clock() < startTime + CLOCKS_PER_SEC);
	}
	printf("BABAH!!!");
	return 0;
}