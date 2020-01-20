#include "task4.h"
#include <string.h>

int A_Z(char ch) // ïðîâåðÿåì ïðèíàäëåæíîñòü ñèìâîëà ê áóêâàì
{
    if (ch >= 'a' && ch <= 'z') 
        return 1;
    else
        return 0;
}

int helper(char* line, int i, int j) 
{
    if (A_Z(line[i]) == 1 && A_Z(line[j]) == 1) // â íà÷àëå è â êîíöå áóêâà
        return 1;
    else if (A_Z(line[i]) == 0 && A_Z(line[j]) == 0) //â íà÷àëå è â êîíöå öèôðà
            return 2;
         else if (A_Z(line[i]) == 0 && A_Z(line[j]) == 1) //â íà÷àëå öèôðà, â êîíöå áóêâà
            return 3;
              else                                             //â íà÷àëå áóêâà, â êîíöå öèôðà
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
