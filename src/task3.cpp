char* layout(char buf[], int line, int count)
{
    for (int i = 0; i < count * 2-1; i++)
    {
        if (i >= (count / 2) - (line - 1) &&i<= (count / 2) +(line - 1))
        {
            buf[i] = '*';
        }
        else
            buf[i] = ' ';
    }
    buf[count] = '\0';
    return buf;
}