// W A W R
#include<stdio.h>
int main()
{
    int dosum(int x,int y);
    int a,b;
    int dosum(int,int);
    printf("\n enter a:");
    scanf("%d",&a);
    printf("\n enter b:");
    scanf("%d",&b);
    printf("\n a+b :%d",dosum(a,b));
    return 0;
}
int dosum(int x,int y)
{
    return x+y;
}
/*
 enter a:50 


 enter b:30

 a+b :80
 */