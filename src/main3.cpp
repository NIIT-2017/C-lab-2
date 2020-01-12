#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>

int main()
{
	char buf[256] = { 0 };
	int line = 0;
	int count = 0;

	printf("enter the number of lines\n");
	scanf("%i", &count);
	int count2 = count;

	for (int line = 1; line <= count2; line++)
	{
		printf(layout(buf, line, count));
		printf("\n");
	}
	
	return 0;

}