#include <stdio.h>

char* process(char* line)
{
    int leftIndex = 0;
    char box = 0;
    int rightIndex = 0;

    while (line[rightIndex] != '\0')
    {
        rightIndex++;
    }
    rightIndex--;

    while (1)
    {
        while (1)
        {
            if (!((line[leftIndex] > 64 && line[leftIndex] < 91) ||
                (line[leftIndex] > 96 && line[leftIndex] < 123)) ||
                line[leftIndex] == '\0')
            {
                break;
            }
            leftIndex++;
        }
        while (1)
        {
            if (!(line[rightIndex] > 47 && line[rightIndex] < 58) ||
                rightIndex == 0)
            {
                break;
            }
            rightIndex--;
        }
        if (rightIndex <= leftIndex)
            break;
        else
        {
            box = line[leftIndex];
            line[leftIndex] = line[rightIndex];
            line[rightIndex] = box;
            leftIndex++;
            rightIndex--;
        }
    }
    //printf("%s", line);
    return line;
}