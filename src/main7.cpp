#include<stdio.h>
#include<string.h>

int main()
{

    char buf[512]={0};
    int count[512] = {0};
    int i;
    printf("Enter the line!\n");
    fgets(buf,512,stdin);
    if(buf[strlen(buf)-1]=='\0')
       buf[strlen(buf)-1]=0;
    for(i=0;buf[i]!='\0';i++)
	count[buf[i]]++;
      for(i = 0; buf[i]!='\0';i++)
      {
	 if(count[buf[i]]!=0)
	   printf("%c - %d \n",buf[i],count[buf[i]]);
	 count[buf[i]]=0;
      }

      return 0;
}
