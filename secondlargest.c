#include<stdio.h>
void main()
{
  int n,i,j,t;
  printf("enter the size of the array ");
  scanf("%d",&n);
  int arr[n];
  printf("enter the element : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=n-i-1;j++)
    {
      t=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=t;
    }
  }
  printf("The second largest elemenet is : %d",arr[n-1]);
}
