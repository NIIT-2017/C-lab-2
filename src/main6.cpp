#include "pch.h"
#include <stdio.h>
# define N 256
#include "task6.h"

int main()
{
	char line[N];
	printf("Enter words or letters with spaces: ");
	fgets(line, N, stdin);

	printf(clear(line));

	return 0;
}