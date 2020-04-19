#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include "task3.h"
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int line = 1;
	int count = 0; 
	printf("Ведите количество строк \n");
	scanf("%d", &count);
	for (line = 1; line <= count; line++)
	{
		char buf[100] = {0};		
		puts(layout(buf, line, count));
		puts("\n");
	}
	return 0;
}
	