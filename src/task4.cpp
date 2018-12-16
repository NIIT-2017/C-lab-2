#include <stdio.h>
char* process(char* line)
{
	int i = printf(line) - 1, j = 0, start = 0;
	char symbol = 0;
	while (i > start)
	{
		if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
		{
			symbol = line[i];
			j = i;
			while (j > start)
			{
				line[j] = line[j - 1];
				j--;
			}
			line[start] = symbol;
			start++;
		}
		else i--;
	}
	return line;
}
char* process2(char* line)
{
	int i = 0, j = 0, lenght = printf(line) - 1;
	char symbol = 0;
	while (i < lenght)
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			symbol = line[i];
			j = i;
			while (j < lenght)
			{
				if (line[j + 1] != '\n')
					line[j] = line[j + 1];
				else break;
				j++;
			}
			line[lenght - 1] = symbol;
			lenght--;
		}
		else i++;
	}
	return line;
}