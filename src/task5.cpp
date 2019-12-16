#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define N 8

char * password(char * line)
{
    for (int i = 0; i < N; i++)
    {
        int r = rand() % 3;

        if (r == 0)
            line[i] = 'A' + rand() % ('Z' - 'A' + 1);
        else if (r == 1)
            line[i] = 'a' + rand() % ('z' - 'a' + 1);
        else if (r == 2)
            line[i] = '0' + rand() % ('9' - '0' + 1);
    }
    line[N] = '\0';
    return line;
}
