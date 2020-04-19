#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<locale.h>
#include "task6.h"

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char line[255];
	printf("Ведите  строку \n");
	fgets(line, 255, stdin);
	
	int i = 0, j = 0, l = 0;
	int len = strlen(line);
	if (line[len - 1] == '\n')
		line[len - 1] = '\0';

	while (line[0] == ' ')
	{
		for ( j = 0; j <= strlen(line) - 1; j++)
		{
			line[j] = line[j + 1];
		}
	}
	 l = strlen(line) - 1;
	while (line[l] == ' ')
	{
		line[l] = '\0';
		l--;
	}
	 i = 0;	
	
	fputs(clear(line), stdout);
	return 0;
}