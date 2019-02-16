
#include "task3.h"
#define _CRT_SECURE_N0_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int line = 1, count;
	char buf[256] = { 0 };
	printf("Enter the number of lines\n");
	scanf_s("%d", &count);
	for (line = 1; line <= count; line++)
	{
		printf("%s\n", layout(buf, line, count));
	}

	return 0;
}