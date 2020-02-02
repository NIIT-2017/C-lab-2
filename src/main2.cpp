#include "task2.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	time_t now;
	time(&now);
	srand(now);
	int result = 1 + rand() % 100;
	printf("Please enter any number from 1 to 100\n");
	while (1)
	{
		scanf("%d", &a);
		int chislo = turn(a, result);
		if (chislo == +1)
			printf("Your number is greater than conceived, try again\n");
		else if (chislo == -1)
			printf("Your number is less than conceived, try again\n");
		else if (chislo == 0)
		{
			printf("Your guessed!!!\n");
			break;
		}
	}
}