#include "task3.h"
#include <stdio.h>
int main()
{
	int a = 0;
	printf("Enter tne number of count\n");
	scanf("%d", &a);
	char str[256] = { 0 };
	for (int b = 1; b <= a; b++)
	{
		printf(layout(str, b, a));
		printf("\n");
	}
	return 0;
}
