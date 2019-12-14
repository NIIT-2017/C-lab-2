#include "task6.h"
char* clear(char* line)
{
    int spaces = 0;
    bool start = false;
    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] != ' ' && start == false)
        {
            start = true;
        }
        if (!start && line[i] == ' ')
        {
            spaces++;
            continue;
        }
        else
        {
            if (start && line[i - 1] == ' ' && line[i] == ' ' && line[i+1]==' ')
            {
                spaces++;
                continue;
            }
            char tmp = line[i];
            line[i] = line[i - spaces];
            line[i - spaces] = tmp;
        }
    }
    return line;
}