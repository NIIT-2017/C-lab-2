#include "pch.h"
#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[140];
	int line = 1;
	int count;
	printf("Enter the lines in the triangle: \n");
	scanf("%d", &count);

	for (; line <= count; line++)
		puts(layout(buf, line, count));


	return 0;
}