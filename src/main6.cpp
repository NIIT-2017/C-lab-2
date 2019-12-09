#include <stdio.h>
#include "task6.h"
#include <string.h>
#include <stdlib.h>

void ReplaceLastCharacter(char *line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}

int main()
{
	char line[256] = {0};
	int count = 0;
	int inWord = 0;
	printf("Enter a line:\n");
	fgets(line, 256, stdin);

	ReplaceLastCharacter(line);

	printf("%s\n", clear(line));

	return 0;
}