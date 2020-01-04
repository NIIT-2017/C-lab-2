#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

# define N 10

char* process(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;
	int buf = 0;

	while (i < j)
	{
		if (!(line[i] >= '0' && line[i] <= '9'))
			i++;
		else if (!(line[j] >= 'a' && line[j] <= 'z'))
			j--;
		else if ((line[i] >= '0' && line[i] <= '9') && (line[j] >= 'a' && line[j] <= 'z'))
		{
			buf = line[i];
			line[i] = line[j];
			line[j] = buf;
			i++;
			j--;
		}
	}
	return line;
}