#include "task4.h"

int main()
{
    char line[512] = { 0 };
    printf("Enter the line!\n");
    fgets(line, 512, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    printf("%s\n", process(line));
    return 0;
}