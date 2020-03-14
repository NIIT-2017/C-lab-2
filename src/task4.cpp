#include <string.h>

char* process(char* line)
{
	
	int i=0;
	char buf='0';
	int j = strlen(line) - 1;
	char sym;
	for (int i = 0; i < j; i++)
	{
		if ((line[i] >= '0') && (line[i] <= '9'))
		{
			while ((line[j] >= '0') && (line[j] <= '9'))
			{
				j--;
			}
			if (i < j)
			{
				buf = line[j];
				line[j] = line[i];
				line[i] = buf;
				j--;
			}
		}
	}
	return line;
}