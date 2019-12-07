#include <stdio.h>
#include "task3.h"

int main() {
    char buf[256];
    int line = 0;
    int count = 0;
    printf("Enter your row count.\n");
    scanf("%d", &count);
    for (line = 1; line <= count; line++) {
        printf(layout(buf, line, count));
        printf("\n");
    }    
}