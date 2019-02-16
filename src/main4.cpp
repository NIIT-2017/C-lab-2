#include "task4.h"
#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#define SIZE 20


int main()
{
	char buf[SIZE];
	int i = 0;
	for (; i < SIZE - 1; i++)
	{
		switch (rand() % 3)
		{
		case 0:
			buf[i] = rand() % 10 + 48;		//numbers
			break;
		case 1:
			buf[i] = rand() % 26 + 65;		//A - Z
			break;
		case 2:
			buf[i] = rand() % 26 + 97;		//a - z
			break;
		}
	}
	buf[i] = '\0';
	printf("String: %s\nResult: ", buf);
	printf(process(buf));
	putchar('\n');
	return 0;
}