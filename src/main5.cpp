#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"
#include <string.h>

#define N 8

int main()
{
    srand(time(NULL));
    char line[N + 1];
    for (int i = 0; i < 10; i++)
        printf("%s\n", password(line));
    return 0;
}