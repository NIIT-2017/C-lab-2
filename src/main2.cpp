#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, f, s;
	s = 1 + rand() % 100;
	srand(time(NULL));
	do

	{
		printf("Enter a number");
		scanf("%d", &n);

		f = turn(n, s);

		if (f == 1)
			printf("under\n");
		if (f == -1)
			printf("more\n");
		if (f == 0)
			printf("Guessed!\n");

	} while (n != s);
	printf("Guessed!\n");
	return 0;
}