#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	puts("Vvedite kolichestvo strok: ");
	int line = 1;
	int count = 0;
	char buf[SIZE] = {0};
	scanf("%d", &count);
	for (int i = 0; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);
	}

	return 0;
}