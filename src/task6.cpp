#include <stdio.h> 
#include <string.h>

char * clear(char * line)
{
	int begin = 0, i=0;
	void shift(int begin, char line);
	
	while (line[begin] == ' ')
		for (i = begin; i < strlen(line); i++)
			line[i] = line[i + 1];

	begin++;
	for (; begin < strlen(line); begin++)
		while (line[begin] == ' '&& line[begin + 1] == ' ')
			for (i = begin; i < strlen(line); i++)
				line[i] = line[i + 1];

	for (int q = strlen(line); line[q - 2] == ' '; line[q - 2] = '\0');
		
	
	return line;
}
