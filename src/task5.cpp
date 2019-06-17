#include <stdio.h>
#include <stdlib.h>
#define N 8


char * password(char * line)
{
	int i;
	for (i = 0; i < N; i++)
	{
		int symbol = rand() % 3;
		if (symbol == 0)
			line[i] = rand() % ('0' - '9') + '0';
		if (symbol == 1)
			line[i] = rand() % ('A' - 'Z') + 'A';
		if (symbol == 2)
			line[i] = rand() % ('a' - 'z') + 'a';
	}
	line[N] = '\0';
	return line;
}
