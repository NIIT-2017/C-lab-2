#include <stdio.h>
#include "task6.h"

char* clear(char* line)
{
    int i = 0;
    int j = 0;
    int endOfLine = 0;
    for (int i = 255; i > 0; i--)
    {
        if (line[i] == '\0')
            endOfLine = i;
    }
    for (int i = endOfLine; i > 0; i--)
    {
        if (line[i - 1] == ' ')
            line[i - 1] = '\0';
        else
            break;
    }
    while (line[i])
    {
        if (line[0] == ' ')
        {
            for (int i = 0; line[i]; i++)
                line[i] = line[i + 1];
            i++;
        }
        else
            break;
    }
    while (line[j])
    {
        if (line[j] == ' ' && line[j - 1] == ' ')
        {
            for (int i = j; line[i]; i++)
                line[i] = line[i + 1];
        }
        else
            j++;
        }

    return line;
}
