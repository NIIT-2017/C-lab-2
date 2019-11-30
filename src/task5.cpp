#include <stdlib.h>

char GiveUppercase()
{
    return (char)(rand() % 26 + 65);
}

char GiveLowercase()
{
    return (char)(rand() % 26 + 97);
}

char GiveNumber()
{
    return (char)(rand() % 10 + 48);
}

char GiveSymbol(short option)
{
    switch (option)
    {
    case 0:
        return GiveUppercase();
        break;
    case 1:
        return GiveLowercase();
        break;
    case 2:
        return GiveNumber();
        break;
    }
}

char* password(char* line)
{
    for (int i = 0; i < 9; i++)
    {
        line[i] = '\0';
    }

    int i = 0;
    int random = 0;
    while (i < 3)
    {
        random = rand() % 8;
        if (line[random] == '\0')
        {
            line[random] = GiveSymbol(i);
            i++;
        }
    }

    for (int n = 0; n < 8; n++)
    {
        if (line[n] == '\0')
            line[n] = GiveSymbol(rand() % 3);
    }

    return line;
}