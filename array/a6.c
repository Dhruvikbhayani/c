#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],sum=0,v=0,n=0;
   int i,j;
   printf("----------enter array A-------\n\n");
   for(i=0;i<3;i++)
   {
       for (j=0;j<3;j++)
       {
           printf("enter a[%d][%d] ",i,j);
           scanf("%d",&a[i][j]);
       }
   }
   printf("\n\t ----matrixA----\n");
   for(i=0;i<3;i++)
   {

       for(j=0;j<3;j++)
       {
           printf("\t%d",a[i][j]);
       }
       for(j=0;j<3;j++)
       { if(a[i]==a[j])
       { sum=sum+a[i][j];
       }}
       for(j=0;j<3;j++)
       { if(a[i]>a[j])
       {v=v+a[i][j];
       }}
       for(j=0;j<3;j++)
       { if(a[i]<a[j])
       {
          n=n+a[i][j];
       }}
       for(j=0;j<3;j++)
       {
           printf("\t%d",a[j][i]);
       }

    printf("\n");
   }
   printf("\t \ndiago =%d",sum);
   printf("\t \nuppartable =%d",v);
   printf("\t \nlower table =%d",n);
}