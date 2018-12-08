#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 0;
	int count=0;
	char buf[256];

	printf("Enter the number of lines.\n");
	scanf("%d", &line);
	count = 1+(line-1)*2;
	layout(buf, line, count);
	
	getchar();
	getchar();
	return 0;
}