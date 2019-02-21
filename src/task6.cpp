#include "task6.h"
#include <stdio.h>
#include <string.h>

char * clear(char * line)
{
	int length = strlen(line);
	while (line[0] == ' ')
	{
		length = length - 1;
		for (int i = 0; i < length; i++)
			line[i] = line[i + 1];
	}
	int j = 0;
	while (j < length)
	{
		while (line[j] == ' ' && line[j + 1] == ' ')
		{
			length = length - 1;
			for (int k = j; k < length; k++)
				line[k] = line[k + 1];
		}
		j++;
	}
	if (line[length-1] == '\n')
	line[length-2] = '\0';
	return line;
}