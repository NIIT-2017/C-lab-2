#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

char* password(char* line)
{
	
	for (int i = 0; i < 8; i++)

	{
		int random = rand() % 3 + 1;
		if (random == 1)

			line[i] = '0' + rand() % ('9' - '0' + 1);
		else if (random == 2)

			line[i] = 'A' + rand() % ('Z' - 'A' + 1);

		else
			line[i] = 'a' + rand() % ('z' - 'a' + 1);
	}
	line[8] = '\0';
return line;
}
