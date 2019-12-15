#include <stdio.h>

char * layout(char buf[],int line,int count)
{
    int j;
    for (j=0;j < (count + line -1);j++){
        if (j <= (count - (line+1)))
            buf[j] = ' ';
        else buf[j] = '*';
    }
    buf[j] = '\0';
    return buf;
}
