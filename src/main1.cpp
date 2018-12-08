#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main()
{
	int startHeight = 0;
	int currTime = 0;
	
	printf("Enter height: \n");
	scanf("%d", &startHeight);
	height(currTime, startHeight);

	getchar();
	getchar();
	getchar();
	return 0;
}