#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[256] = { 0 };
	int count = 0;

	printf("Enter rhe number of lines\n");
	scanf("%d",&count);
	for (int line = 1; line <= count; line++)
	{
		printf(layout(buf, line, count));
		printf("\n");
	}
	return 0;
}