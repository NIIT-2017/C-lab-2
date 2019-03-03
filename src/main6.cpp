#include <stdio.h>
#include <string.h>
#define N 1024
#include "task6.h"

int main()
{
	char inStr[N];
	printf("Please, enter any text to get rid off superfluous spaces\n");
	fgets(inStr, N, stdin);
	printf("%s\n",clear(inStr));
	return 0;
}