#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int num = 0;
	printf("Enter the number of lines to display the picture:\n");
	scanf("%d", &num);
	if (num < 0)
	{
		printf("Unknow value.\n");
		return -1;
	}
	else
	{
		char buf[500] = { '0' };
		for (int i = 1; i <= num; i++)
		{
			layout(buf, i, num);
			for (int j = 0; j < (num + i); j++)
			{
				printf("%c", buf[j]);
			}
			printf("\n");
		}
		return 0;
	}
}