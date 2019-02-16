#include "task5.h"
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main()
{
	char line[8] = { 0 };
	int i = 0;
	srand(time(0));

	for (i = 0; i < 8; i++)
		printf("%s\n", password(line));
	return 0;
}
