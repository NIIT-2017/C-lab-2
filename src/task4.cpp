#include <stdlib.h>
#include <string.h>
#include "task4.h"

char* process(char* line)
{
    
    int i = 0;
    int j = strlen(line) - 1;
    int temp = 0;
   
    while (i < j)
    {
        if (!(line[i] >= '0' && line[i] <= '9'))
            i++;
        else if (!(line[j] >= 'A' && line[j] <= 'Z') && !(line[j] >= 'a' && line[j] <= 'z'))
            j--;
        else 
        {
            temp = line[i];
            line[i] = line[j];
            line[j] = temp;
            i++;
            j--;
        }
    }
    return line;
	
}
