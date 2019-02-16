#include "task6.h"
#define _CRT_SECURE_N0_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 100


int main()
{
	char line[N];
	printf("Enter a string: \n");
	fgets(line, N, stdin);

	printf("%s", clear(line));


	return 0;
}