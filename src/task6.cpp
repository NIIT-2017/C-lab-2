#include "task6.h"
#include<string.h>


char* clear(char* line)
{
	int i = 0, j = 0, l = 0;
	int len = strlen(line);
	if (line[len - 1] == '\n')
		line[len - 1] = '\0';

	while (line[0] == ' ')
	{
		for (j = 0; j <= strlen(line) - 1; j++)
		{
			line[j] = line[j + 1];
		}
	}
	l = strlen(line) - 1;
	while (line[l] == ' ')
	{
		line[l] = '\0';
		l--;
	}
	i = 0;
	//int i = 0, j = 0;
	//int len = strlen(line);
	while (line[i])
	{
		if ((line[i] == ' ') && (line[i + 1] == ' '))
		{
			for (j = i; j <= strlen(line); j++)
			{
				line[j] = line[j + 1];
			}
		}
		else
		{
			i++;
		}
	}
	return line;
}