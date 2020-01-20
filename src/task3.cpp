#include "task3.h"

char* layout(char buf[], int line, int count)
{
    int linelength = count + (line - 1);
    int spacecount = count-line;
    int asteriskcount = linelength - spacecount;
    for (int i = 0; i <= spacecount-1; i++)
        buf[i] = ' ';
    for (int i = spacecount; i <= linelength - 1; i++)
        buf[i] = '*';
    buf[linelength] = '\0';
    return buf;
}
