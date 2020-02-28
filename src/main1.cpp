#include "task1.h"
#include <stdio.h>
#include <time.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


void delay(int ms)

{
	int c = clock() + ms;
    while (clock() < c);
}



int main()



{

	const float g = 9.81;
	float L = 0;
	int currTime = 1;
	float startHeight = 0;

	printf("enter a height!\n");

	scanf("%f", &startHeight);

	float h = 0;

	while (height(currTime, startHeight) > 0) 


	{


		printf("t = %02d sec   h = %6.2f m\n", currTime, height(currTime, startHeight)); 


		currTime++;

		height(currTime, startHeight);
		clock_t begin = clock();
		while (clock() < begin + CLOCKS_PER_SEC);

	}


	printf("\nBOOM!!!\n");

}