#include "pch.h"
#include <stdio.h>
#include <string.h>

char* process(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;
	char buf;
	while (i < j)
	{
		if (line[i] >= 'a' && line[i] <= 'z')
			i++;
		else if (line[j] >= '0' && line[j] <= '9')
			j--;
		else
		{
			buf = line[i];
			line[i] = line[j];
			line[j] = buf;
		}
	}
return line;
}
