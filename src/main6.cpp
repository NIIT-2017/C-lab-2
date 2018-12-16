#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"

int main()
{

	char line[100] = { 0 };
	printf("Enter a string:\n");
	fgets(line, 100, stdin);

	printf("%s", clear(line));

	return 0;
}