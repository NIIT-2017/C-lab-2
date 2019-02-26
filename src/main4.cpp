#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{

	char line[100];
	printf("Enter a string:\n");
	scanf("%s", line);
	printf("%s\n", process(line));

	return 0;

}
