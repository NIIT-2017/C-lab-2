#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char line[SIZE] = { 0 };
	puts("Vvedite stroky: ");
	fgets(line, SIZE, stdin);	
	printf("%s",process(line));
	return 0;
}

