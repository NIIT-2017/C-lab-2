#include <stdio.h>
#include <iostream>

char* layout(char buf[], int line, int count)
{
	
	int j;
	int i;
		
		for (i = 0; i < count - line; i++)
			buf[i] = ' ';
		for (j = 0; j < line * 2-1; j++)
			buf[i++] = '*';
			buf[i] = '\0';
		
	return buf;
	
}
