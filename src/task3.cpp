#include "task3.h"
#include<stdio.h>

char *layout(char buf[], int lines,int count)
{
  
   int i;
   int star=(lines * 2) - 1;
   int space = count-1;
   int totalcount = space + star;

     for ( i = 0; i < totalcount; i++)
	{
	     if (i < space)

	       buf[i] = ' ';
	      else
		buf[i] = '*';
	}
  
	buf[i] = '\0';
    return buf;
}

