#include "task4.h"
#include<string.h>


char *process(char *line)
{

   int i,j;
   char buf;
   int str = strlen(line);

   for(i = 0;line[i]!='\0';i++)
   {
      for(j = str -1; j>i;j--)
	if(line[i] >= '0' && line[i] <='9'
	   &&line[j] >='a' && line[j] <='z')
	{
	    buf=line[i];
	    line[i]=line[j];
	    line[j]=buf;
	}
   }
   return line;
}
