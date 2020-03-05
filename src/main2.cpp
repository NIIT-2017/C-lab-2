#include"task2.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int value, secret;

	srand(time(NULL)); //else random secret number is only 41.
	secret = rand() % (MAX + 1); // It's a random number generation.
	//printf("Secret=%d\n", secret); //It's for debugging.
	printf("Do you now a secret number?\nEnter number from 1 up to 100 (or enter 'q' for exit):\n");

	while (scanf("%d", &value))
	{
		if (turn(value, secret) == -1)  //It's a call of function for take analysis result.
			printf("Secret number is more yuor number!\nAgain enter number from 1 up to 100:\n");
		else if (turn(value, secret) == 1)
			printf("Secret number is less yuor number!\nAgain enter number from 1 up to 100:\n");
		else if (turn(value, secret) == 0)
		{
			printf("You guessed!\n");
			break;
		}
	}
	printf("Goodbye!\n");
	return 0;
}