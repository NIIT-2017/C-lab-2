#include <stdio.h>
#include "task4.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define N 10

int main()
{
    srand(time(NULL));
    char line[N + 1];
    int k = 0;
    while (k < N)
    {
        int r = rand() % 3;

        if (r == 0)
            line[k] = 'a' + rand() % ('z' - 'a' + 1);
        else if (r == 1)
            line[k] = 'A' + rand() % ('Z' - 'A' + 1);
        else if (r == 2)
            line[k] = '0' + rand() % ('9' - '0' + 1);
        k++;
    }
    line[N] = '\0';
    printf("BEFORE:  %s\n", line);
    printf("AFTER:   %s\n", process(line));

    return 0;
}