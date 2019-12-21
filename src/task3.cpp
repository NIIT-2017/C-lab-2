char* layout(char buf[], int line, int count)
{
    for (int i = 0; i<count; i++)
    {
        if (i>=count-(line*2-1))
            buf[i] = '*';
        else
            buf[i] = ' ';

    }
    buf[count] = '\0';
    return buf;
}