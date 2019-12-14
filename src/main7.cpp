#include <stdio.h>
int main()
{
    int freq[128];
    for (int i = 0; i < 128; i++)
        freq[i] = 0;
    char str[100];
    printf("Enter string");
    fgets(str, 100, stdin);
    for (int i = 0; i < 128; i++)
    {
        freq[str[i]]++;
    }
    for (int i = 0; i < 128; i++)
    {
        if(freq[i]>0)
        printf("%c %d\n", i, freq[i]);
    }
}