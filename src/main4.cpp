#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
	char line[10] = { 0 };
	srand(time(0));
	for (int i = 0; i < 10; i++)
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
	line[10 - 1] = '\0';
	printf(line);
	printf("\n");
	printf("%s\n", process(line));
	return 0;
}