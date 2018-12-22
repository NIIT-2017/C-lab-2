#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>

char * clear(char * line)
{
	int counter = SIZE;
	for (int i = 0; i < counter; i++)
	{
		if (line[i] == ' ' && line[i + 1] == ' ')
		{
			counter--;
			for (int j = i; j < counter; j++) {
				line[j] = line[j + 1];
			}
			puts("");
		}

	}

	if (line[0] == ' ')
	{
		counter--;
		for (int i = 0; i < counter; i++)
		{
			line[i] = line[i + 1];
		}
	}
	if (line[counter] == ' ')
		counter--;

	for (int i = 0; i < counter; i++)
	{
		if (line[i] == ' ' && line[i + 1] == ' ')
		{
			counter--;
			for (int j = i; j < counter; j++) {
				line[j] = line[j + 1];
			}
		}

	}

	for (int i = 0; i < counter; i++)
	{
		printf("%c", line[i]);
	}
	return line;
}