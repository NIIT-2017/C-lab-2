#include <stdio.h>
#include "task1.h"
#include <math.h>
#include <Windows.h>


int main()
{
	int currTime, totalTime;
	int starHeight = 0;

	printf("Enter height: ");
	scanf("%d", &starHeight);
	const float g = 9.81;

	totalTime = sqrt(2*starHeight / g);

		
	for (currTime=0; currTime <= totalTime; currTime++)
		printf("t=%d c\th=%.1f m\n", currTime, height(currTime, starHeight));
	Sleep (10000);
	printf("BABAH!!!");
	

	return 0;
}



