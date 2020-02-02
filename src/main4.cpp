#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100
#include <time.h>
#include <stdlib.h>

int main()
{
	char str[SIZE] = {'0'};
	srand(time(0));
	
		for (int i = 0; i < SIZE - 1; i++)
		{
			do
			{
				str[i] = 48 + rand() % 74;
			} while (((str[i] > 57) && (str[i] < 65)) || ((str[i] > 90) && (str[i] < 97)));
			printf("%c", str[i]);

		}
		puts("\n");
		process(str);
		for (int i = 0; i < SIZE - 1; i++)
		{
			printf("%c", str[i]);
		}
		puts("\n");
	return 0;
}