#include<stdio.h>
int main()
{
    int x;
    float y,a;
    printf("enter amount , total balance :");
    scanf("%d%f",&x,&y);

    if(x%5==0 && x<y)
    {
        a=y-0.5-x;
        printf("total bank blance :%0.2f",a);
    }
    else
    {
        printf("total blance :%0.2f",y);
    }

}