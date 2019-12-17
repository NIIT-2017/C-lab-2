#include"task5.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

char*password(char*line)
{
	int number = 0;     //It's for a equiprobable random.
	
	for (int i = 0; i < SIZE; i++)
	{
		number = rand() % 3;
		if (number==0)
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';    // It's a random of symbols generation.
		else if (number == 1)
			line[i] = rand() % ('9' - '0' + 1) + '0';     // It's a random of numbers generation.
		else  
			line[i] = rand() % ('z' - 'a' + 1) + 'a';    // It's a random of mini symbols generation.
	}
		line[SIZE] = '\0'; 
	return line;
}