#include <string.h>
#include <stdio.h>


char* process(char* line)
{


	int a = 0;
	int x = strlen(line) - 1;

	char zip;
	while (a < x)

	{



		if (line[a] >= 'a' && line[a] <= 'z')



		{

			a++;
		}



		if (line[x] >= '0' && line[x] <= '9')



		{

			x--;

		}



		zip = line[a];
		line[a] = line[x];
		line[x] = zip;

	}

	return line;

}