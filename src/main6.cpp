#include<stdio.h>
#include<string.h>
#include"task6.h"

int main()
{
	char line[256];

	puts("Enter a line:");

	fgets(line, 256, stdin);  //It's an query line.
	if (line[strlen(line) - 1] == '\n')  // It's a change of '\n' to '\o' in the line's end.
		line[strlen(line) - 1] = '\0';

	clear(line); //to task6.cpp
	printf("\n");
	return 0;
}