#include<stdio.h>
int main()
{
    int a,b,c,t;
    float p;

    printf("enter your makrs :");
    scanf("%d%d%d",&a,&b,&c);
    t=a+b+c;
    p=t/3;
     if ((p>=75)&&(p<=100))
     {
         printf("your Grade 'A'=%f",p);
     }
     else if ((p>=60)&&(p<=75))
     {
         printf("your Grade 'B'=%f",p);
     }
    else if ((p>=45)&&(p<=60))
    {
        printf("your Grade 'C'=%f",p);
    }
    else if ((p>=35)&&(p<=45))
    {
        printf("your Grade 'D'=%f",p);

    }
    else if (p<=35)
    {
        printf("your Grade Fali=%f",p);
    }
}