#include <stdio.h>
#define g 9.81
float height(int currTime, int startHeight)
{
    return (startHeight - ((g * currTime * currTime) / 2));
}