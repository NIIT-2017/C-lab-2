#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include "task5.h"

int main(void)
{
	char line[10];
	for (int i = 0; i < 10; i++)
		printf("%s\n", password(line));
		
	return 0;
}