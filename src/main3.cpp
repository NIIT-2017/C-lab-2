#include <stdio.h>
#include "task3.h"

int main()
{
    int count=0;
    int line =1;
    char buf[256]={0};
    printf("Введите количетсво строк стреугольника (целое число)\n");
    scanf("%d",&count);


    for (;line <= count;line++){
        printf("%s",layout(buf,line,count));
        printf("\n");
    }
    return 0;
}





