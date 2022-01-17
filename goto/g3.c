#include<stdio.h>
int main()
{
    int i=0,j,sp=5;
    a:
    if(i<5)
    {
        j=0;
        c:
        if(j<sp)
        {
            printf(" ");
            goto c;
        }
        sp--;
        b:
        if(j<i)
        {
            printf("*");
            j++;
            goto b;
        }
        printf("\n"); 
        i++;
        goto a;
    }
}