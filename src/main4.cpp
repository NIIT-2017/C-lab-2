#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "task4.h"

char* generateline(char* line) // генерируем случайную строку
{
	int k = 0;
	int i = 0;
	for (; k < 19; k++)
	{
		switch (rand() % (3 + 1))
		{
		case 1:
		{
			line[k] = rand() % ('9' - '0' + 1) + '0';
			break;
		}
		case 2:
		{
			line[k] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		}
		case 3:
		{
			line[k] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		}
		}
	}
	line[19] = '\0';
	return line;
}

int main()
{
	char line[20];
	for (int i = 5; i; i--)
	{
		printf("%s\n", generateline(line)); // генерируем
		printf("%s\n\n", process(line)); // сортируем случайную строку
	}
	return 0;
}