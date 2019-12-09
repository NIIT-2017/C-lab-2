#include "task3.h"
#include<stdio.h>

char *layout(char buf[], int lines,int count)
{
   buf[0]='*',buf[1]=32;
   int i , j;
   int space = count-1;

   for(i = 0; i < count;space--,lines++,i++)
   {
       for(int k = 0; k < space;k++)
	       printf("%c",buf[1]);
	for(j= 0 ; j < lines; j++)
	printf("%c",buf[0]);
	printf("\n");
	lines++;
    }
    return buf;
}

