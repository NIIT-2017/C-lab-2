#include "task4.h"
#include <string.h>

char* process(char* line)


{
	int x = 0;

	int a = strlen(line) - 1;

	int zip = '0';

	for (; x < a; x++)

	{

		if ('0' <= line[x] && line[x] <= '9');

		{

			zip = line[x];

			while ('0' <= line[a] && line[a] <= '9')

				a--;

			line[x] = line[a];

			line[a] = zip;

			a--;

		}

	}

	return line;
}