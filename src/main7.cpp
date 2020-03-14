#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<locale>
#define N '0'

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char line[255] = { 0 };
	int sym[255] = { 0 };
	int len = 0;
	int i = 0;
	
	printf("Ведите  строку \n");
	fgets(line, 255, stdin);
	len = strlen(line);
	for (i = 0; i < len-1; i++)
	{
		sym[line[i]]++;
	}   
	for (i = 0; i < 255; i++)
	{
		if (sym[i] != 0)
			printf("%c - %d\n", i, sym[i]);
	}
	return 0;
}     

