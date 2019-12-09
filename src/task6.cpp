#include "task6.h"
#include <string.h>

void lineShift(char* line, int pos)
{
	for (int i = pos; i < strlen(line); i++)
		line[i] = line[i + 1];
}


char* clear(char* line)
{

	int i = strlen(line)-1;
	int j = 0;
	//удаляем пробелы с конца
	while (line[i]==' ' || line[i] == '\0')
	{
		line[i] = '\0';
		i--;
	}
	
	//удаляем пробелы с начала
	while (line[0]==' ')
	{		
		lineShift(line, 0);
	}

	i = 0;
	int inWord = 0;
	while (line[i])
	{
		if (line[i] == ' ' && i>0 && line[i-1] == ' ')
			lineShift(line, i);
		else
			i++;
	}

	return line;
}