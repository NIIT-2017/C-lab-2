char* layout(char buf[], int line, int count)
{
    for (int i = count-1; i>=0; i--)
    {
        if (i-line>0 )
            buf[i] = '*';
        else
            buf[i] = ' ';

    }
    buf[count] = '\0';
    return buf;
}