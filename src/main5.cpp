#include <stdio.h>
#include "task5.h"
int main()
{
    char buf[50];
    buf[49] = '\0';
    printf(password(buf));
    return 0;
}