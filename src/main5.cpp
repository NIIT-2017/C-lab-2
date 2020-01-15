#include "task5.h"

int main()
{
    time_t now;
    time(&now);
    srand(now);
    char line[SIZE] = { 0 };
    for (int i = 0; i < N_PASSWORD; i++)
        printf("%d) %s\n", i+1, password(line));
    return 0;
}