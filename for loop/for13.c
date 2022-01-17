//1,4,3,16,5
#include<stdio.h>
int main()
{
    int i,n=0;
       for(i=1;i<=100;i++)
       {
           if (i%2==1)
           {
               printf("\nanswer =%d",i);
           }
           else
           {
               printf("\nanswer =%d",i*i);
           }
       }
}