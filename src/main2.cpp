#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int value = 0;
	int secret = rand() % 100 + 1;
	printf("The program conceived a number in the range from 1 to 100.\nInsert the number:\n");
	scanf("%i", &value);
	int result = 1;
	while (result != 0)
	{
		result = turn(value, secret);
		if (result == 0)
		{
			printf("You guessed!!!");
		}
		else if (result == -1)
		{
			printf("More...\n\nInsert the number:\n");
			scanf("%i", &value);
		}
		else if (result == 1)
		{
			printf("Less...\n\nInsert the number:\n");
			scanf("%i", &value);
		}
	}
	return 0;
}