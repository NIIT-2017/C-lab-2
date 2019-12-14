#include "task5.h"
char* password(char* line)
{
    srand(time(NULL));
    rand();
    for (int i = 0; i < strlen(line); i++)
    { 
        int rnd = rand() % 121;
        while((rnd>'Z'&&rnd<'a')||(rnd<'0')||(rnd>'9'&&rnd<'A'))
            rnd = rand() % 121;
        line[i] =rnd ;
    }
    return  line;
}