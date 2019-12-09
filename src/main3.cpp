#include <stdio.h>
#include "task3.h"



int main()
{
    int count=0;
    int line;
    char buf[20];
    printf("Введите количетсво строк стреугольника (целое число)\n");
    scanf("%d",&count);

    char * layout(char buf[],int line,int count);

    puts(layout(buf,line,count));


    return 0;
}





