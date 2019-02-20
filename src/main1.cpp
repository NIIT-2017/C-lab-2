#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("Vvedite vysoty sbrosa bomby: ");
	int startHeight = 0;
	int currTime = 0;	
	scanf("%d", &startHeight);
	for (float result = startHeight; (result = height(currTime, startHeight)) > 0; currTime++)
			printf("t= %d c h= %0.1f m\n", currTime, result);	
	printf("BAH!!!\n");
	return 0;
}