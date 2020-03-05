#include <stdio.h>
#include <string.h>
#include "task6.h"
#define SIZE 256

int main()
{

	char line[SIZE] = {0};
	printf("Enter some string:\n");
	fgets(line, SIZE, stdin);
	clear(line);
	printf("%s", line);
	return 0;
}
