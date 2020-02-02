#include <stdio.h>

char * layout(char buf[], int line, int count)
{
    int space = count - line;
    int i = 0;

    for (; i < space; i++)
        buf[i] = ' ';

    for (int j = 1; j < line * 2; j++)
        buf[i++] = '*';

    buf[i] = '\0';

    return buf;
}