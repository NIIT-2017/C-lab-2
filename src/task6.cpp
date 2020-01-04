#include "task6.h"

char* clear(char* line)
{
	int size = 0;
	int tmp = 0;
	while (line[size] != '\0')
	{
		size++;
	}

	int k = 0;
	while (line[k] == ' ')
	{
		k++;
	}
	for (int i = 0; i < size - k; i++)
	{
		line[i] = line[i + k];
	}
	line[size - k] = '\0';
	size = size - k;

	k = 0;
	while (line[size - k - 1] == ' ')
	{
		k++;
	}
	line[size - k] = '\0';
	size = size - k;

	for (int i = 1; i < size - tmp; i++)
	{
		if ((line[i] == ' ') && (line[i + 1] == ' '))
		{
			for (int j = i; j < size - tmp; j++)
			{
				line[j] = line[j + 1];
			}
 			tmp++;
			i--;
		}
		line[size - tmp] = '\0';
	}

	return line;
}