#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* clear(char* line)
{
	while (line[0] == ' ')
	{
		for (int y = 0; y < strlen(line); y++)
			line[y] = line[y + 1];
	}
	int j = strlen(line) - 1;

	while (line[j] == ' ')
	{
		line[j] = '\0';
		j--;
	}
	int i = 0;
	while (line[i])
	{
		if (line[i] == ' ' && line[i + 1] == ' ')
		{
			for (int y = i; y < strlen(line); y++)
				line[y] = line[y + 1];
		}
		else
			i++;
	}
	return line;
}