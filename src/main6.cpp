#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>

#define SIZE 256

int main()
{
	char line[SIZE] = { 0 };
	
	printf("enter the string\n");
	fgets(line, SIZE, stdin);
	printf(clear(line));
	
	return 0;
}