#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	srand(time(NULL));
	int secret = rand() % 100 + 1;
	int value;

	printf("Guess the number from 1 to 100: ");
	while (1)
	{
		scanf("%d", &value);
		int result = turn(value, secret);
		if (result == 0)
		{
			printf("Yes!\n");
			break;
		}
		else if (result == 1)
			printf("Less\n");
		else if (result == -1)
			printf("More\n");
	}
	return 0;
}
