#include<stdio.h>
#include"Task3.h"
#define N 256

int main()
{

	char buf[N];
	int line, count;
	printf("Enter\n");

	scanf("%d", &count);
	
	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);
	}
	return 0;

}