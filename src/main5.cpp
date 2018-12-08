#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	char line[62];
	int i = 0;

	for (i = 0; i < 10; i++)
		line[i] = '0'+i;
	for (i = 0; i < 26; i++)
		line[i+10] = 'a'+i;
	for (i = 0; i < 26; i++)
		line[i + 36] = 'A'+i;

	password(line);

	getchar();
	return 0;
}