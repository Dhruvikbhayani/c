#include<stdio.h>
int main()
{
    int i,j,sp=10;
    for(i=1;i<=5;i++)
    {
         for(j=1;j<=i;j++)
         {
             printf("*");
         }
         printf("\n");
    }

/*
*
**
***
****
*****
*/
sp=4;
for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        {
         printf(" ");
        }
        for(j=1;j<=i;j++)
        {
          printf("*");
        }
    sp--;
         printf("\n");
    }

/*
          *
         **
        ***
       ****
      *****
*/
  sp=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
            printf(" ");
         for(j=1;j<=i;j++)
         {
             printf(" *");

         }
         sp--;
         printf("\n");
    }

/*
           *
          * *
         * * *
        * * * *
       * * * * *
*/


    //int i,j,sp=10;
   sp=0;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=sp;j++)
            printf(" ");
         for(j=i;j<=5;j++)
         {
             printf("*");

         }
         sp++;
         printf("\n");
    }

/*
      * * * * *
      * * * *
      * * *
      * *
      *

     */
      sp=5;
      for(i=1;i<=5;i++)
      {
        for(j=5;j<=sp;j++)
            printf(" ");
         for(j=i;j<=5;j++)
         {
             printf(" *");

         }
         sp++;
         printf("\n");
    }

/*
       * * * * *
        * * * *
         * * *
          * *
           *
        */
       sp=0;
      for(i=1;i<=5;i++)
      {
        for(j=1;j<=sp;j++)
            printf(" ");
         for(j=5;j>=i;j--)
         {
             printf("*");

         }
         sp++;
         printf("\n");
    }
}
/*
      *****
       ****
        ***
         **
          *
*/
