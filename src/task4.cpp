#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>

char* process(char* line)
{
	char buff;
	int j = SIZE-2;
	for (int i = 0; i < SIZE-1; i++)
	{
		int indicator = 0;
		if ((line[i] >= '0') && (line[i] <= '9')) 
		{
			while ((indicator == 0) && (i!=j))
			{
				if ((line[j] >= '0') && (line[j] <= '9'))
				{
					j--;
				}
				else
				{
					buff = line[j];
					line[j] = line[i];
					line[i] = buff;
					indicator = 1;
				}
			}
			if (i == j)
			{
				break;
			}

		}
	}
	
	return line;
}