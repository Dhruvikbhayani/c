#include<stdio.h>
int main()
{
    int i,j,k,sp=10;
    for(i=1;i<=5;i++)
      {
          for(j=1;j<=sp;j++)
          {
              printf(" ");
          }
          k=(i*(i+1))/2;
          for(j=1;j<=i;j++)
          {
              printf("%2d",k);
              k--;

          }
           printf("\n");
           sp-=2;
      }
}
/*
           1
         3 2
       6 5 4
    10 9 8 7
  1514131211

  */

