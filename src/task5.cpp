#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * password(char * line)
{
	int i1;
	int i2;
	int random;
	srand(time(NULL));
	for (i1 = 0; i1 < 10; i1++, printf("\n"))
	{
		for (i2 = 0; i2 < 8; i2++)
		{
			random = rand() % 62;
			printf("%c", line[random]);
		}
	}
	return 0;
}