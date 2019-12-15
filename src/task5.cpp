// Clab2 task5

#include "task5.h"

char* password(char* line)
{
	int i = 0, random = 0;
	char a, b, c;

	while (i < 8)
	{
		a = rand() % ('Z' - 'A' + 1) + 'A';
		b = rand() % ('z' - 'a' + 1) + 'a';
		c = rand() % ('9' - '0' + 1) + '0';

		random = 1 + rand() %3;
		
		if (random == 1)
			line[i] = a;

		else if (random == 2)
			line[i] = b;

		else if (random == 3)
			line[i] = c;
		
		i++;
	}
	

	line[i] = '\0';

	return line;
}