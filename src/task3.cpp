#include"task3.h"
char* layout(char buf[], int line, int count)
{
	for (int i = 0; i < count - line; i++)
	{
		buf[i] = ' ';
	}
	
	for (int j = count - line; j < count + line - 1; j++)
	{
		buf[j] = '*';
	}
	return buf;
}