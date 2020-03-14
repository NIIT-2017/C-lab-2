#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 50


int main()
{
	
	char line[SIZE];
	srand(time(0));
	for (int i = 0; i < SIZE; i++)
	{
		switch (rand() % 3)
		{
		case 0:
			line[i] = rand() % 26 + 'a'; break;
		case 1:
			line[i] = rand() % 26 + 'A'; break;
		case 2:
			line[i] = rand() % 10 + '0'; break;
		}
	}
	line[SIZE - 1] = '\0';
	printf("%s\n", line);

	printf("%s\n", process(line));


	return 0;
}