#include <stdio.h>
#include <string.h>
#include "task6.h"

char * clear(char * buf)
{
	int spaceCounter = 0;
	char buffer;

	while (buf[0] == ' ')
	{
		for (int i = 1; i <= strlen(buf); i++)
			{
				buffer = buf[i];
				buf[i - 1] = buffer;
			}
	}
	

	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] == ' ')
			spaceCounter++;
		else if (buf[i] != ' ' && spaceCounter > 1)
		{
			int j = i;
			for (; j<=strlen(buf); j++)
			{
				buffer = buf[j];
				buf[j - (spaceCounter - 1)] = buffer;
			}
			i = i - (spaceCounter - 1);
			spaceCounter = 0;
		}
			else if (buf[i] != ' ' && spaceCounter == 1)
			spaceCounter = 0;

			else if (buf[i] == '\0' && spaceCounter > 0)
			buf[i - spaceCounter] = '\0';
	
	}
	for (int i = 0; i <= strlen(buf); i++)
	{
		if (buf[i] == '\n')
			buf[i] = '\0';
	}
		

	return buf;
}
