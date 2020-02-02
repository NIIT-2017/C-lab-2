#include <string.h>

char* process(char* line)
{
    int i = 0;
    int j = strlen(line) - 1;
    int buf = 0;

    while (i < j)
    {
        if (!(line[i] >= '0' && line[i] <= '9'))
            i++;
        else if (!(line[j] >= 'a' && line[j] <= 'z') && !(line[j] >= 'A' && line[j] <= 'Z'))
            j--;
        else if ((line[i] >= '0' && line[i] <= '9') && ((line[j] >= 'a' && line[j] <= 'z') || (line[j] >= 'A' && line[j] <= 'Z')))
        {
            buf = line[i];
            line[i] = line[j];
            line[j] = buf;
            i++;
            j--;
        }
    }
    return line;
}