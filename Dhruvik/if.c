// triangle is equilateral,scalene ,isosceles
#include<stdio.h>
int main()
{
    int a,b,c;
   printf("enter value:");
   scanf("%d%d%d",&a,&b,&c);
   if (a==b&&b==c)
   {
       printf("\n triangle is equilateral");
   }
    else if (a==b||c==b||a==c)
    {
        printf("\n triangle is isosceles");

    }
    else
    {
      printf("\n triangle is scalene");
    }
}