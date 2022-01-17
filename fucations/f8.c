#include<stdio.h>
int main()
{
    void cudes(int b);
    int n;
    scanf("%d",&n);
    cudes(n);
    return 0;
}
int sqare(int y)
{
    printf("%d\n",y*y);
    return y*y;
}
void cudes(int b)
{
    int c= b*sqare(b);
    printf("%d",c);
}