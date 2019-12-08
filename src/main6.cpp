#include "task6.h"
#include <stdio.h>
#include <string.h>
int main()
{
	char str[256] = { 0 };
	printf("Please enter string with probel\n");
	fgets(str, 256, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	printf(clear(str));
	return 0;
}