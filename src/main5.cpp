#include "task5.h"

int main()
{
    time_t now;
    time(&now);
    srand(now);
    char line[8] = { 0 };
    for (int i = 0; i < 10; i++)
        printf("%d) %s\n", i + 1, password(line));
    return 0;

}