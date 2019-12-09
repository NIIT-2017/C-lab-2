#include <stdio.h>
#include "task1.h"
#include <time.h>
#include <stdlib.h>

int main()
{

	int startHeight = 0;
	printf("Enter a height value\n");
	int result = scanf("%d", &startHeight);

	if (result == 0)
	{
		printf("Invalid value!\n");
		return 1;
	}

	int time = 0;
	while (1)
	{
		if (height(time, startHeight) < 0)
		{
			printf("BABAH!\n");
			break;
		}
		printf("t = %.2d c h = %.1f m\n", time, height(time, startHeight));
		time++;
		clock_t begin = clock();
		while (clock() < begin + CLOCKS_PER_SEC);
	}

	return 0;
}