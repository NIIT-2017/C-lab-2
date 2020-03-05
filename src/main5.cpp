#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include "task5.h"
#define SIZE 512

int main()
{

   srand(time(NULL));
   char line[SIZE];
   printf("Passwords:  \n");
   printf("----------\n");
   for(int i = 0; i < 10; i++)
   {
        clock_t begin = clock();
        while (clock() < begin + CLOCKS_PER_SEC);
        printf("%s \n", password(line));
   }
   printf("----------\n");
   return 0;
}
