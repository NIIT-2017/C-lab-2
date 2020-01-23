#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task6.h"
 
char* clear(char* line)
{
	int inWord = 0; /*флаг "в слове"*/
		
	while (line[0] == '/')
	{
			for (int i = 0; i < strlen(line); i++)
			{
				line[i] = line[i+1];
			}
	}
	int j = strlen(line) - 1;
	while (line[j] == ' ')
	 {
		 line[j] = '\0';
		 j--;
	}
	int i = 0;
	while (i< strlen(line))
	{
		if (line[i] != ' ' && inWord == 0)
		{/*начало слова*/
		inWord = 1;
			i++;
		}
		else if (line[i] != ' ' && inWord == 1)
		{/*в слове*/
		i++;
		}
		else if (line[i] == ' ' && inWord == 1)
		{/*конец слова*/
			inWord = 0;
			i++;
		}
		else if (line[i] == ' ' && inWord == 0)
		{
			
			for (int l = i; l < strlen(line); l++)
			{
				line[l] = line[l+1];
			}
		}	
	}
	return line;
}