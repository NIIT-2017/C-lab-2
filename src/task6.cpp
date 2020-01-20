char* clear(char* line)
{
    int firstSymbol = 0;
    int sizeOf_line = 0;

    for (int i = 255; i >= 0; i--)
    {
        if (line[i] == '\0')
            sizeOf_line = i;
        if (line[i] != ' ')
            firstSymbol = i;
    }

    if (firstSymbol < sizeOf_line)
    {
        int index = firstSymbol;
        int i = 0;

        for (i; i + index < 256; i++)
        {
            line[i] = line[i + index];
            if (line[i + index] == '\0')
                break;
            while (line[i + index + 1] == ' ' && line[i + index + 2] == ' ')
                index++;
        }
        if (line[i - 1] == ' ')
            line[i - 1] = '\0';
    }
    else
        for (int i = 0; i < sizeOf_line; i++)
            line[i] = '\0';
    
    return line;
}