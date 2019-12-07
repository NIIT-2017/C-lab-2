#include <stdio.h>

float height(int currTime, int startHeight) {
    float h = 0;
    float g = 9.81;
    float L = 0;
    L = g * (currTime * currTime) / 2;
    h = startHeight - L;
    return h;
}
