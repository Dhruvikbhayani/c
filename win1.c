#include<stdio.h>
void recur(int n)
{
    printf("\n winding %d",n);
    if(n<3)
    {
        recur(n+1);
    }
        printf("\n \t unwinding %d",n);
}
int main()
{
    recur(1);
}
