#include "task4.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void initLine(char* line)
{
	char c=0;

	int val = 0;
	int i = 0;
	for (i = 0; i < 255; i++)
	{
		val = rand() % 3;
		switch (val)
		{
		case 0:
			c = rand() % ('9' - '0' + 1) + '0';
			break;
		case 1:
			c = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		case 2:
			c = rand() % ('z' - 'a' + 1) + 'a';
			break;
		default:
			break;
		}
		line[i] = c;
	}
	line[255] = '\0';

}

int main()
{
	time_t now;
	time(&now);
	srand(now);
	rand();

	char line[256] = {};
	
	initLine(line);
	printf(process(line));
	return 0;
}