#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	int count = 0;
	char buf[256] = { 0 };
	int line = 1;
	printf("Enter number of triangel's lines\n");
	scanf("%d", &count);
	while (line <= count)
	{
		line++;
		printf("%s\n", layout(buf, line, count));
	}
	return 0;
}