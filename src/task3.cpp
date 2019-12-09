#include <stdio.h>

char * layout(char buf[],int line,int count)
{

    int i,j;
    for (i=1;i<=count;i++)
    {
        for (j=1;j<=count+i;j++)
        {
            if (j<=count-i+1)
            {
                putchar(' ');
            } else
            {
                putchar('*');
            }
        }
        putchar('\n');
    }

    return buf;
}