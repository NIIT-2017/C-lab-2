char* layout(char buf[], int line, int count)
{
    int numberOfStars = line * 2 - 1;
    int numberOfGaps = (count * 2 - 1 - numberOfStars) / 2;
    int i = 0;

    for (i; i < numberOfGaps + numberOfStars; i++)
    {
        if (i < numberOfGaps)
            buf[i] = ' ';
        else
            buf[i] = '*';
    }

    buf[i] = '\0';
    return buf;
}