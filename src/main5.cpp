#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

int main()
{
    srand(time(NULL));
    char line[7]={0};
    for (int i = 0; i < 10;i++){
        puts(password(line));
    }
    return 0;
}
