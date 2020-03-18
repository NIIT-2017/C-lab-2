#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include"task1.h"

int main()
{
	int t=0;
	float l;
	int h;
	printf("enter higth \n");
	scanf("%d", &h);
	l = h;
	while ( l > 0 )
	{
		
		printf("t=%d c h=%.1f m \n", t, l);
		l = height(++t, h);
		
	}
	printf("BOOM");
	return 0;
}
