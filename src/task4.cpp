#include "task4.h"
#include <stdio.h>

char* process(char* line)
{
	char buff = '0';
	int j = SIZE-2;
	for (int i = 0; i <= j; i++)
	{
		if ((line[i] >= '0') && (line[i] <= '9'))
		{
			while ((line[j] >= '0') && (line[j] <= '9'))
			{
				j--;
				if (i >= j) break;
			}
			if (i < j)
			{
				buff = line[j];
				line[j] = line[i];
				line[i] = buff;
				j--;
			}
		}
	}
	return line;
}