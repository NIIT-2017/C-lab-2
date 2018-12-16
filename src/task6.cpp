#include<stdio.h>

char * clear(char * line)
{
	for (int i = 0; line[i] != '\0'; i++)
		if (line[i] != ' ')
			putchar(line[i]);
		else line[i] = line[i + 1];
	return line;
}