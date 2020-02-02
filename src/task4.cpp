#include "task4.h"
int isNumber(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    else
        return 0;
}
char* process(char* line)
{
        int f = 0, b = strlen(line) - 1;
        while (f < b)
        {
            if (isNumber(line[b]))
                b--;
            if (!isNumber(line[f]))
                f++;
            if ((!isNumber(line[b])) && (isNumber(line[f]))&&f<b)
            {
                char tmp = line[f];
                line[f] = line[b];
                line[b] = tmp;
                f++;
                b--;
            }
        }
    return line;
}