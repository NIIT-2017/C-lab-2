#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"


int main()
{
	int value = 0;
	int secret = 0;
	int i = 0;

	srand(time(NULL));
	secret = rand()% 100;

	while (turn(value, secret)!=0 )
	{
		printf("Enter value: ");
		scanf("%d", &value);
		switch (turn(value, secret))
		{
		case -1:
			printf("Secret is more \n");
			break;
		case 0:
			printf("You guessed \n");
			break;
		case 1:
			printf("Secret is less  \n");
			break;
		}
		i++;
	}
    printf("Your attempts: %d  \n", i);
	return 0;
}
