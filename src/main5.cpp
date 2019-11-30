#include "task5.h"
#include <stdio.h>

int main()
{
    char line[9] = { 0 };

    for (int c = 0; c < 10; c++)
    {
        printf("%s\n", password(line));
    }

    return 0;
}