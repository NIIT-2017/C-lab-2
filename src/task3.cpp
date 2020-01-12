#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

char* layout(char buf[], int line, int count)
{
	for (int i = 0; i < count - line + 1; i++)
	{
		buf[i] = ' ';
	}
	for (int i = count - line + 1 ; i < count + line; i++)
	{
		buf[i] = '*';
	}
		
	buf[count+line] = '\0';
	return buf;
}