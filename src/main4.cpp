#include "task4.h"
#include <stdio.h>

int main()
{
    char line[256];

    printf("Write the string\n");
    scanf("%255s", line);
    
    printf("%s\n", process(line));

    return 0;
}