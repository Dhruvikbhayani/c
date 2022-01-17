#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,sp=20,k;
    for(i=1;i<=5;i++)
    {
        //for(j=n-1;j>=i;j--) //for(j=1;j<=5;j--)
        for(j=1;j<=sp;j++)
        {
          printf(" ");
        }
          for(k=i-1;k>=-(i-1);k--)
          {              printf("%d",i-abs(k));
          }

          sp--;
          printf("\n");

    }
}

/*
                    1
                   121
                  12321
                 1234321
                123454321

*/