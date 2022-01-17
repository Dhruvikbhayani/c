//1,1,2,3,5,8....n
#include<stdio.h>
int main()
{

    int i,a=0,b=1,c,n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("\n%d ",b);

    for(i=0;i<=n;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
}