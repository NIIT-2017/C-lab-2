#include <stdio.h>

char* layout(char buf[], int line, int count)
{
	int i, j;
	for (i = 0; i < count - line; i++)
		buf[i] = ' ';
	for (j = 0; j < 2 * line - 1; j++)
	    buf[i+j] = '*';
	buf[i+j] = '\0';
	return buf;
}
