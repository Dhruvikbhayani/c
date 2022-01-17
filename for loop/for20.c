// leap year
#include<stdio.h>
int main()
{
    int year;
    printf("enter your year :");
    scanf("%d",&year);
    if (year %4==0)
    {
        printf("this is leap year =%d",year);
    }
    else
    {
        printf("this is not leap year =%d",year);

    }

}