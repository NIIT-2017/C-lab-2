#include <stdio.h>
#include "task6.h"
#include <string.h>
#define N 128
int main()
{
    char line[N] = { 0 };
    printf("Input line\n");
    fgets(line,N,stdin);
    if (line[strlen(line) - 1] = '\n')
        line[strlen(line) - 1] = '\0';
    
    printf("%s", clear(line));

    return 0;
}