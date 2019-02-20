#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	char line[9];
	for (int i = 0; i < 10; i++)
	{
		printf("%s", password(line));
		printf("\n");
	}	
	return 0;
}