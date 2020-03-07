#include "task4.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale>

char* process(char* line)
{
	int j = strlen(line)-1;
	int i = 0;
	for (int i = 0; i < j; i++, j--)
	{
		if ((isalpha(line[i])) && (isdigit(line[j])))

			continue;

		else if (isalpha(line[i]))
		{
			while (isalpha(line[i]) && i < j)
			{
				i++;
			}
			int tmp = line[i];
			line[i] = line[j];
			line[j] = tmp;
		}
		else
		{
			while (isdigit(line[j]) && i < j)
			{
				j--;
			}
			int tmp = line[i];
			line[i] = line[j];
			line[j] = tmp;
		}
	}
	return line;
}   