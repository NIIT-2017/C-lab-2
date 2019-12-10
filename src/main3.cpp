#include <stdio.h>
#include "task3.h"

int main()
{
    int count=0;
    int line =1;
    char buf[256]={0};
    printf("Введите количетсво строк стреугольника (целое число)\n");
    scanf("%d",&count);

    char * layout(char buf[],int line,int count);
    for (;line <= count;line++){
        puts(layout(buf,line,count));
    }

    return 0;
}





