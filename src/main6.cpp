#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"

int main()
{
	char line[256];
	
	printf ("Enter line: \n");
	fgets (line, 256, stdin);
	
	clear(line);

	puts (line);
	
	getchar();
	return 0;
}