#include<stdio.h>
int main()
{

  int i,j,sp=10;
    for(i=1;i<=10;i++)
    {
       for(j=1;j<=sp;j++)
       {
        printf(" ");
       }
        if(i<=5)
        {
            for(j=1;j<i;j++)
            {
            printf("*");
            }
            sp--;
        }
        else
        {
            for(j=10;j>=i;j--)
        {
            printf("*");
        }
             sp++;
        }
        printf("\n");
    }
}