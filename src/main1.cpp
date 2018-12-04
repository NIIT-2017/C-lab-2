#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include "task1.h"

int main(void)
{
	int startHeight;
	int t;
	printf("Input height: ");
	scanf("%d", &startHeight);
	t = 0;
	while (height(t, startHeight) > 0)
	{
		printf("t=%02d c h=%2.1f m\n", t, height(t, startHeight));
		Sleep(1000);
		t++;
	}
	printf("BABAH!!!");

	return 0;
}