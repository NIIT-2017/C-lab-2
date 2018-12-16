#include<stdio.h>
#include "task1.h"

int main()
{
	int currTime, startHeight;
	currTime = 0;
	printf("Enter height in metres ");
	scanf("%d", &startHeight);
	height(currTime, startHeight);
	printf("BABAH!!!\n");
	return 0;
}