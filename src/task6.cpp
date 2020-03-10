#include <stdio.h>
#include <string.h>


char * clear(char * line)
{
	int a = 0;
	int b = 0;
	int space = 0;
	while (1)
	{
		if (line[strlen(line) - 1] == ' ')
			line[strlen(line) - 1] = '\0';
		else
			break;
	}
	while (1)
	{
		if (line[a] == ' ')
		{
			line[a] = line[a + 1];
			a++;
		}
		else
			break;
	}
	while (line[b])
	{
		if (line[b] == ' '&& space == 0)
		{
			space = 1;
			b++;
		}
		else if (line[b] == ' '&& space == 1)
		{
			a = b;
			while (line[a])
			{
				line[a] = line[a + 1];
				a++;
			}
			if (line[b]!=' ')
			{
				space = 0;
				b++;
			}

		}
		else 
		{
			b++;
			space = 0;
		}
	}

	return line;
}
