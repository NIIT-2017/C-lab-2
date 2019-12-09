#include <stdio.h>

int main()
{
    char line[50];
    printf("Введите строку (с пробелами) \n");
    fgets(line,50,stdin);
    char * clear(char * line);
    puts(clear(line));

    return 0;
}
