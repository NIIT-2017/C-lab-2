#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task2.h"
#include <time.h>

int main()
{
	srand(time(NULL));
	int value = 0;
	int secret = rand() % 100 + 1;
	printf("Gues the number from 1 to 100?\n");
	scanf("%d", &value);
	int result = 1;
	while (result != 0)
		{ result = turn(value, secret);
			if (result == 0)
			printf("You gussed!");
			else
			{	if (result == -1)
				{
			printf("more...try again!\n");
			scanf("%d", &value);
				}
				else
				{
			printf("less...try again!\n");
			scanf("%d", &value);
				}
			}

		}
	return 0;
}
