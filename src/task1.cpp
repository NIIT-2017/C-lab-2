#include <stdio.h>
//L = gt^2/2, где g = 9.81 m/c
float height(int currTime,int startHeight)
{
    float l;
    l = (startHeight-((9.81*(currTime*currTime))/2.0));

    return l;

}