#include <stdio.h>
#include "task4.h"
#define N 256



int main()
{
	char line[N];
	puts("Please, enter a string to sort");
	fgets(line, N, stdin);
	printf("%s", process(line));
	
	return 0;

}