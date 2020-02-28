#include "task5.h"
#include <stdlib.h>


char* password(char* line)
{
	char j = 0;
	int val = 0;

	line[0] = rand() % ('9' - '0' + 1) + '0';
	line[1] = rand() % ('Z' - 'A' + 1) + 'A';
    line[2] = rand() % ('z' - 'a' + 1) + 'a';
		
	for (int i = 3; i < 8; i++)

	{
		{

			val = rand() % 3;

			switch (val)

			{

			case 0:



				j = rand() % ('9' - '0' + 1) + '0';

				break;

			case 1:

				j = rand() % ('Z' - 'A' + 1) + 'A';

				break;

			case 2:

				j = rand() % ('z' - 'a' + 1) + 'a';

				break;

			default:

				break;

			}

			line[i] = j;

		}

		line[8] = '\0';

		return line;



	}


}