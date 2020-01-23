#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	int count = 0;
	char buf[512] = { 0 };
	int line = 1;
	printf("Enter number of triangel's lines\n");
	scanf("%d", &count);
	while (line <= count)
	{
		printf("%s\n", layout(buf, line, count));
		line++;
	}
	return 0;
}