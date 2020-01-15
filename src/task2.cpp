#include"task2.h"

int turn(int value, int secret)
{
    if (value > secret) //need less
        return 1;
    else if (value < secret)   //need more
        return -1;
    else
        return 0;   //ok
}