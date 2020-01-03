#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int axNumber = 0;
	int magicNumber = 0;
	int i = 0;
	srand(time(0));
	magicNumber = rand() % 100;
	do
	{
		printf("Try to guess the guessed number (enter the number):\n");
		scanf("%d", &axNumber);
		switch (turn(axNumber, magicNumber))
		{
		case -1:
			printf("The entered number is less than the predicted.\n");
			break;
		case 0:
			printf("You guessed the guessed number!\n");
			break;
		case 1:
			printf("The entered number is more than the predicted.\n");
			break;
		}
		i++;
	} while (turn(axNumber, magicNumber) != 0);
	printf("Congratulations! You guessed the number for %d trying.\n", i);
	return 0;
}