#include <stdio.h>
#include "task3.h"



int main()
{

    char buf[256];
    int lines = 1,count = 0;
    printf("Enter number of lines!\n");
    scanf("%d",&count);
    layout(buf,lines,count);
    return 0;
}
