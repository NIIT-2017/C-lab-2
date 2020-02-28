#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "task5.h"



char* password(char* line)
{
    for (int i = 0; i < 8; i++)
    {
        int pass = rand() % 3;
        if (pass == 0)
            {
                line[i] = rand() % ('z' - 'a' + 1) + 'a';
            }
        else if (pass == 1)
            {
                line[i] = rand() % ('Z' - 'A' + 1) + 'A';
            }
        else
            {
                line[i] = rand() % ('0' - '9' + 1) + '0';
            }
    }
    line[8] = '\0';
    return line;
}
