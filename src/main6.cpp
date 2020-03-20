#include "task6.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char line[100];
	printf("Enter text:\n");
	fgets(line, 99, stdin);

	if (line[strlen(line)] == ' ')
		line[strlen(line)] = 0;

	{
		printf("%s", clear(line));
	}
}