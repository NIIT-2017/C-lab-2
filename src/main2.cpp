#include "task2.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	time_t now;
	time(&now);
	srand(now);
	int secret = ((rand() % 100) + 1);
	int value = 0;
	int flag = 1;
	printf("I want to play a game with you... \n");
	printf("%d check\n", secret);
	while (flag)
	{
		scanf("%i", &value);
		if (value <= 0 || value > 100)
			printf("Very mimo...\n");
		else
		{
			switch (turn(value, secret))
			{
			case 1:
				printf("down\n");
				break;
			case -1:
				printf("up\n");
				break;
			case 0:
				printf("tak ne interesno\n");
				flag = 0;
				break;
			}
		}
	}
	return 0;
}