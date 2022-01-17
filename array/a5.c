#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],sum,y;
   int i,j;
   printf("----------enter array AB-------\n\n");
   for(i=0;i<3;i++)
   {
       for (j=0;j<3;j++)
       {
           printf("enter a[%d][%d] b[%d][%d]",i,j,i,j);
           scanf("%d%d",&a[i][j],&b[i][j]);
       }
   }
   printf("\n\t ----matrixA----\t----matrixB----\t\t----sumA+b----\t\t----maltiA*b----\n");
   for(i=0;i<3;i++)
   {

       for(j=0;j<3;j++)
       {
           printf("\t%d",a[i][j]);
       }
      for(j=0;j<3;j++)
      {
         printf("\t%d",b[i][j]);
      }
      for(j=0;j<3;j++)
      {sum=a[i][j]+b[i][j];
         printf("\t%d",sum);

      }
      for(j=0;j<3;j++)
      {y=a[i][j]*b[i][j];
         printf("\t%d",y);

      }


   printf("\n");
   }
}
/*
         ----matrixA----        ----matrixB----         ----sumA+b----          ----maltiA*b----
        1       3       4       2       2       5       3       5       9       2       6       20
        7       7       3       5       5       2       12      12      5       35      35      6
        4       5       5       2       6       8       6       11      13      8       30      40
        */