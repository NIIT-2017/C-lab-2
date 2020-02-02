#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include"task1.h"

int main()
{
	int currTime = 0;
	int startHeight=0;

	printf("Enter start height for uor bomb (it can to be an integer):\n");

	while ((scanf("%d", &startHeight) != 1) || startHeight <= 0) //I can to get a correct start height.
	{
		printf("Uncorrect start height!\n"
			"Also enter start height for uor bomb:\n");
		while (getchar() != '\n')
			continue;
	}
	
	for (currTime = 0; (height(currTime, startHeight)) >= 0; currTime++)  //
	{
		printf("t=%02d sec c h=%06.1f m", currTime, height(currTime, startHeight));
		puts("\a");   //Include a sound!
		clock_t begin = clock();
		while (clock() < begin + CLOCKS_PER_SEC); //It's an output delay.
	}
	printf("BABAH!!!");
	puts("\a\a\a");
	return 0;
}