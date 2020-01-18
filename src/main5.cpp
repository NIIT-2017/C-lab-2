#include <stdio.h>
#include <time.h>
#include "task5.h"
int main()
{
    srand(time(NULL));
    char buf[50];
    buf[8] = '\0';
    for(int i=0;i<10;i++)
        printf("%s\n",password(buf));
    return 0;
}