#include <stdio.h>
#include "task3.h"

int main()
{
	printf("Enter the number of rows\n");
	int crows = 0;
	int result = scanf("%d", &crows);
	int i = 0;
	char buf[256];

	for (i = 1; i <= crows; i++)
		printf("%s\n", layout(buf, i, crows));

	return 0;
}
