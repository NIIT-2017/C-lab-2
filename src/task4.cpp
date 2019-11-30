#include <string.h>
#include "task4.h"1

char* process(char* line)
{
    int i = 0;
    int j = strlen(line) - 1;
    while (i != j)
    {
        if (line[i] >= 'A')
        {
            i++;
            continue;
        }
        if (line[j] <= '9')
        {
            j--;
            continue;
        }
        char k = line[i];
        line[i] = line[j];
        line[j] = k;
    }
    return line;
}
