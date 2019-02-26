#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>



int main()
{
	int startH = 0;
	int t = 0;
	printf("Enter the start height:", startH);
	scanf("%d", &startH);
	while (height(t, startH) > 0)
	{
		printf("t=%dc   h=%.1fm\n", t, height(t, startH));
		t = t + 1;
		Sleep(1000);
	}
	printf("Babah!!!\n");

	return 0;
}