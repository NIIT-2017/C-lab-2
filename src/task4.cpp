#include "task4.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* process(char* line)
{
	int temp;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = SIZE; j > 0; j--)
		{
			if ((line[i] > 47 && line[i] < 58) &&
				((line[j] > 64 && line[j] < 91) || (line[j] > 96 && line[j] < 123)))
			{
				temp = line[i];
				line[i] = line[j];
				line[j] = temp;
			}
			if (i == j)
				break;
		}

	}
	return line;
}