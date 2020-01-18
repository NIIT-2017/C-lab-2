#include<stdio.h>
#include<string.h>

int main()
{
    char line[256] = {};
    int a[256] = { 0 };
    printf("Enter a line:\n");
    fgets(line, 256, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    for (int count = 0; line[count]; count++)
    {
        a[line[count]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (a[i] == 0)
            continue;
        else printf("%c - %d\n", i, a[i]);
    }
    return 0;
}