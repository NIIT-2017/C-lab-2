#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <random>
#include"task2.h"
#include <time.h>

int main()

{
	srand(time(NULL));
	int result;
	int secret = rand() % 100 + 1;	
	int value;
	do {
		printf("enter your number \n");
		scanf("%d", &value);
		result=turn(value, secret);
		if (result > 0)
			printf("less\n");
		else if(result<0)
			printf("more\n");
		else 
			printf("right \n");
	} while (result != 0);
	 


}