// Clab2 task6

/* Ќаписать программу, очищающую строку от лишних пробелов. Ћишними счи-
   таютс€ пробелы в начале строки, в конце строки и пробелы между словами,
   если их количество больше 1.*/

#include "task6.h"


char *clear(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	int inWord = 0, i = 0, k = 0, l = 0;
	int j = strlen(line) - 1;

	while (1)
	{
		if (line[j] == ' ')
		{
			line[j] = '\0';
		}

		else
			break;
		j--;
	}
		
	while (1)
	{
		if (line[0] == ' ')
		{
			k = 0;
			while (k < strlen(line))
			{
				line[k] = line[k + 1];
				k++;
			}
		}

		else
			break;
	}

	while (i < strlen(line))
	{		
		if (line[i] == ' ' && inWord == 0)
		{
			int l = i;
			while (l < strlen(line))
			{
				line[l] = line[l + 1];
				l++;
			}
			
		}

		else if (line[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			i++;
		}

		else if (line[i] != ' ' && inWord == 1)
		{
			i++;
		}

		else if (line[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			i++;
		}

	}

	return line;
}

