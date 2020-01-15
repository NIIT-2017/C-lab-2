#include<stdio.h>
#include<string.h>

#define N 256

int main()
{
    char line[N] = {};
    int a[N] = { 0 };
    printf("Enter a line:\n");
    fgets(line, N, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    for (int count = 0; line[count]; count++)
    {
        a[line[count]]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (a[i] == 0)
            continue;
        else printf("%c - %d\n", i, a[i]);
    }
    return 0;
}