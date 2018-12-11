#include <string.h>

char* process(char* line)
{
	int i = 0, j = 0, hole;
	
	/*if (line[strlen(line) - 1] == '\n')  
		line[strlen(line) - 1] = '\0';*/

	for (;line[i] != '\0';i++);

	for (i--; i > j; j++, i--)
	{
		while (line[j] <= '9'&& i != j)
		{
			hole = line[j];
			line[j] = line[i];
			line[i] = hole;
			i--;
		}

		while (line[i] > '9'&& i != j)
		{
			hole = line[i];
			line[i] = line[j + 1];
			line[j + 1] = hole;
			j++;
		}
	}
	return line;
}