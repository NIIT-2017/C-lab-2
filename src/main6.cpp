#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale>
#include "task6.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char line[255];		
	printf("Ведите  строку \n");
	fgets(line, 255, stdin);			
	fputs(clear(line),stdout);
	return 0;
}