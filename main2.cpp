#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()

{
	int turn(int value, int secret);

	{
		int value = 0;

		time_t now;
		time(&now);
		srand(now);
		int secret = rand() % 100;
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
	printf("great, that's my value!");

	return 0;
}