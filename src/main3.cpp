#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[256] = { 0 };
	int count = 0;
	printf("Enter the number of lines:\n");
	scanf("%i", &count);
	for (int line = 1; line <= count; line++)
	{
		printf(layout(buf, line, count));
		printf("\n");
	}
	return 0;
}