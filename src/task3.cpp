#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* layout(char buf[], int line, int count)
{
	for (int i = 0; i < (count - line + line * 2 - 1); i++)
	{
		if (i < (count - line))
			buf[i] = ' ';
		else 
			buf[i] = '*';
	}
	buf[count - line + line * 2 - 1] = '\0';
	return buf;
}