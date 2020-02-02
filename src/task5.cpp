#include "task5.h"
#include <time.h>
#include <stdlib.h>

char* password(char* line)
{
	for (int i = 0; i < 8; i++)
	{
		do
		{
			line[i] = 48 + rand() % 74;
		} while (((line[i] > 57) && (line[i] < 65)) || ((line[i] > 90) && (line[i] < 97)));
	}
	line[8] = '\0';
	return line;
}