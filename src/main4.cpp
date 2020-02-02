#include "task4.h"
#include<stdio.h>
#include<string.h>


int main()
{

    char buf[512]={0};
    printf("Enter the line!\n");
    fgets(buf,512,stdin);
    if(buf[strlen(buf)-1]=='\0')
       buf[strlen(buf)-1]=0;
    process (buf);
    printf(buf);
    return 0 ;
}
