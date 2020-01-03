#include "task6.h"

char* clear(char* line)
{
	int size = 0;
	int tmp = 0;
	while (line[size] != '\0')
	{
		size++;
	}

	if (line[0] == ' ')
	{
		int k = 0;
		do
		{
			k++;
		} while (line[k] == ' ');
		line[0] = line[k];
		
		for (int i = 1; i < size-k; i++)
		{
			line[i] = line[i + k];
		}
		line[size-k] = '\0';
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
		if (line[size - tmp - 1] == ' ')
		{
			line[size - tmp - 1] = '\0';
		}
	}
	else
	{
		for (int i = 1; i < size-tmp; i++)
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
		if (line[size - tmp - 1] == ' ')
		{
			line[size - tmp - 1] = '\0';
		}
	}
	return line;
}