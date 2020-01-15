#include "task4.h"

int main()
{
    char line[N] = { 0 };
    printf("Enter the line!\n");
    fgets(line, N, stdin);
    if (line[strlen(line) - 1] == '\n')
     line[strlen(line) - 1] = '\0';
    process(line);
    printf(line);
    return 0;
}