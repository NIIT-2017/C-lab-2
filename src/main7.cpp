#include <stdio.h>
#include <string.h>

int main()
{
    char line[128];
    char count[128] = { 0 };
    
    printf("Enter a line:\n");
    fgets(line, 128, stdin);
    
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = 0;
    
    for (int i = 0; i < strlen(line); i++)
        count[line[i]]++;

    for (int i = 0; i < 128; i++)
    {
        if (count[i] > 0)
            printf("%c - %d\n", i, count[i]);
    }

    return 0;
}