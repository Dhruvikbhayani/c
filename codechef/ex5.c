#include<stdio.h>
int main()
{
    int i,n=0,b,k;
    printf("enter run number  :");
    scanf("%d",&k);


   for(;k<9;){
            b=k%10;
            k=k/10;
         n=b+n;
        }

    printf("%d",n);
}
/*
1689
sum=24
*/
