#include <stdio.h>
#include <string.h>

int main()
{
    char line[512];
    char symbols[256] = { 0 };
    int counts[256] = { 0 };

    printf("Write a string\n");
    fgets(line, 255, stdin);
    
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    if (line[0] != '\0')
    {
        symbols[0] = line[0];
        counts[0] = 1;
        short flag = 0;
        for (int i = 1; i < strlen(line); i++)
        {
            flag = 1;
            for (int j = 0; j < strlen(symbols); j++)
            {
                if (symbols[j] == line[i])
                {
                    counts[j]++;
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                symbols[strlen(symbols)] = line[i];
                counts[strlen(symbols) - 1]++;
            }
        }
    }

    for (int j = 0; j < strlen(symbols); j++)
    {
        printf("'%c' : %i\n", symbols[j], counts[j]);
    }

    return 0;
}