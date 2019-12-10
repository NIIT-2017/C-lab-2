#include "task3.h"
#include<stdio.h>

char *layout(char buf[], int lines,int count)
{
  
   int i , j;
   int space = count-1;

   for(i = 0; i < count;space--,lines++,i++)
   {
	   buf[i] = '*', buf[i+1] = ' ';
       for(int k = 0; k < space;k++)
	       printf("%c",buf[i+1]);
	for(j= 0 ; j < lines; j++)
	printf("%c",buf[i]);
	printf("\n");
	lines++;
    }
	buf[i] = '\0';
    return buf;
}

