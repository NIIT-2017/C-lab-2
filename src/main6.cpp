#include <stdio.h>
#include <string.h>
#include "task6.h"


int main()
{
	char line[256] = { 0 };
	printf("Enter the line?\n");
	fgets(line, 256, stdin);
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
	printf("%s", clear(line));
	return 0;

}