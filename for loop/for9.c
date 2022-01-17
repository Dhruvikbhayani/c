#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++)
     {
       if (i%2==1)
       {
         printf("\n%c",i);
       }
       else
       {
           printf("\n%c",i+32);
       }
     }
}