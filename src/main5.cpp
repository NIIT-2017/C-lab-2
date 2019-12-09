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
      password(line);
   }
   return 0;
}
