// W A N R
#include<stdio.h>
int main()
{
    int dosum(int x,int y);
  int a,b;
  printf("\n enter a:");
  scanf("%d",&a);
  printf("\n enter b :");
  scanf("%d",&b);
  dosum(a,b);
  return 0;
}
int dosum(int x,int y)
{
    printf("\n a+b :%d",x+y);
    return 0;
}
/*
 enter a:50

 enter b :30

 a+b :80
 */