#include "task4.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char* random(char* line) 

{
	time_t now;
	time(&now);
	srand(now);

	int i = 0;

	for (i = 0; i < 10; i++)

	{

		switch (rand() % 2)

		{

		case 0:

		{
				  line[i] = rand() % 10 + '0';

				  break;


		}

		case 1:

		{

				  line[i] = rand() % 26 + 'A';
          break;

		}

		case 2:

		{
				  line[i] = rand() % 26 + 'a';

				  break;
		}

	}


}

	line[10] = '\0';

	return line;

}


int main()

{

	char line[11] = { 0 };
	int j = 4;

	for (j = 4; j; j--)

	{

		printf("%s\n", random(line));

		printf("%s\n\n", process(line));


	}

	return 0;

}