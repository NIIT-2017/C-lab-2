#include < stdio.h > 
#include <string.h>

char * clear(char * line)
{
	int begin = 0, i=0;
	void shift(int begin, char line);

	while (line[begin] == ' ')
		for (i = begin; line[i] != '\0'; i++)
			line[i] = line[i + 1];
	begin++;

	for (; line [begin] != '\0';begin++)
	while (line[begin] == ' '&& line [begin+1]==' ')
		for (i = begin; line[i] != '\0'; i++)
			line[i] = line[i + 1];

	if (line[begin-2] == ' ')
		line[begin-2] = line[begin-1];
	
	return 0;
}
