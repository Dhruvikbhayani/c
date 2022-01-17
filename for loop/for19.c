// A,c,E,g,I....
#include<stdio.h>
int main()
{
    int i;
    for(i=65;i<=90;i++)
    {
        if (i%2==1)
        {
            printf("\t\n %C",i);
           if(i+=2)
           {
            printf("\t\n %C",i+32);
           }
        }
    }
}