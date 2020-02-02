#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "task2.h"

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
	int secret = rand() % 100 + 1;
	
	int value = 0;
    printf("Guess a secret number from 1 to 100\n");
	while (value != secret)
	{
		while (1)
		{
			int Value = scanf("%d", &value);
			if (Value < 1 || Value > 100)
			{
				printf("Enter correct number!\n");
				clean_stdin();
			}
			else
				break;
		}
		switch (turn(value, secret))
		{
		case (1):
			printf("less!\n");
			break;
		case (-1):
			printf("more!\n");
			break;
		case (0):
			printf("You guess!\n");
			break;
		}
	}
	return 0;
}