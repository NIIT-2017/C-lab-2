#include <string.h>

char*clear(char*line)
{
	int i=0;
	
	while (line[0] == ' ')
	{
		for (int j = 0; j<=(strlen(line) - 1); j++)
		{
			line[j] = line[j + 1];
		}
	}
	int l = strlen(line) - 1;
	
	
	while (line[l] == ' ')
	{
		line[l] = '\0';
		l--;
	}
	i = 0;
	
	
	while (line[i])
	{
		if ((line[i] == ' ') && (line[i + 1] == ' '))
		{
			for (int j = i; j<=(strlen(line)); j++)
			{
				line[j] = line[j + 1];
			}
		}
		else
		{
			i++;
		}
	}
	return line;




}