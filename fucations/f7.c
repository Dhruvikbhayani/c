// W A W R
#include<stdio.h>
int* bubblesort(int[]);
int main()
{
    int i;
  int arr[10]={10,9,7,101,232,44,12,78,34,23};
  int *p=bubblesort(arr);
  for(i=0;i<10;i++)
  {
      printf("%d\t",*(p+i));
  }
}
int*bubblesort(int a[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}

/*
7       9       10      12      23      34      44  78       101     232
*/