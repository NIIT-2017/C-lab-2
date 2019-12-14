#include "task3.h"
int main3()
{
    char buf[70];
    for (int i = 1; i < 14; i++)
    {
        printf("%s\n",layout(buf,i,25));
    }
    return 0;
}