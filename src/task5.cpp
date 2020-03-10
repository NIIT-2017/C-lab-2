#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* password(char* line)
{
	for (int i = 0; i < 8; i++)
	{
		char j = rand() % 3;
		if (j == 0)
			line[i] = 'A' + rand() % ('Z' - 'A' + 1);
		else if (j == 1)
			line[i] = 'a' + rand() % ('z' - 'a' + 1);
		else
			line[i] = '0' + rand() % ('9' - '0' + 1);
	}
	line[8] = '\0';
	return line;
}