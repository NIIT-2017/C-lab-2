#include <stdio.h>
#include <string.h>

char * clear(char * line)
{
	int lenth = strlen(line);

	while (line[0] == ' ')
	{
		for (int k = 0; k < lenth; k++)
			line[k] = line[k + 1];
		lenth--;
	}


	for (int i = 0; i<=lenth; i++)
	{

		if (line[i] != ' ')
			putchar(line[i]);
		else
		{
			for (;line[i] == ' '; i++);
			i--;
			printf(" ");
		}

	}
	return line;
}