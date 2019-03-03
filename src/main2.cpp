#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task2.h"
#include <stdlib.h>

int main()
{
	const char * dialoge[] = 
	{ "What number between 0 and 100 am I thinking of? ",
		"try the less one!",
		"try the more one!",
		"You've got it" };

	int secret, value;
	srand(time(NULL));
	secret = rand() % 101;
	printf("%s\n", dialoge[0]);
	scanf("%d", &value);

	while (turn(value, secret) != 0)
	{
		if (turn(value, secret) > 0)
		{
			printf("%s\n", dialoge[1]);
			scanf("%d", &value);
		}
		else
		{
			printf("%s\n", dialoge[2]);
			scanf("%d", &value);
		}
	
	} 

	printf("%s\n", dialoge [3]);

	return 0;
}