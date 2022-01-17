#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5][5][5],b[5][5][5];
    int i,j,k;
    printf("----enter array A----\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            { a[i][j][k]=rand()%10;
               
            }
        }
    }
    printf("\n\t----matrix A----\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
         {
            for(k=0;k<3;k++)
            {
            printf("\t%d",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

}
/*
----enter array A----

        ----matrix A----

        3       6       7
        5       3       5
        6       2       9


        1       2       7
        0       9       3
        6       0       6


        2       6       1
        8       7       9
        2       0       2

*/