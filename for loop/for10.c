
#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++)
     {
       if (i%2==1)
       {
         printf("\n%c- %d",i,i);
       }
       else
       {
           printf("\n%c- %d",i+32,i+32);
       }
     }
}