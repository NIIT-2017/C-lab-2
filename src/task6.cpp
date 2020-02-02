#include <string.h>

char * clear(char * line)
{
    // remove spaces at the beginning of the string

    while (line[0] == ' ')
    {
        for (int i = 0; i < strlen(line); i++)
            line[i] = line[i + 1];
    }

    // remove spaces at the end of the string

    int j = strlen(line) - 1;
    while (line[j] == ' ')
    {
        line[j] = '\0';
        j--;
    }

    // remove spaces in the middle of the string

    int k = 0;
    while (line[k])
    {
        if (line[k] == ' ' && line[k + 1] == ' ')
        {
            for (int i = k; i < strlen(line); i++)
                line[i] = line[i + 1];
        }
        else
            k++;
    }
    return line;
}