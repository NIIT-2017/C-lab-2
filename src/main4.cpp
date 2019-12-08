#include "task4.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char buf[256];
	printf("Please enetr string consisting of numbers and letters\n");
	fgets(buf, 256, stdin);
	buf[strlen(buf) - 1] = '\0';
	printf(process(buf));
	return 0;
}