#include<stdio.h>
int main()
{
   int i=1, x;
    scanf("%d",&x);
    table:
    printf("\n %d x %d = %d",x,i,x*i);
    i++;
    if(i<11)
         goto table;

}