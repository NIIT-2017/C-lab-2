#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main()
{
	//char line[SIZE]= "   xwwwu  qioque    qrehq   ";
	
	char line[256];
	printf("vvedite stroku:\n");
	//scanf("%s", &line);

	fgets(line, 255, stdin);


	printf("%s\n", line);
	//clear(line);
	

	printf("%s\n", clear(line));


	return 0;
}