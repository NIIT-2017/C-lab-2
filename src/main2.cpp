#include "task2.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	

	int secret;
	int res=2;
	int value=0;
	srand((unsigned)time(0));
	secret=rand()%100+1;
	//printf("%d\n", secret);
	
	while (res!=0)
	{
		printf("vvedite chislo ot 1 do 100:\n");
		scanf("%d", &value);
		res=turn(value, secret);
		if (res==-1)
			printf("vashe chislo menshe zagadannogo\n");
		else if (res==1)
			printf("vashe chislo bolshe zagadannogo\n");
		else printf("vi ugadali chislo!\n"); 
	}


	return 0;
}