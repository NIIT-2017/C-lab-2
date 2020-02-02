#include <stdio.h>
#include "task4.h"

int main()
{
    char line[50]={0};
    printf("Введите строку символов: \n");
    fgets(line,50,stdin);
    puts(process(line));

    return 0;
}
