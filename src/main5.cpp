#include "task5.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	time_t now;
	time(&now);
	srand(now);
	char str[512];
	for (int a = 0; a < 10; a++)
	{
		password(str);
		putchar('\n');
	}
	return 0;
}