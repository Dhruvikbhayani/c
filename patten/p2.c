#include<stdio.h>
int main()
{
    int i,j,sp=10;
    for(i=1;i<=5;i++)
    {
         for(j=1;j<=i;j++)
         {
             printf("%d",j);
         }
         printf("\n");
    }

/*
1
12
123
1234
12345
*/

{
   sp=4;
  for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
         printf(" ");
           for(j=i;j>=1;j--)
             printf("%d",j);
    sp--;
         printf("\n");
    }

}


/*
    1
   21
  321
 4321
54321
*/
sp=0;
    for(i=5;i>=1;i--)
    {
        for(j=5;j<=sp;j++)
            printf(" ");
         for(j=i;j>=5;j--)
         {
             printf("%d",j);

         }
         sp++;
         printf("\n");
    }
}