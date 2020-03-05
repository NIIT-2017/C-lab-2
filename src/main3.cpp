#include <stdio.h>
#include "task3.h"
#define SIZE 256

int main()
{
	char buf[SIZE] = {0};
	int line, count;

	printf("Enter a number of lines: ");
	scanf("%d", &count);

	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s \n", buf);
	}
	return 0;
}
