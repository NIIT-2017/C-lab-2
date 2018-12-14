#include <stdio.h>
#include <string.h>

char * clear(char * buf)
{
	int spaceCounter = 0;
	char buffer;

	for (int i = 0; buf[i] != 0; i++)
	{
		if (buf[i] == ' ')
			spaceCounter++;
		if (buf[i] != ' ' && spaceCounter>1)
		{
			for (int j = i - (spaceCounter - 1); buf[j] != 0; j++)
			{
				buffer = buf[j+ (spaceCounter - 1)];
				buf[j] = buffer;
			}
			spaceCounter = 0;
		}
	}


	if (buf[0] == ' ')
	{
		for (int i = 1; buf[i] != 0; i++)
		{
			buffer = buf[i];
			buf[i - 1] = buffer;
		}
	}
	
	buf[(strlen(buf) - 1)] = 0;
	return buf;
}

