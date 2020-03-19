#include "task6.h"

#include<string.h>


char* clear(char* line)
{
	int i = 0;
	int len = strlen(line);
	for (i = 0; i < len; i++)
	{
		if (line[i] == ' ' && line[i + 1] == ' ')
		{
			while (i < len - 1)
			{
				line[i] = line[i + 1];
				i++;
			}
			i = -1;
		}
	}
	return line;
}