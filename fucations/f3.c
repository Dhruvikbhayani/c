// N A W R
#include<stdio.h>
int main()
{
    int dosum();
    printf("\n a+b :%d",dosum());
    return 0;
}
int dosum()
{
    int a,b;
    printf("\n enter a:");
    scanf("%d",&a);
    printf("\n enter b:");
    scanf("%d",&b);
    return a+b;
}
/*

 enter a:50

 enter b:30

 a+b :80
 */