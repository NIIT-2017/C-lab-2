#include <stdio.h>
#include <string.h>
#define SIZE 256
int main()
{
    char len[SIZE];
    char count[SIZE] = { 0 };
    printf("Enter string:\n");
    fgets(len, SIZE, stdin);

    if(len[strlen(len) - 1] == '\n')
        {
            len[strlen(len) - 1] = 0;
        }

    for(int i = 0; i < strlen(len); i++)
        {
            count[len[i]]++;
        }

    for(int i = 0; i < SIZE; i++)
    {
        if (count[i] > 0)
            {
                printf("%c = %d \n", i, count[i]);
            }
    }
    return 0;
}
