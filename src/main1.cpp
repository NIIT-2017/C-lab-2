# define _CRT_SECURE_NO_WARNINGS_ 

#include <time.h>
#include <stdio.h>
#include "task1.h"

int main()
{
	int currTime = 0;
	int startHeight = 0;
	printf("88005553535.0\n");
	scanf("%i\n", &startHeight);
	float now = startHeight;
	if (startHeight <= 0)
	{
		printf("che, you na bombe sitting?\n");
		return 1;
	}
	while (1)
	{
		if (now <= 0)
		{
			printf("BABAH!!!\n");
			break;
		}
		printf("t=%02ic h=%06.1fm\n", currTime, now);
		clock_t go = clock();
		while (clock() < go + CLOCKS_PER_SEC);
		now = height(++currTime, startHeight);
	}
	return 0;
} 