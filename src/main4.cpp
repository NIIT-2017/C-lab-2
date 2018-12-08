#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main()
{
	char line[36];
	int i, random;

	for (i = 0; i < 10; i++)
		line[i] = '0' + i;
	for (i = 0; i < 26; i++)
		line[i + 10] = 'a' + i;
	
	srand(time(NULL));
	for (random = 0, i = 0; i < 10; i++)
		random = rand() % 36, line[i] = line[random];
	line[10] = '\0';

	process(line);
	
	getchar();
	return 0;
}