#include <stdio.h>

int main()
{
    char line[50]={0};
    printf("Введите строку символов: \n");
    fgets(line,50,stdin);
    char* process(char* line);
    puts(process(line));

    return 0;
}
