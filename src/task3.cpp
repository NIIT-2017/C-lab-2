#include "task3.h"
#include <stdio.h>

char* layout(char buf[], int line, int count)
{
	//line - номер строки в массиве
	//count - количество строк всего
	int i = 0;
	sprintf(buf, " ");
	int nspace = (count * 2 - 1) - (line * 2 - 1);

	for (i = 0; i < nspace / 2 + line * 2 - 1; i++)
		if (i >= nspace / 2)
			buf[i] = '*';
		else
			buf[i] = ' ';

	buf[i] = '\0';

	return buf;
}