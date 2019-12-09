#include "task3.h"
#include <stdio.h>

char* layout(char buf[], int line, int count)
{
	//line - номер строки в массиве
	//count - количество строк всего
	int i = 0;
	sprintf(buf, " ");
	int nspace = (count * 2 - 1) - (line * 2 - 1);
	
	for (i = 0; i < count * 2 - 1; i++)
	{
		buf[i] = ' ';
	}
	buf[count * 2 - 1] = '\0';

	for (i = nspace/2; i < nspace / 2 + line * 2 - 1; i++)
	{
		buf[i] = '*';
	}

	return buf;

}