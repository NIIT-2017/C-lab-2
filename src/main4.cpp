#include "task4.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	time_t now;
	time(&now);
	srand(now);
	char line[9];
	int i = 0;
	for (int i = 0; i < 8; i++)
		{
			line[i] = rand() % ('9' - '0') + '0';
		}
	line[8] = '\0';
	puts(line); // pre-code
	for (int i = 0; i < 8; i+=2)
		{
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
			if (i == 8)
			fgets(line, 8, stdin);
		}
	puts(line); // mix-code
	printf(process(line)); // sort-code
} 