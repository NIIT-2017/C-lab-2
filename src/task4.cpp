#include "task4.h"
#include <stdio.h>
#include <string.h>

char* process(char* line)
{
	//initialize the string
	int i = 0, j = strlen(line)-1;
	char temp = 0;
	while (i < j)
	{
		//слева цифры справа буквы
		if(line[i]<='9' && line[i]>='0' && ((line[j]>='A'&& line[j]<='Z')|| (line[j] >= 'a' && line[j] <= 'z')))
		{
			temp = line[i];
			line[i] = line[j];
			line[j] = temp;
			i++;
			j--;
 		}
		else if (line[j] <= '9' && line[j] >= '0' && ((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')))
		{
			//слева буквы справа цифры
			i++;
			j--;
		}
		else if (((line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z')) && ((line[j] >= 'A' && line[j] <= 'Z') || (line[j] >= 'a' && line[j] <= 'z')))
		{
			//слева и справа буквы
			i++;
		}
		else if (line[i] <= '9' && line[i] >= '0' && line[j] <= '9' && line[j] >= '0')
		{
			j--;
		}
	}
	return line;
}