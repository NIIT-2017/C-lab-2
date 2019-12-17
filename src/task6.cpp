#include<stdio.h>
#include<string.h>
#include"task6.h"

char*clear(char*line)
{
	int i = 0;          //It's a line character number.
	int flag = 0;       //It's a flag for word designation.

	while (line[i])     //It's for deletion ' ' in line's end.
	{
		if (line[strlen(line) - 1] == ' ')
			line[strlen(line) - 1] = '\0';
		else
			break;
	}

	while (line[i])  
	{
		if (line[i] == ' ' && flag == 0)       //It's for deletion ' ' in line's start.
			;
		else if (line[i] != ' ' && flag == 0)
		{
			flag = 1;
			putchar(line[i]);
		}

		else if (line[i] != ' ' && flag == 1)
			putchar(line[i]);

		else if (line[i] == ' ' && flag == 1)   //It's for deletion ' ' between words.
		{
			flag = 0;
			putchar(line[i]);
		}
		i++;
	}
	
	return line;                                //It's a return result.
}