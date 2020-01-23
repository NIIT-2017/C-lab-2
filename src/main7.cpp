#include <stdio.h>
#include <string.h>

int main()
{
    char str[256] = { 0 };
    char count[256] = { 0 };
    int i = 0;
    printf("Enter a line:\n");
    fgets(str, 256, stdin);

    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = 0;
    int line = strlen(str);
   
    while(i<line)
    {
        count[str[i]]++;
        i++;
    }
    while(i < 256)
    {
        i++;
        if (count[i] > 0)
            printf("%c - %d\n", i, count[i]);
    }

    return 0;
}