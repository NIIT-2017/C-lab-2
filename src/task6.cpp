#include "task6.h"
#include<string.h>


char* clear(char* line)
{
	int i = 0, j = 0;
	int len = strlen(line);
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