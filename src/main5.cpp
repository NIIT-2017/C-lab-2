#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include "task5.h"

int main() {
    char line[256];
    time_t now;
    time(&now);
    srand(now);
    printf("Let`s generate a password!\n");
    for (int i = 0; i < 8; i++) {
    printf(password(line));
    printf("\n");
    }
   

}