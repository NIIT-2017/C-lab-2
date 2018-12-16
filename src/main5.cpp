#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"


int main()
{
	
	char line[9] = { 0 };
	srand(time(0)); //here, because if we put it to task5.cpp the passwords are similar
	for (int k = 0; k < 10; k++)//to generate 10 passwords
	{
			printf("%s\n", password(line));
	}

	return 0;
}