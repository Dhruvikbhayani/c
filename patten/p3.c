#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
         for(j=1;j<=i;j++)
         {  
             k=i;
             printf("%d",k);
         }
         printf("\n");
    }
}
/*
1
22
333
4444
55555
*/