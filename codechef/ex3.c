#include<stdio.h>
int main()
{
    int i,a,b,x;
    printf("enter run number  :");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
      printf ("\nenter a and b :");
      scanf("%d%d",&a,&b);

      printf("%d",a+b);
    }

}