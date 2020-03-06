#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	float startHeight = 0;
	float currHeight = 1;
	printf("Enter the start height\n");
		scanf("%f", &startHeight);

		for(int currTime=0;currHeight>0; currTime++)
		{	
			currHeight = height(currTime, startHeight);
			printf("t=%02d h=%0.1f m\n", currTime, currHeight);
			clock_t begin = clock();
			while (clock() < begin + CLOCKS_PER_SEC);
		}
		printf("BOOM!");
		return 0;
}