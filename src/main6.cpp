#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task6.h"

int main()
{
	char line[256];
	printf("Enter a string: ");
	fgets(line, 256, stdin);
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = 0;
	printf("%s", clear(line));
	return 0;
}