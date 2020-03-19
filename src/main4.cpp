#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include <random>
#include <time.h>
#include "task4.h"
#define N 50
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int i = 0;
	char line[N + 1];
	srand(time(0));
	for (i = 0; i < N; i++)
		switch (rand() % 3)
		{
		case 0:
			line[i] = ('A' + rand() % 25);
			break;
		case 1:
			line[i] = ('a' + rand() % 25);
			break;
		case 2:
			line[i] = ('0' + rand() % 9);
			break;
		}
	line[N] = 0;	
	puts("до сортировки:");
	puts(line);
	puts("\n");
	puts("после сортировки");
	puts(process(line));
	return 0;
}