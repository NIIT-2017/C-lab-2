#include <string.h>

char*clear(char*line)
{
	int lenght = strlen(line);
	int i = 0, j = 0;

	while (line[0] == ' ')
	{
		for (i = 0; i < lenght; i++)
			line[i] = line[i + 1];
	}
	for (i = 0; i < lenght; i++)
	{
		while (line[i] == ' '&&line[i + 1] == ' ')
		{
			for (j = i; j < lenght; j++)
				line[j] = line[j + 1];
		}
		
	}
	if (line[i] == ' ')
		line[i] = '\0';
	return line;
}
