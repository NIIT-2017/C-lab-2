#include "task5.h"
#include <random>
#define N 8
char* password(char* line)
{
	for (int i = 0; i < N; i++)

		switch (rand() % 3)
		{
		case 0:
			line[i] = ('A' + rand() % 25);
			break;
		case 1:
			line[i] = ('a' + rand() % 25);
			break;
		case 2:
			line[i] = ('0' + rand() % 9);
			break;
		}
	line[N] = 0;
	return line;
}
