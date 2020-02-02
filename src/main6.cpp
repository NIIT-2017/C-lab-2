#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	char buf[256];
	printf("jgi balalaeshnik! ");
	fgets(buf, 256, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	printf("%s\n", clear(buf));
	return 0;
} 