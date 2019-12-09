#include "task6.h"
#include<string.h>

char *clear(char *line)
{

    int size = strlen(line);


    while(line[0]==' ')
    {
       for(int i = 0; i < size; i++)
	  line[i]=line[i+1];
    }
    
       for(int j =0; j <size;j++)
       {
	   while(line[j]==' '&&line[j+1]==' ')
	     for(int k = j; k< size;k++)
		line[k]=line[k+1];
       }
       
      while (line[size - 1] == ' ')
	{
		if (line[size - 1] == ' ')
			line[size - 1] = '\0';
	}


       return line;
}
