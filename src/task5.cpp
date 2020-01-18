#include "task5.h"
#include <string.h>
int checkPassword(char *pswd)
{
    int len = strlen(pswd),lowLetter=0,bigLetter=0,number=0;
    for (int i = 0; i < len; i++)
    {
        if (pswd[i] >= 'A' && pswd[i] <= 'Z')
            bigLetter = 1;
        if (pswd[i] >= 'a' && pswd[i] <= 'z')
            lowLetter = 1;
        if (pswd[i] >= '0' && pswd[i] <= '9')
            number = 1;
    }
    if (lowLetter && bigLetter && number)
        return 1;
    return 0;
}
char* password(char* line)
{
    do
    {
        for (int i = 0; i < 8; i++)
        {
            int rnd = rand() % 128;
            while (!((rnd >= 'A' && rnd <= 'Z') || (rnd >= 'a' && rnd <= 'z') || (rnd >= '0' && rnd <= '9')))
                rnd = rand() % 128;
            line[i] = rnd;
        }
    } while (!checkPassword(line));
    line[8] = '\0';
    return  line;
}