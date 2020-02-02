#include "task6.h"
char* clear(char* line)
{
    int spaces = 0, start = 0,fistWord=1;
    int len = strlen(line);
    for (int i = 0; i <len ; i++)
    {
        if (line[i] != ' ')
        {
            if (!start&&!fistWord)
                spaces--;
            start = true;
            fistWord = 0;
        }
        else
        {
            start = false;
            spaces++;
        }
        if (start)
        {
            line[i -spaces] = line[i];
            if(spaces!=0)
                line[i]=' ';
        }
    }
    line[len - spaces] = '\0';
    return line;
}