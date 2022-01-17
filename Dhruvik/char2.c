#include<stdio.h>
int main()
{
    char ch;
    printf("enter char is :");
    scanf("%c",&ch);

     if (ch>='A'&&ch<='Z')
     {
         printf(" your char=%c",ch+32);
     }
     else if (ch>='a'&&ch<='z')
     {
         printf("your char=%c",ch-32);
     }

     return 0;
}
/*
enter char is :a
your char=A
/*
