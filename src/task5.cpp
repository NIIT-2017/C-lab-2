#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 8


char * password(char * line)
{
	
	for (int i = 0; i < N; i++)
	{
		int randChar = rand() % 4;
		switch (randChar)
		{
		case 1:
			line[i] = rand() % ('9' - '0' + 1) + '0';
			break;
		case 2:
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		case 3:
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		}
	}
		line[N] = '\0';

	return line;

} 