#include "task4.h"
char* process(char* line)
{
    int f=0,b=strlen(line)-1;
    while (f != b)
    {
        if (!(line[b] < '0' || line[b]>'9'))
            b--;
        if (!(line[f] >= '0' && line[f] <= '9'))
            f++;
        if ((line[b] < '0' || line[b]>'9')&&(line[f]>='0'&&line[f]<='9'))
        {
            char tmp = line[f];
            line[f] = line[b];
            line[b] = tmp;
        }
    }
    return line;
}