#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int ran;
	puts("Array");
	char arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		ran = rand() % 3;
		if (ran == 0)
			arr[i] = rand() % 9 + 48;
		if (ran == 1)
			arr[i] = rand() % 25 + 65;
		if (ran == 2)
			arr[i] = rand() % 25 + 97;
	}
	for (int i = 0; i < SIZE; i++)
		printf("%c ", arr[i]);
	puts("\nSorted Array");
	process(arr);
	for (int i = 0; i < SIZE; i++)
		printf("%c ", arr[i]);
	return 0;
}