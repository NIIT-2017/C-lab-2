#include <stdio.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

void delay (int ms)
{
	int c = clock() + ms;
	while (clock() < c);
}

int main()
{
    const float g = 9.81;
	float L = 0;
	int currTime = 1;
	float startHeight = 0;
	printf("enter a height!\n");
	scanf("%f", &startHeight);
	float h;

	while (1)

	{
		L = (g*(currTime ^ 2)/2);
		h = startHeight - L;
		printf("\nt=%d C  h=%.1f M  ", currTime, h);

		printf("\n %f", L);
		delay(1000);
		currTime++;
		
		if (h <= 0)
			break;
	}
			printf("\nBOOM!!!\n");

	
}