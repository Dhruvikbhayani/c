#include<stdio.h>
int main()
{
    int a[10],i,b[10],c[10],t,x=0,y=0,z=0,v=0,p;
    char g,k;
    for(i=0;i<2;i++)
    {
        printf("enter value for a[%d] b[%d] c[%d]:",i,i,i);
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        x+=a[i];
       y+=b[i];
       v+=c[i];
    }
    printf("no \ta \t b \t c \t total \t per \t grade \t Pass/fail");
    for(i=0;i<2;i++)
    {t=a[i]+b[i]+c[i];
     p=t/3;
      g= p>80? 'A': p>70? 'B': p>60? 'C' : p>33? 'D': 'E';
      k= p>33? 'p': 'f';

        printf("\n %d \t %d \t%d \t %d \t %d \t %d \t %c \t %c",i,a[i],b[i],c[i],t,p,g,k);
    }
        printf("\n\t %d \t %d \t %d \t %d  ",x,y,v,t);
}

/*
no      a        b       c       total   per     grade   Pass/fail
 0       99     99       96      294     98      A       p
 1       22     11       12      45      15      E       f
 */




`

