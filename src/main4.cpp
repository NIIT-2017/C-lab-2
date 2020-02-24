#include "task4.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 31

char random(int r)
{
    switch (r)
    {
    case 0:
        return rand() % ('z' - 'a' + 1) + 'a';
    case 1:
        return rand() % ('9' - '0' + 1) + '0';
    }
}

int main()
{
    puts("Before");
    time_t now;
    time(&now);
    srand(now);

    char line[N] = { 0 };

    for (int i = 0; i < N - 1; i++)
    {
        int r = rand() % 2;
        line[i] = random(r);
    }

    printf("%s\n", line);
    puts("After");
    printf("%s\n", process(line));

    return 0;
}