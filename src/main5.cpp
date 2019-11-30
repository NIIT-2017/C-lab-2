#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

int main()
{
    char line[9] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", password(line));
        clock_t begin = clock();
        while (clock() < begin + CLOCKS_PER_SEC);
    }
        return 0;
}