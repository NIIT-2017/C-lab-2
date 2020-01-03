#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[100] = {'0'};
	int size = 0;
	printf("Please enter a string of up to 100 characters:\n");
	fgets(str, 100, stdin);
	puts("\n");
	clear(str);
	while (str[size] != '\0')
	{
		size++;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}