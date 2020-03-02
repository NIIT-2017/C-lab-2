#include <string.h>
#include <stdio.h>


char* process(char* line)
{

	int a = 0;
	int x = strlen(line)-1;

	char buf = { 0 };

	while (a < x)

	{
		if (line[a] >= 'a' && line[a] <= 'z')
	
		{
			a++;
			continue;
		}

		if (line[x] >= '0' && line[x] <= '9')

		{
			x--;
			continue;
		}

		buf = line[a];
		line[a] = line[x];
		line[x] = buf;

	}

	return line;

}