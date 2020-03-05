#include<stdio.h>
#include<string.h>
#include"task6.h"

char* clear(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;

	while (line[j] == ' ' && j >= 0)  //delete ' ' in the end of line
	{
		line[j] = '\0';
		j--;
	}

	while (line[i] == ' ')   //delete ' ' in the start line
	{
		for (int k = 0; k <= j; k++)
			line[k] = line[k + 1]; //translation uor line by one array cell
	}

	while (line[i])  //delete ' ' in the line
	{
		if (line[i] == ' ' && line[i + 1] == ' ')
		{
			for (int z = i; z <= (strlen(line) - 1); z++)
				line[z] = line[z + 1];
		}
		else i++;
	}

	return line;                                //It's a return result.
}