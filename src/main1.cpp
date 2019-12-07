#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"



int main() {
    int currTime = 0;
    int startHeight = 0;
    float newH = 0;

    printf("Enter your start height.\n");
    scanf("%d", &startHeight);
    newH = startHeight;
    while (newH > 0) {
        printf("t= %02d s h= %06.1f m \n", currTime, newH);
        currTime++;
        newH = height(currTime, startHeight);
        
    }
    printf("BABAH!!!");

    return 0;
}