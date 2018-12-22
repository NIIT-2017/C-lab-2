#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
	int line = 1;
	puts("Input amount of lines");
	int count;
	scanf("%d", &count);
	char sym = ' ';
	char buf[SIZE] = {sym};
	layout(buf, line, count);
	return 0;
}