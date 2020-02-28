#include <stdio.h>
#include "task3.h"


char * layout(char buf[], int line, int count)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < count - line; i++)
	{
		buf[i] = ' ';
	}
	for (j = 0; j < 2 * line - 1; j++)
	{
		buf[j + i] = '*';
	}
	return buf;
}
