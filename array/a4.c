#include<stdio.h>
int main()
{
   int a[10][10],b[10][10];
   int i,j;
   printf("----------enter array-------\n\n");
   for(i=0;i<3;i++)
   {
       for (j=0;j<3;j++)
       {
           printf("enter a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("\n\t---------matrixA----------\n\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("\t%d",a[i][j]);
       }
       printf("\n");
   }
}

/*
       ----------enter array-------

enter a[0][0]20
enter a[0][1]30
enter a[0][2]40
enter a[1][0]50
enter a[1][1]60
enter a[1][2]70
enter a[2][0]80
enter a[2][1]90
enter a[2][2]100

        ---------matrixA----------

        20      30      40
        50      60      70
        80      90      100

        */