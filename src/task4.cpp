#include "task4.h"
#include <string.h>

int A_Z(char ch) // проверяем принадлежность символа к буквам
{
    if (ch >= 'A' && ch <= 'Z') 
        return 1;
    else
        return 0;
}

int helper(char* line, int i, int j) 
{
    if (A_Z(line[i]) == 1 && A_Z(line[j]) == 1) // в начале и в конце буква
        return 1;
    else if (A_Z(line[i]) == 0 && A_Z(line[j]) == 0) //в начале и в конце цифра
            return 2;
         else if (A_Z(line[i]) == 0 && A_Z(line[j]) == 1) //в начале цифра, в конце буква
            return 3;
              else                                             //в начале буква, в конце цифра
                 return 4;
}

char* process(char* line)
{
    int i = 0;
    int j = strlen(line) - 1;
    char h = '0';
    while (j-i>2)
    {
        switch (helper(line, i, j))
        {
            case 1:
                i++;
                break;
            case 2:
                j--;
                break;
            case 3:
            {
                h = line[i];
                line[i] = line[j];
                line[j] = h;
                i++;
                j--;
                break;
            }
            case 4:
            {
                i++;
                j--;
            }
        }
    }
    return line;
}