#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main()
{
	puts("Enter string: ");
	char line[256];
	fgets(line, 256, stdin);
	printf("%s", clear(line));
	return 0;
}