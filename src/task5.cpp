#include "task5.h"

char* password(char* line)
{
    for (int i = 0; i < 8; i++)
    {
        char a = rand() % 3;
        if (a == 0)
            line[i] = 'A' + rand() % ('Z' - 'A' + 1);
        if (a == 1)
            line[i] = 'a' + rand() % ('z' - 'a' + 1);
        if (a == 2)
            line[i] = '0' + rand() % ('9' - '0' + 1);
    }
    line[8] = '\0';
    return line;
}