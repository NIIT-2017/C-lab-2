#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

char * layout(char buf[], int line, int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = count - i - 1; j <= count + i; j++)
		{
			buf[j] = '*';
		}

		for (int j = 0; j < i + count; j++)
		{
			printf("%c", buf[j]);
		}
		puts("");
	}

	return buf;
}

