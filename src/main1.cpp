#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include"task1.h"

int main()
{
	int t=0;
	float H=0;
	int h;
	printf("enter heigth \n");
	scanf("%d", &h);
	H = h;
	while ( H> 0 )
	{
		printf("t=%d c h=%.2f m \n", t, H);
		H = height(++t, h);
	}
	printf("BOOM");
	return 0;
}
