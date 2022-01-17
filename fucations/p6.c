#include<stdio.h>
int main()
{
    int i,j;
    void p();
    p(3);
    p(4);
    p(5);
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
             printf("     * *");
        }
        printf("\n");
}
    return 0;

}
void p(int n)
{
    int i,j,sp=5;
    //scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
        {
            printf(" ");
        }
        sp--;
        for(j=1;j<=i;j++)
        {
             printf(" *");
        }
        printf("\n");
    }
}

/*
      *
     * *
    * * *
      *
     * *
    * * *
   * * * *
      *
     * *
    * * *
   * * * *
  * * * * *
     * *
     * *
     * *
*/