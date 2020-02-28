#include "task5.h"
#include <stdlib.h>


char* password(char* line)

{
	int val = 0;

	line[0] = rand() % ('9' - '0' + 1) + '0';
	line[1] = rand() % ('Z' - 'A' + 1) + 'A';
	line[2] = rand() % ('z' - 'a' + 1) + 'a';

	for (int i = 0; i < 8; i++)

	{

		int r = rand() % 3;

		if (r == 0)
			line[i] = 'A' + rand() % ('Z' - 'A' + 1);

		else if (r == 1)



			line[i] = 'a' + rand() % ('z' - 'a' + 1);



		else if (r == 2)



			line[i] = '0' + rand() % ('9' - '0' + 1);


	}
	line[8] = '\0';

		return line;

	}