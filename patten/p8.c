#include<stdio.h>
int main()
{
    int i,j,a=64,k,d;
    char ch=65;
    for(i=65;i<=69;i++)
    {
         for(j=65;j<=i;j++)
         {
         if (i%2==1)
         {

             printf("%c",ch);
             ch++

         }
         else
         {
             printf("%c",ch+32);
             ch++;
         }
         }
         printf("\n");
    }
}

/*
A
bc
DEF
ghij
KLMNO
*/