#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	char line[9] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		printf("%s\n", password(line));
	}
	
	return 0;
}