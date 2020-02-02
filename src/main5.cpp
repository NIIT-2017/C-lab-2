#include "task5.h"
#include <stdio.h>
#include<stdlib.h>
#include<time.h>



int main()
{

   srand(time(NULL));
   char line[512];
   for(int i = 0; i < 10; i++)
   {
       printf("%s\n", password(line));
        clock_t begin = clock();
        while (clock() < begin + CLOCKS_PER_SEC);
   }
   return 0;
}
