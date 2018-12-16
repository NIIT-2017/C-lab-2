#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
char* process(char* line)
{
	int length = strlen(line);
	int temp = 0;
	for (int i = 0; i < length; i++)
	{
		if (line[i] > '9')
			continue;
		else
		{
			for (int j = (length-1); j > i; j--)
			{
				if (line[j] <= '9')
					continue;
				else
				{
					temp = line[i];
					line[i] = line[j];
					line[j] = temp;
				}
			}
		}
	}
	return line;
}
