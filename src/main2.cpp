#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h" 

int main() {
    int value = 0;
    int secret = 0;
    int result = 0;
    time_t now;
    time(&now);
    srand(now);
    secret = rand() % 100;
    do {
        printf("Enter your number.\n");
        scanf("%d", &value);
        result = turn(value, secret);
        if (result == 1) {
            printf("Your number is more than thought.\n");
        }
        else if (result == -1) {
            printf("Your number is less than thought.\n");
        }
    } while (result != 0);
        printf("You guess!");
    
  
    }

   