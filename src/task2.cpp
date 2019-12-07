#include <stdio.h>
#include "task2.h"

int turn(int value, int secret)
{
    int result = value-secret;
    if (result > 0)
        return 1;
    else if (result <0)
            return -1;
         else 
            return 0;
}
