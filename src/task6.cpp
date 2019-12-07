#include <string.h>
char* clear(char* line)
{
    for (int i = strlen(line)-1;line[i]==' '; i--)
    {
        line[i] = '\0';
    }
   
    while(line[0]==' ')
    {
        for (int i=0;line[i];i++)
        {
            line[i] = line[i + 1];
        }    
    }
    line[strlen(line)] = '\0';

    for (int i = 0; line[i]; i++)
    {
        if (line[i] != ' ' && line[i + 1] == ' ')
        {
            while(line[i+2]==' ')
            for (int j = (i + 2); line[j]; j++)
                line[j] = line[j + 1];
        }
    }
    line[strlen(line)] = '\0';
    return line;
}