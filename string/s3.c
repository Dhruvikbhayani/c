#include<stdio.h>
#include <string.h>
int main()
{
  char str[200];
  int i;
  printf("Enter string:");
  scanf("%[^\n]",str);

  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='a'&& str[i]<='z')
    {
         str[i]-=32;
    }
    else if(str[i]>='A'&&str[i]<='Z')
    {
       str[i]+=32;
    }
    }
   printf("%s",str);
}

/*
Enter string:DHRUVIK BHAYANI
dhruvik bhayani

Enter string:dhruvikbhayani
DHRUVIKBHAYANI
*/