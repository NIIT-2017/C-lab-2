#include"task3.h"

int main()
{
    char buf[256] = { 0 };
    int count = 0; 
    printf("enter the height of the triangle:");
    scanf("%d", &count);
    for (int line = 1 ; line <= count; line++)
    {
        printf("%s\n", layout(buf, line, count));
    }
    return 0;
}