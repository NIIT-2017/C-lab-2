#include "task4.h"
#include <stdio.h>
#include <string.h>

char* process(char* line)
{	
	char buf = 0;
	int length = strlen(line);
	for (int i = 0; i < length; i++)
	{
		for (int j = length - 1; j > i; j--)
		{
			if ((line[i] <= '9') && (line[j] > '9'))
			{					
				buf = line[i];
				line[i] = line[j];
				line[j] = buf;
			}
		
		}
	}
	return line;	
}