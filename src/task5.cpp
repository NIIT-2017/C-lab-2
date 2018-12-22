#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 8

char * password(char * line)
{
	int ran;
	for (int i = 0; i < SIZE; i++)
	{
		ran = rand() % 3;
		if (ran == 0)
			line[i] = rand() % 9 + 48;
		if (ran == 1)
			line[i] = rand() % 25 + 65;
		if (ran == 2)
			line[i] = rand() % 25 + 97;
	}
	for (int j = 0; j < SIZE; j++)
		printf("%c", line[j]);
	return line;
}