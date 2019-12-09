#include <stdio.h>
#include "task2.h"
#include <time.h>
#include <stdlib.h>

void clean_stdin(void)
{
	int c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int main()
{

	time_t now;
	time(&now);
	srand(now);
	rand();
	int secret = rand() % 100 + 1; 

	int value = 0;

	while (1)
	{
		printf("Enter a number: ");
		int result = scanf("%d", &value);
		if (result == 0)
		{
			printf("Invalid value!\n");
			clean_stdin();
			continue;
		}

		result = turn(value, secret);

		if (result < 0)
			printf("More\n"); //больше
		else if (result > 0)
			printf("less\n"); //меньше
		else
		{
			printf("Guessed\n");
			break;
		}	
	}
	
	return 0;
}