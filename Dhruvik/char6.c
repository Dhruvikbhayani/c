#include<stdio.h>
int main()
{
    int number;
    printf("enter you number :");
    scanf("%d",&number);

    if ((number>=2000)&&(number<=3000))
    {
        printf("print x=%d",number);
    }
    else if ((number>=100)&&(number<=500))
    {
        printf("print y=%d",number);
    }
}