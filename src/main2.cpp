#include<stdio.h>
#include<stdlib.h>
#include"task2.h"

int main()
{
	int value;
	int secret;
	secret = rand() % (1 - 100);
	printf("Make a number from 1 to 100, enter the first number\n");
	scanf("%d", &value);
	while (turn(value, secret) != 0)
	{
		if (turn(value, secret) > 0) printf("Guess number is less\n");
		if (turn(value, secret) < 0) printf("Guess number is larger\n");
		printf("Enter");
		scanf("%d", &value);
	}
	printf("Guessed");
	return 0;
}
