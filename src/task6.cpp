#include <stdio.h>
#include <string.h>

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
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

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
	
	}
	if (buf[strlen(buf)-1] == ' ')
		buf[strlen(buf) - 1] = '\0';

	return buf;
}
