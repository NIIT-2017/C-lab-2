#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>
#include <Windows.h>

int main()
	{
		int h = 0;
		puts("Input height");
		scanf("%d", &h);
		printf("Your height is %d\n", h);
		int time = 0;
		while(1)
		{
			float l = height(time, h);
			h = h - l;
			if (h <= 0) {
				puts("BABAH!");
				return 0;
			}
			printf("t=%d c h=%.2f\n", time, (float)h);
			time++;
			Sleep(1000);
		}
		return 0;
	}