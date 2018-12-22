#define _CRT_SECURE_NO_WARNINGS
#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 8

int main()
{
	srand(time(0));
	char arr[SIZE] = { 0 };
	for (int i = 0; i < 10; i++) {
		password(arr);
		puts("");
	}

	return 0;
}