#include"task5.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	srand(time(NULL));  //it's here, if it's in task5.cpp our passwords are the same.
	char line[SIZE+1] = { 0 };  // +1 for '\0'

	for (int i = 0; i < QUANTITY_of_PASSWORDS; i++)
	{
		puts(password(line));
	}

	return 0;
}