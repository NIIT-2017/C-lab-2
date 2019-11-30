char* layout(char buf[], int line, int count)
{
    int numberOfStars = line * 2 - 1;
    int numberOfGaps = (count * 2 - 1 - numberOfStars) / 2;
    for (int i = 0; i < numberOfGaps + numberOfStars; i++)
    {
        if (i < numberOfGaps)
            buf[i] = ' ';
        else
            buf[i] = '*';
    }
    return buf;
}