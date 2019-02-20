#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * password(char * line)
{
	char buf[256], buf1[256], buf2[256];
	int i = 0, j = 0, k = 0;
	for (; i <= 'z' - 'a', j <= 'Z' - 'A'; i++, j++)
	{
		buf[i] = 'a' + i;
		buf1[j] = 'A' + j;
	}
	buf[i] = '\0';
	buf1[j] = '\0';
	while (k <= '9' - '0')
	{
		buf2[k] = '0' + k;
		k++;
	}
	buf2[k] = '\0';
	strcat(buf, buf1);
	strcat(buf, buf2);
	for (int m = 0; m < 8; m++)
	{			
		int n = (rand() % 62);		
		line[m] = buf[n];
		line[8] = '\0';
	}
	return line;
	}