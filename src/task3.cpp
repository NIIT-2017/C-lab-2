#include <stdio.h>
#include "task3.h"

char* layout(char buf[], int line, int count)
{
    buf[count + line + 1] = '\0';
    
    for (int i=0;i<count+line;i++)
    {
        if (i >= count - line+1 && i <= count + line-1)
            buf[i] = '*';
        else
            buf[i] = ' ';
    }
    
    return buf;
}