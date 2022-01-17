#include<stdio.h>
int main()
{
  int p=1,q,r,g,b,t;

   printf("enter your qty,rate :");
   scanf("%d%d",&r,&q);
   printf("\nproduct\tqty\trate\ttotal\tGST\tbillamount\n");
    t=r*q;
    g=t*18/100;
    b=t+g;
   printf("%d\t%d\t%d\t%d\t%d\t%d",p,q,r,t,g,b);

}
