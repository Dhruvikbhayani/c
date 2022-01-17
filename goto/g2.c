#include<stdio.h>
int main()
{
    int i=0,j;
    a:
    if(i<5)
    {
       j=0;
       b:
       if(j<=i)
       {
           printf("*");
           j++;
           goto b;
       }
       printf("\n");
       i++;
        goto a;
    }
}