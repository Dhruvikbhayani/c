#include<stdio.h>
int main()
{
    int i,j,a;

    for(i='A';i<='E';i++)
    {
        a=i;
        for(j='A';j<=i;j++)
        {
            printf("%c",a);
            a--;

        }
        printf("\n");
    }
}
/*
A
BA
CBA
DCBA
EDCBA
*/