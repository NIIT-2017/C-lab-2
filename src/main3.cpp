#include "task3.h"
#include <stdio.h>

int main()
{
    int count = 0;
    char buf[256] = {0};

    printf("What is the pyramid's size?\n");
    scanf("%i", &count);

    for (int line = 1; line <= count; line++)
    {
        printf("%s\n", layout(buf, line, count));
    }

    return 0;
}