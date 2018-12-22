#define _CRT_SECURE_NO_WARNINGS
#include "task2.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int value = 0, secret = 0;
	srand(time(0));
	secret = rand() % 11;
	int result;
	while (1)
	{
		puts("Guess number:");
		scanf("%d", &value);
		result = turn(value, secret);
		if (result == 1)
			puts("Your number is too big");
		else if (result == -1)
			puts("Your number is too small");
		else if (result == 0) {
			puts("You guessed the number!");
			return 0;
		}
	}
}