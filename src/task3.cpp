#include"task3.h"
char* layout(char buf[], int line, int count)
{
	int i = 0;
	int j = 0;
	
	for ( i = 0; i < (count - line); i++)
	{
		buf[i] = ' ';
	}
	
	for ( j = count - line; j < (count + line - 1); j++)
	{
		buf[j] = '*';
	}
	buf[j] = '\0';
	return buf;
}