
  #include<stdio.h>
int main()
{
    int i,j,a=1,sp=10;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        printf(" ");
        for(j=1;j<i*2;j++)
        printf("*");
        sp--;
        printf("\n");
    }
/*
          *
         ***
        *****
       *******
      *********
      */




    for (i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
        printf(" ");
        for(j=1;j<=i*2;j++)
        printf("*");
        sp--;
        printf("\n");
}
}
/*
     **
    ****
   ******
  ********
 **********

 */
