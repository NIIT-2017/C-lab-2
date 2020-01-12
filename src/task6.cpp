#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>
#include <string.h>

char* clear(char* line)
{
	int l = strlen(line) - 2;
	int i = 0;
	int j = 0;

	while (line[l] == ' ')
	{
		line[l] = '\0';
		l--;
	}

	for (i = l; i > 0; i--)
	{
		if (line[i] == ' ')
		{
			if (line[i - 1] == ' ')
			{
				for (j = i; j < l; j++)
				{
					line[j] = line[j + 1];
				}
				line[l] = '\0';
				l--;
			}
		}

	}

	if ((line[0] == ' '))
	{
		for (j = 0; j <= l; j++)
		{
			line[j] = line[j + 1];
		} 
	}

	return line;
}