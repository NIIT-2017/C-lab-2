#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	int axNumber = 0;
	int magicNumber = 0;
	int i = 0;
	srand(time(0));
	magicNumber = rand() % 100;
	printf("Number conceived \n");
	printf("Try to guess it. \n");
		
	do
	{
		scanf("%d", &axNumber);
		switch (turn(axNumber, magicNumber))
		{
		case -1:
			printf("This number is less than the specified. \n");
			break;
		case 0:
			printf("You guessed right. \n");
			break;
		case 1:
			printf("This number is greater than the given.\n");
			break;
		}
		i++;
	} 
	while (turn(axNumber, magicNumber) != 0);
	printf("%d attempt.\n", i);
	return 0;
}