#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"


int main()
{
	
	char line[8] = { 0 };
	srand(time(0)); //here, because if we put it to task5.cpp the passwords are similar
	for (int k = 0; k < 10; k++)//to generate 10 passwords
	{
		for (int i = 0; i < 8; i++)// to print one password
		{
			printf("%c", password(line)[i]);
		}
		printf("\n");
	}
	return 0;
}