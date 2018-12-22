#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>


int main()
{
	char arr[SIZE] = { 0 };
	puts("Array");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%c", arr[i]);
	}
	puts("\nCleared array");
	clear(arr);
	return 0;
}