#include<stdio.h>
#include <time.h>

void sleep(int ms)
{
	int c = clock() + ms;
	while (clock() < c);
}

float height(int currTime, int startHeight)
{
	double g=9.81;
	for (int currTime = 0; startHeight > (g * currTime*currTime / 2); currTime++)
		{
			printf("t=%02d c   h=%.1f m\n", currTime, (startHeight - g * currTime*currTime / 2));
			sleep(1000);
		}
	return 0;
}