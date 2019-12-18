#include <stdio.h>
#include "task3.h"

int main()
{
    char buf[256] = {' '};
    int count = 0;

    printf("Enter number of lines:\n");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        printf("%s\n", layout(buf, i, count));
    }
    
    return 0;
}