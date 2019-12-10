#include <stdio.h>
#include "task6.h"
#include <string.h>

int main()
{
    char line[50];
    printf("Введите строку (с пробелами) \n");
    fgets(line,50,stdin);
    if (line[strlen(line)-1] == '\n')
    line[strlen(line)-1]=0;

    puts(clear(line));

    return 0;
}
