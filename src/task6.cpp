#include "task6.h"
#include <string.h>

char* clear(char* str)
{
	int firstSpace = 0;
	int i = 0, j = 0;
	while (1) //удаляем пробелы в конце строки
	{
		if (str[strlen(str) - 1] == ' ')
			str[strlen(str) - 1] = '\0';
		else
			break;
	}
	while (1) // удаляем пробелы в начале строки
	{
		if (str[0] == ' ')
		{
			j = 0;
			while (str[j])
			{
				str[j] = str[j + 1];
				j++;
			}
		}
		else
			break;
	}
	while (str[i]) // удаляем лишние пробелы в середине строки
	{
		if (str[i] == ' ' && firstSpace == 0)
		{
			firstSpace = 1;
			i++;
		}
		else if (str[i] == ' ' && firstSpace == 1)
		{
			j = i;
			while (str[j])
			{
				str[j] = str[j + 1];
				j++;
			}
			if (str[i] != ' ')
			{
				firstSpace == 0;
				i++;
			}

		}
		else
		{
			i++;
			firstSpace = 0;
		}
	}
	return str;
}
