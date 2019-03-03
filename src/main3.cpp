#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 128
#include "task3.h"



int main()
{
	int count;
	char buf[N];
	printf("Please, enter a number of lines\t\a");
	scanf("%d", &count);

	for (int line = 1; line <= count; line++) 
		printf("%s\n", layout(buf, line, count));
	

	return 0;

}