#include <stdio.h>
#include <string.h>
#define N 256

int main()
{
    char str[N] = { 0 };
    int count[N] = { 0 };

    printf("Input a line: ");
    fgets(str, N, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    puts("");   
    
    for (int i = 0; str[i]; i++)
        count[str[i]]++;
    
    for (int j = 0; j<N-1; j++)
    {
        if (count[j]>0)
        printf("%c - %d\n", j, count[j]);
    }

    return 0;
}