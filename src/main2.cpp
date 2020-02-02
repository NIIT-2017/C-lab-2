#include "task2.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()
{

   srand(time(NULL));
   int secret =0,value=0;
   secret = (1+rand() % 100-1+1);
   printf("Enter the Number!\n");
   while(scanf("%d",&value) && value < 100 && value > 0)
   {

      int result = turn(value,secret);
      if(result ==1)
	printf("Your Number is bigger!Try Again!\n");
      else if(result ==-1)
	printf("Your Number is Lower!Try Again!\n");
      else if(result ==0)
      {
	 printf("You guessed it!\n");
	 break;
      }
   }
   printf("Uncorrect value!\n");

   return 0;
}

