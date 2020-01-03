#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float h = 0;
	int time = 0;
	do
	{
		printf("Enter the value of the initial height:\n");
		scanf("%f", &h);
	} while (h < 0);
	while (height(time, h) >= 0)
	{
		//float hTmp = height(time, h);
		printf("t = %d\tc h = %4.1f\tm\n", time, height(time, h));
		time++;
		//h = hTmp;
	}
	printf("BABAH!!!\n");
	return 0;
}