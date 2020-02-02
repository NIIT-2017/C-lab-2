#include"task1.h"

int main()
{
    int startHeight = 0;
    printf("enter height (m)\n");
    scanf("%d", &startHeight);
for (int currTime = 0; height(currTime, startHeight) >= 0; currTime++)
{
    printf("t = %02d c h=%0.1f m \n", currTime, height(currTime, startHeight));
    clock_t begin = clock();
    while (clock() < begin + CLOCKS_PER_SEC);
}
printf("BABAH!!!\n");
return 0;
}