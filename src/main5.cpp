#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	srand(time(0));
	char line[256]={0};
	
	for (int i=0; i<10; i++)
		printf("%s\n", password(line));


	return 0;
}