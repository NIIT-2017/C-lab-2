#include "task4.h"

char* process(char* line)
{
	int size = 0;
	while (line[size] != '\0')
	{
		size++;
	};
	char tmp;
	int pos = size - 1;
	for (int i = 0; i < size - 1; ++i)
	{
		if (i == pos)
		{
			break;
		}
		if (line[i] > 47 && line[i] < 58 && i != pos)
		{
			
			for (int j = pos; j > 0; j--)
			{
				if (j == i)
				{
					break;
				}
				if (line[j] > 64)
				{
					tmp = line[i];
					line[i] = line[j];
					line[j] = tmp;
					j--;
					pos = j;
					break;
				}
				
			}
		}
		if (i == pos)
		{
			break;
		}
	}
	return line;
}