#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(0));
	char str[8] = { '0' };
	for (int i = 0; i < 10; i++)
	{
		password(str);
		for (int j = 0; j < 8; j++)
		{
			printf("%c", str[j]);
		}
		puts("\n");
	}
	return 0;
}