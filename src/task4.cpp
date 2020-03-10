#include <stdio.h>
#include <string.h>


char* process(char* line)
{
	int a = strlen(line);
	char buf = 0;
	for (int i = 0; line[i] != '\0'; i++)
	{
		for (int j = a - 1; j > i; j--)
		{
			if ((line[i]>='0')&&(line[i]<='9')&&(line[j]>='a')&&(line[j]<='z'))
			{
				buf = line[i];
				line[i] = line[j];
				line[j] = buf;
			}
		}
	}
	return line;
}