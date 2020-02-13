#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "windows.h"

int main()
{
	int startHeight=0;
	int currTime=0;
	float h=1;
	printf("vvedite vysotu, s kotoroi padaet bomba\n");
	scanf("%d", &startHeight);
	do
	{
		printf("t=%d c   h=%f m\n", currTime, height(currTime, startHeight));
		Sleep(1000);
		currTime++;
	}
	while ((height(currTime, startHeight))<=startHeight&&(height(currTime, startHeight))>0);
	printf("BABAH!!!\n");
	return 0;
}