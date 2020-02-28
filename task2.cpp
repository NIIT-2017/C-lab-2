#include <stdio.h>
#include <task2.h>

int turn(int value, int secret)
{
	int value = 0;

	time_t now;
	time(&now);
	srand(now);
	int secret = rand() % 100;
}