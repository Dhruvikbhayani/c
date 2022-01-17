#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<5;i++)
    {
        printf("enter value for a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n a[%d] :%d",i,a[i]);
    }
}
/*

 a[0] :65
 a[1] :60
 a[2] :63
 a[3] :62
 a[4] :692
 */