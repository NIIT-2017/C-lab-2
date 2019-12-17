#define _CRT_SECURE_NO_WARNINGS
#include"task3.h"
#include<stdio.h>

char * layout(char buf[], int line, int count)
{
	int k = 0; //It's for buf filling.
	for (int i = 1; i <= (count - line); i++, k++)//It's for ' '.
		buf[k]=' ';
	for (int j = 1; j <= (line * 2 - 1); j++, k++)//It's for '*'.
		buf[k] = '*';
	
	return buf;
}