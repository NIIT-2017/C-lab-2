#include <stdio.h>
#include <stdlib.h>

int turn(int value, int secret) {
    int result = 0;
    if (value > secret) {
        result = 1;
    }
    else if (value < secret) {
        result = -1;
    }
    else result = 0;
    return result;

}