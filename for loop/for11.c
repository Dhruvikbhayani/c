// 20 *1=20s
#include<stdio.h>
int main()
{
    int i,a;
    printf("enter number :");
    scanf("%d",&a);
    for(i=1;i<=100;i++)
    {
        printf("\n%d x %d = %d",a,i,i*a);

    }
}