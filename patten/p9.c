#include<stdio.h>
int main()
{
    int i,j;
    char ch='a';
    for(i='a';i<='e';i++)
    {
         for(j='a';j<=i;j++)
         {
         if (j%2==1)
         {

             printf("%c",ch);
             ch++;

         }
         else
         {
             printf("%c",ch-32);
             ch++;
         }
         }
         printf("\n");
    }
}
/*
A
BC
DEF
GHIJ
KLMNO
*/