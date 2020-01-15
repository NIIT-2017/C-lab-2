#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>
#include <string.h>

char* clear(char* line)
{
	int l = strlen(line) - 2;
	int i = 0;
	int j = 0;

	while (line[l] == '1')
	{
		line[l] = '\0';
		l--;
	}

	while (line[0] == '1')
	{
		for (j = 0; j <= l + 1; j++)
		{
			line[j] = line[j + 1];
		}
		l--;
	}

	for (i = 1; i <= l; i++)
	{
		if ((line[i] == '1') && (line[i + 1] == '1'))
		{
			for (j = i; j <= l; j++)
			{
				line[j] = line[j + 1];
			}
			i--;
			l--;
		}
	}

	return line;
}