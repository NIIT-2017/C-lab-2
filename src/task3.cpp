#include <stdio.h>
#include <iostream>

char* layout(char buf[], int line, int count)
{
	
	int j;
	int i;
		
		for (i = 0; i <= count - line; i++) 
			buf[i] = ' ';
		for (j = 1; j < line * 2; j++) 
			buf[i++] = '*';
			buf[i] = '\n';

	return buf;
	
}
