#include"task3.h"
#include<stdio.h>

int main(void)
{
	char buf[SIZE] = { 0 };
	int line = 1;
	int count;

	puts("Enter the number of lines of our triangle:");
	while (scanf("%d", &count) != 1)  ////This cycle for give correct data.
	{
		puts("Uncorrect data!\nAlso enter the number of lines of our triangle:");
		while (getchar() != '\n')
			continue;
	}

	for (line; line <= count; line++) //It's a line entry.
		puts(layout(buf, line, count)); //It's a call of function for printing line of our triangle.
	return 0;
}