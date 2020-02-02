#include <string.h>

char* process(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;
	char buff = '0';
	int k = 50;
	for (; i < j; i++)
		{
			if ('0' <= line[i] && line[i] <= '9')
			{
				buff = line[i];
				while ('0' <= line[j] && line[j] <= '9')
					j--;
				line[i] = line[j];
				line[j] = buff;
				j--;
			}
		}
	return line;
}