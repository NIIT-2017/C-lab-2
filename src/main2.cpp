// Clab2 task2

#include "task2.h"

int main ()
{
	time_t now;
	time(&now);
	srand(now);

	int secret = 1 + rand() % 100;

	printf("Try to guess a number from 1 to 100.\n Try do it for minimum number of attempts!\n\n");
		
	while (1)
	{
		int value;
		scanf("%d", &value);

	int result = turn(value, secret);
		
		if (result == 1)
		{
			printf("Your number is bigger then secret! Try one more time!\n");
		}

		else if (result == -1)
		{
			printf("Your number is smaller then secret! Try one more time!\n");
		}

		else
		{
			printf("You guessed!!!");
			break;
		}
		
	}

	return 0;
}

