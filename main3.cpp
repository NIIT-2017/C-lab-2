#include<stdio.h>
#include "task3.h"


int main()

{
	char buf[256] = { 0 };
	int count = 0;
	int line = 1;
	printf("enter a size, please\n");
	scanf("%i", &count);

	for (; line <= count; line++)

	{
		printf(layout(buf, line, count));

		printf("\n");
	}

	return 0;
}
