#define _CRT_SECURE_NO_WARNINGS
#define N 128
#include <stdio.h>
#include "task3.h"

int main()
{
    int count=0;
    int line=0;
    char buf[N] = { '0' };
     
    printf("Input hight: ");
    scanf("%d", &count);  
    puts("");
    for (line = 1; line <= count; line++)
    {
        puts(layout(buf, line, count));
    }

    return 0;
}