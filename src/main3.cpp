#define _CRT_SECURE_NO_WARNINGS
#include"task3.h"
#include <stdio.h>
#include <iostream>


#define SIZE 50

int main()
{
	int line = 0;
	int count = 0;
	int j = 0;
	char buf[SIZE] = { ' ' };
	

	printf("Enter the number of triangle rows =  ");

	scanf("%d", &count);
	
	
	for (line = 1; line <= count; line++)
	{
		printf("%s\n", layout(buf, line, count));			
	}
	return 0;
}