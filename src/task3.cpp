#include <stdio.h>
char* layout(char buf[], int line, int count)
{
	for (int i = 0; i<=(2*count-1); i++)
	{
		if ((i >= (count - line)) && (i < ((count - line) + (line - 1) * 2 + 1))) buf[i] = '*';
		else if (i < (count - line))
			buf[i] = ' ';
		else
			buf[i]='\0';
	}
	return buf;
}
