#include <string.h>
char* clear(char* line)
{
	int j = 0;
	int i = strlen(line)-1;
	while (line[i] == ' ')
	{
		line[i] = '\0';
		i--;
	}
	while (line[j] == ' ')
	{
		for (int a = 0; a <= strlen(line) - 1; a++)
		{
			line[a] = line[a + 1];
		}
	}
	while (line[j])
	{
		if (line[j] == ' ' && line[j + 1] == ' ')
		{
			for (int a = j; a <= strlen(line) - 1; a++)
			{
				line[a] = line[a + 1];
			}
		}
		else j++;
	}
	return line;
}