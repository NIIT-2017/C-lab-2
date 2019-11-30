#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
    char buf[256] = { 0 };
    int count = 0;
    while (1)
    {
        printf("Enter the count of triangle's lines ");
        int countresult = scanf("%d", &count);
        if (countresult<1)
        {
            printf("You're wrong, try again\n");
            clean_stdin();
        }
        else
            break;
    }
    int line = 1;
    while (line <= count)
    {
        printf (layout(buf, line, count));
        printf("\n");
        line++;
    }
    return 0;
}