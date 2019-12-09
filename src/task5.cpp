#include <stdio.h>
#include <stdlib.h>

char * password(char * line)
{
	int nabum = 0;
	for (int i = 0; i < 8; i++)
	{
		nabum = rand() % 3;
		if (nabum == 0)
		{
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		}
		else if (nabum == 1)
		{
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		}
		else
		{
			line[i] = rand() % ('9' - '0') + '0';
		}
	}
	line[8] = '\0';
	return line;
}