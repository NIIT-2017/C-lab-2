#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* password(char* line)
{
	
	for (int i = 0; i < 8; i++)
	{
		switch (rand() % 3)
		{
		case 0:
			line[i] = rand() % 26 + 'a'; break;
		case 1:
			line[i] = rand() % 26 + 'A'; break;
		case 2:
			line[i] = rand() % 10 + '0'; break;
		}
	}
	line[8] = '\0';

	return line;
}