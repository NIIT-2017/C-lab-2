#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
char* password(char* line)
{
	int i = 0;
	int j = 0;
	while (i<9)
	{
		if (i >= 8)
		{
			line[i] = '\0';
			i++;
		}
		else
		{
			j = rand() % 3;
			switch (j)
			{
			case 0:
				line[i] = 48 + rand() % (57 - 48 + 1);
				i++;
				break;
			case 1:
				line[i] = 65 + rand() % (90 - 65 + 1);;
				i++;
				break;
			case 2:
				line[i] = 97 + rand() % (122 - 97 + 1);
				i++;
				break;
			}
		}
	}
	return line;
}