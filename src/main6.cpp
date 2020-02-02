#include <stdio.h>
#include "task6.h"
int main()
{
    char buf[100];
    fgets(buf,100,stdin);
    printf(clear(buf));
    return 0;
}