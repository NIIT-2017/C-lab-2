#include "task5.h"
#include <stdlib.h>

char* password(char* line)
{
	char c = 0;
	int val = 0;
	int i = 0;

	line[0] = rand() % ('9' - '0' + 1) + '0';
	line[1] = rand() % ('Z' - 'A' + 1) + 'A';
	line[2] = rand() % ('z' - 'a' + 1) + 'a';

	for (i = 3; i < 8; i++)
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
	line[8] = '\0';
	return line;
}