#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 8


char * password(char * line)
{
	
	for (int i = 0; i < N; i++)
	{
		int randomise = rand() % 3;
		if (randomise == 0)
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		else if (randomise == 1)
			line[i] = rand() % ('9' - '0' + 1) + '0';
		else if (randomise == 2)
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
	}
	
	
		line[N] = '\0';

	return line;

} 