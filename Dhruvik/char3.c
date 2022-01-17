#include<stdio.h>
int main()
{
   char ch,e,j,o,t,y;
   printf("enter char:");
   scanf("%c",&ch);
   if (ch<'e')
   {
       printf("your answer = %ce",ch);
   }
   else if(ch>='e' && ch<'j')
   {
      printf("your answer = e%cj",ch);
   }
   else if(ch>='j'&& ch<'o')
   {
     printf("your answer = j%co",ch);
   }
   else if(ch>='o' &&ch<'t')
   {
     printf("your answer = o%ct",ch);
   }
else if (ch>='t'&&ch<'y')
   {
     printf("your answer = t%cy",ch);
   }
    else
   {
       printf("your answer = y%c",ch);
   }

}