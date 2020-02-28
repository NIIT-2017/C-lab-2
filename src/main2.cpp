#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()

{
	int secret = rand() % 100;
	int value = 0;
	int turn(int value, int secret);

	{
		time_t now;
		time(&now);
		srand(now);
		rand();
	}

		printf("enter a positive value (0-100)\n");

		while (secret != value)
    {

		scanf("%d", &value);

		if (value > secret)
			printf("less\n");
		else if (value < secret)
			printf("more\n");

		else if (secret == value)
			break;
	}
	printf("great, that's my value!\n");

	return 0;
}