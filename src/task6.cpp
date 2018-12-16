#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

char * clear(char * line)
{
	int length = strlen(line);
	//int i = 0;
	int from = 0;
	for (int i = 0; i < length; i++)// counting ' ' at the begining
	{
		if (line[i] != ' ')
			break;
		else
			from++;
	}
	for (int i = 0; i < length; i++)// deleting ' ' at the begining
	{
		line[i] = line [i+from];
	}
	// deleting ' ' in the middle
	for (int i = 1; i < length; i++)
	{
		if (line[i] != ' ')
			continue;
		else
		{
			if (line[i - 1] != ' ')
				continue;
			else
				for (int j = i; j < length; j++)
				{
					line[j] = line[j + 1];
					i--;
				}
		}
	}
	// deleting ' ' in the end
	for (int i = 1; i < length; i++)
	{
		if (line[i] != '\n')
			continue;
		else
		{
			if (line[i-1] != ' ')
				break;
			else
			{ 
				line[i - 1] = '\n';
				line[i] = 0;
			}	
		}
	}
	return line;
}