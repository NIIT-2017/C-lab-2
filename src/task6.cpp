#include"task6.h"

char* clear(char* line)
{
    int i = 0;
    int j = strlen(line) - 1;

    while (line[j]==' ') //check from end to beginning
    {
        line[j] = '\0';
        j--;
    }

    while (line[i]==' ') // check from start to end
        for (int a = 0; a <= j; a++)
            line[a] = line[a + 1];

    while (line[i]!='\0') //check between words
        if (line[i] == ' ' && line[i + 1] == ' ')
            for (int a = i; a <= j; a++)
                line[a] = line[a + 1];
        else i++;

    return line;
}