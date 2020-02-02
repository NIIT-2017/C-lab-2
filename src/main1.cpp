#include "task1.h"
#include <stdio.h>
#include <time.h>
int main()
{
	
	int a = 0;
	printf("Please enter the height at which the bomb falls in meters\n");
	scanf("%d", &a);
	for (int t=0;;t++)
	{
		float result = height(t, a);
		if (result <= 0)
			break;
		printf("t = %02d c h = %0.1f m\n", t, result);
		clock_t begin = clock();
		while (clock() < begin + CLOCKS_PER_SEC);
	}
	printf("BABAH!!!");
	return 0;
}