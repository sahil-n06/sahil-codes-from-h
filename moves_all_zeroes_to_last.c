#include<stdio.h>
int display(int ar[],int n) {
  int i;
  printf("the array is : ");
  for(i=0;i<n;i++) {
    printf("%d ",ar[i]);
  }
  return 0;
}
void main()
{
  int n,temp;
  printf("ENter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the element : ");
  int i,j;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  display(arr,n);
  for(i=1;i<n;i++)
  {
    if(arr[i-1]==0)
    {
      //j=0;
      temp=arr[i-1];
      arr[i-1]=arr[i];
      arr[i]=temp;
      //j++;
    }
  }
  display(arr,n);
}
