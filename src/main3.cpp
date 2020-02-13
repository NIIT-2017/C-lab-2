#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int main()
{
	int line=0;
	int count=0;
	char buf[100]={0};
	scanf("%d", &count);
	
	for (int line=1; line<=count; line++)
		printf("%s\n", layout(buf, line, count));



	return 0;
}