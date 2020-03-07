#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <random>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 8

int main()
{
	char line[N + 1];
	int a;
	srand(time(0));
	for (a = 0; a < 10; a++)
	{
		puts(password(line));
		puts("\n");
	}
	return 0;
}