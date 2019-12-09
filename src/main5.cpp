#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    char line[7];
    char * password(char * line);
    for (int i = 0; i < 10;i++){
        puts(password(line));
    }
    return 0;
}
