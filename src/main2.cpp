#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int value = 0;
	int secret = 0;
	int attempts = 1;
	time_t now;
	time(&now);
	srand(now);
	secret = rand() % 100;
	puts("Vvedite chislo ot 0 do 100: ");
	scanf("%d", &value);
	for (int result = 0; (result = turn(value, secret)) != 0; attempts++)
	{
		if (result == 1)
		{
			puts("Vvedite men'shee chislo: ");
			scanf("%d", &value);
		}
		else
		{
			puts("Vvedite bol'shee chislo: ");
			scanf("%d", &value);
		}
	}
	printf("Ugadal! s %d popytki\n ", attempts);
		return 0;
}
