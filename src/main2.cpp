#include"task2.h"

int main()
{
    time_t now;
    time(&now);
    srand(now);
    int secret = 1 + rand() % 100;
    int value = 0;
    int result = 0;
    do {
        printf("enter number (1-100)\n");
        scanf("%d", &value);
        if (turn(value, secret) > 0)
            printf("less\n");
        else if (turn(value, secret) < 0)
            printf("more\n");
        printf("\n");
    } while ((turn(value, secret) != 0));
    printf("right, it is %d!\n", secret);
    return 0;
}