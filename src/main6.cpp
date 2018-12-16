#include<stdio.h>
#include "task6.h"
#define N 128

int main()
{
	char line[N];
	printf("Enter a string: ");
	fgets(line, N, stdin);
	clear(line);
	return 0;
}