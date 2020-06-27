#include "task5.h"
#include <stdio.h>

int main()
{
    char line[9];
    printf("It's new password: \n");
    for (int w = 10; w; w--)
        printf("%s\n", password(line));
    return 0;
}