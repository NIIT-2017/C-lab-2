#define _CRT_SECURE_NO_WARNINGS
#define SIZE 256
#include "task6.h"
#include <stdio.h>

int main()
{
	char line[SIZE] = { 0 };
	printf("Enter the string:\n");
	fgets(line, SIZE, stdin);
	printf(clear(line));
	return 0;
}