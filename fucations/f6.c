//array to funcations
//sort number
#include<stdio.h>
int main()
{
  void bubblesort(int a[]);
  int i;
  int arr[10]={10,9,7,101,232,44,12,78,34,23};
  bubblesort(arr);
  for(i=0;i<10;i++)
  {
      printf("%d\t",arr[i]);
  }
  return 0;
}
void bubblesort(int a[])
{
    int i,j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
/*
7       9       10      12      23      34      44      78      101   232
*/
