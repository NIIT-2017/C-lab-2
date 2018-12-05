#include <stdio.h>
#include < string.h >
#include "task6.h"
int main()
{
	char line[255];
	puts("Enter a struing, please:");
	fgets(line, 255, stdin);
	clear(line);
	printf("%s", line);
	return 0;
}
