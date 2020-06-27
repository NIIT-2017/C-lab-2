#include "task1.h"
#include <stdio.h>

int main()
{
    float t_height = 0;
    int currTime = 0, startHeight = 0;

    printf("Enter start height for yours bomb: \n");
    printf("Exemple: 5000 \n");
    scanf("%d", &startHeight);

    while (1)
    {
        t_height = height(currTime, startHeight);
        if (t_height > 0)
            printf("t = %d c   h = %.2f m\n", currTime, t_height);
        else
        {
            printf("BABAH!!!");
            break;
        }
        currTime++;
    }
    return 0;
}