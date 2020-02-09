#include"task6.h"

char* clear(char* line)
{
    int i = 0;
    int j = strlen(line) - 1;

    while (line[j] == ' ') 
    {
        line[j] = '\0';
        j--;
    }

    while (line[i] == ' ') 
        for (int a = 0; a <= j; a++)
            line[a] = line[a + 1];

    while (line[i] != '\0')
        if (line[i] == ' ' && line[i + 1] == ' ')
            for (int a = i; a <= j; a++)
                line[a] = line[a + 1];
        else i++;

    return line;
}