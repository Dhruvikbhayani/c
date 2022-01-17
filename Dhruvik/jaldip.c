#include<stdio.h>
int main()
{

    int i,j,sp=4;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=sp;j++)
        {
            printf("_");
        }
        sp--;
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

  int i,j,sp=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=sp;j++)
        {
            printf("_");
        }
        sp++;
        for(j=5;j>i;j--)
        {
            printf(" *");
        }
          printf("\n");
    }

    int i,j,k;
    for(i=5;i>0;i--)
    {
        k=i;
        for(j=5;j>=i;j--)
        {

                printf("%d",k);
                k++;
            }

        printf("\n");
    }
}
