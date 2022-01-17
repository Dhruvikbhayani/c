#include<stdio.h>
int main()
{
    char str[200];
    int i,len;
    printf("Enter String:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        len=i;
    }
    for(i=0;i<=len/2;i++)
    {
        str[i]=str[len-i];
        str[len-i]=str[i];
    }
    printf("%s",str);
}