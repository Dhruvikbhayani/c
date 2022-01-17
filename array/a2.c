#include<stdio.h>
int main()
{
    int a[10],i,b[10],c[10];
    for(i=0;i<5;i++)
    {
        printf("enter value for a[%d] b[%d] c[%d]:",i,i,i);
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n a[%d]:%d\tb[%d]:%d \tc[%d]:%d",i,a[i],i,b[i],i,c[i]);
    }
}


/*
 a[0]:1 b[0]:1  c[0]:1
 a[1]:2 b[1]:2  c[1]:2
 a[2]:3 b[2]:3  c[2]:3
 a[3]:4 b[3]:4  c[3]:4
 a[4]:5 b[4]:5  c[4]:5
 */



