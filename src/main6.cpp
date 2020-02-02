#include <stdio.h>
#include <string.h>
#include "task6.h"


int main()
{
	char str[255] = { 0 };
	printf("Enter your line: ");
	fgets(str, 255, stdin);
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	printf("%s", clear(str));
	return 0;
}