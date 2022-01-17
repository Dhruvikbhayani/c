#include<stdio.h>
#include <string.h>
int main()
{
  char str[200];
  int i,j,s=0;
  printf("Enter string:");
  scanf("%[^\n]",str);
  for(i=0;str[i];i++)
  {
    //printf("%d-5c-%d\n",i,str[i],str[i]);
    if(str[i]==32)
    {
      s+=1;
     str[i+1]-=32;
    }
    else if(i==0)
    {
      str[i]-=32;
    }
  }
  printf("%s",str);
  printf("\nspces =%d",s);
  }
