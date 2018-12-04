#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h.>
#include <time.h>
#include "task2.h"

int main(void)
{
	int secret,value=-1;
	srand(time(NULL));
	secret = 1 + rand() % 100;
	while (turn(value,secret)!=0)
	{
		printf("Your turn: ");
		scanf("%d", &value);
		if (turn(value, secret) > 0)
			printf("too big\n");
		else if (turn(value, secret) < 0)
			printf("too small\n");
	}
	printf("Bingo !");
	return 0;	
}